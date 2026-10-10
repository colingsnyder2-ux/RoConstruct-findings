// from server: 66% by atomic.potato
struct GuiButton
{
    void SetValue(float value);
};

void GuiButton::SetValue(float value)
{
    *(float*)((char*)this + 0x184) = value;
}
