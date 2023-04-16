
void DrawBox(float X, float Y, float W, float H, const ImU32& color, int thickness)
{
	ImDrawList* Drawlist = ImGui::GetBackgroundDrawList();

	Drawlist->AddRect(ImVec2(X + 1, Y + 1), ImVec2(((X + W) - 1), ((Y + H) - 1)), ImGui::GetColorU32(color), thickness);
	Drawlist->AddRect(ImVec2(X, Y), ImVec2(X + W, Y + H), ImGui::GetColorU32(color), thickness);
}

void DrawFilledRect(int x, int y, int w, int h, ImU32 color)
{
	ImDrawList* Drawlist = ImGui::GetBackgroundDrawList();
	Drawlist->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), color, 0, 0);
}

void DrawCorneredBox(int x, int y, int w, int h, ImColor color, int thickness) {

	ImDrawList* Drawlist = ImGui::GetBackgroundDrawList();

	float line_w = (w / 3);
	float line_h = (h / 3);
	Drawlist->AddLine(ImVec2(x, y), ImVec2(x, y + line_h), color, thickness);
	Drawlist->AddLine(ImVec2(x, y), ImVec2(x + line_w, y), color, thickness);
	Drawlist->AddLine(ImVec2(x + w - line_w, y), ImVec2(x + w, y), color, thickness);
	Drawlist->AddLine(ImVec2(x + w, y), ImVec2(x + w, y + line_h), color, thickness);
	Drawlist->AddLine(ImVec2(x, y + h - line_h), ImVec2(x, y + h), color, thickness);
	Drawlist->AddLine(ImVec2(x, y + h), ImVec2(x + line_w, y + h), color, thickness);
	Drawlist->AddLine(ImVec2(x + w - line_w, y + h), ImVec2(x + w, y + h), color, thickness);
	Drawlist->AddLine(ImVec2(x + w, y + h - line_h), ImVec2(x + w, y + h), color, thickness);
}

void DrawLine(int x1, int y1, int x2, int y2, RGBA* color, int thickness)
{
	ImDrawList* Drawlist = ImGui::GetBackgroundDrawList();
	Drawlist->AddLine(ImVec2(x1, y1), ImVec2(x2, y2), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), thickness);
}
