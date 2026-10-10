// from server: 92% by colin
struct CXTPStatusBar {
    int getColor();
};

extern "C" int __stdcall sub_668F70();
extern "C" void __stdcall sub_668770(int);

int CXTPStatusBar::getColor()
{
    int v = *(int*)((char*)this + 0x90);
    if (v != -1)
        return v;
    if (*(int*)((char*)this + 0x2c) == 5)
        return 0x4c4c4c;
    sub_668F70();
    sub_668770(0x17);
    return 0;
}
