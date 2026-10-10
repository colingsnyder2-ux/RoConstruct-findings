// from server: 61% by atomic.potato
struct GuiObject
{
    char padding[0x34];
    int field34;
    float field20;

    void setValue(int value);
};

float g_value_00ba8508;

void GuiObject::setValue(int value)
{
    int oldValue = field34;
    field34 = value;
    if (oldValue == value || value != 0)
        return;
    field20 = g_value_00ba8508;
}
