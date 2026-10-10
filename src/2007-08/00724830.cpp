// from server: 60% by colin
struct CXTIconHandle {
    void f();
};

extern "C" void __stdcall sub_723650(int, int);
extern "C" void __stdcall sub_724630(int);

void CXTIconHandle::f()
{
    sub_723650(*(int*)((char*)this + 0xb1c), (int)((char*)this + 0x94));
    sub_723650(*(int*)((char*)this + 0xb28), (int)((char*)this + 0x988));
    sub_724630((int)((char*)this + 0xb30));

    int eax = 0x12;
    for (;;) {
        unsigned char c1 = *(unsigned char*)(0x7e46ec + eax);
        if (*(unsigned short*)((char*)this + c1 * 4 + 0xa7e) != 0) {
            eax -= 3;
            break;
        }
        unsigned char c2 = *(unsigned char*)(0x7e46eb + eax);
        if (*(unsigned short*)((char*)this + c2 * 4 + 0xa7e) != 0) {
            eax -= 1;
            break;
        }
        unsigned char c3 = *(unsigned char*)(0x7e46ea + eax);
        if (*(unsigned short*)((char*)this + c3 * 4 + 0xa7e) != 0) {
            eax -= 2;
            break;
        }
        unsigned char c4 = *(unsigned char*)(0x7e46e9 + eax);
        if (*(unsigned short*)((char*)this + c4 * 4 + 0xa7e) != 0) {
            eax -= 3;
            break;
        }
        eax -= 4;
        if (eax < 3)
            break;
    }
    *(int*)((char*)this + 0x16a8) += eax * 3 + 0x11;
}
