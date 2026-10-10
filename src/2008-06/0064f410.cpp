// from server: 89% by atomic.potato
struct ImageButton {
    void *field_14c;
    int f(void *value);
};

extern "C" void __fastcall sub_642690(void *object, void *value);

int ImageButton::f(void *value)
{
    sub_642690((char *)this + 0x14c, value);
    return (int)value;
}
