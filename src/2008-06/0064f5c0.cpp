// from server: 93% by atomic.potato
struct ImageKeyButton
{
    int f(int value);
};

extern "C" int __stdcall sub_642690(void* p, int value);

int ImageKeyButton::f(int value)
{
    int result = sub_642690((char*)this + 0x150, value);
    return value;
}
