// from server: 77% by colin
struct CControlButtonExpand {
    void OnLButtonDown();
};

extern "C" int __fastcall sub_63A580(int);
extern "C" int __stdcall sub_645A70(int, int);
extern "C" void __fastcall sub_639DD0(void*);

void CControlButtonExpand::OnLButtonDown()
{
    if (*(int*)((char*)this + 0x16c) == 0)
        goto tail;

    {
        int eax = *(int*)((char*)this + 0x9c);
        if (eax == -1) {
            int ecx = *(int*)((char*)this + 0x158);
            if (ecx != 0)
                eax = sub_63A580(ecx);
        }
        if (eax == 0)
            goto tail;
    }

    {
        int ecx = *(int*)((char*)this + 0xfc);
        if (*(int*)(ecx + 0xdc) != 2) {
            if (*(int*)(ecx + 0xfc) != 5)
                goto tail;
        }
    }

    sub_645A70(*(int*)((char*)this + 0x80), 0);
    return;

tail:
    sub_639DD0(this);
}
