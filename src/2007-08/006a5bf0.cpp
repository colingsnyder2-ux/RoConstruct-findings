// from server: 78% by colin
// roc 2007-08 006a5bf0  unit: CXTPMenuBar::CControlMDIButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5bf0

extern "C" __declspec(dllimport) int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct CXTPMenuBar__CControlMDIButton
{
    int sub_6A59A0(int);
    void Method();
};

void CXTPMenuBar__CControlMDIButton::Method()
{
    int result = this->sub_6A59A0(0);
    unsigned int id = *(unsigned int*)((char*)this + 0x84);
    if (id == 0x23bf)
    {
        PostMessageA((void*)result, 0x112, 0xf060, 0);
    }
    else
    {
        unsigned int cmd = (id == 0x23c0) ? 0xf120 : 0xf020;
        PostMessageA((void*)result, 0x112, cmd, 0);
    }
}
