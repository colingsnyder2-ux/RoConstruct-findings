// from server: 89% by colin
// roc 2007-08 006ca4f0  unit: CXTPToolBar::CControlButtonHide  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ca4f0
//
// 006ca4f0  56                   push esi
// 006ca4f1  8bf1                 mov esi, ecx
// 006ca4f3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006ca4f9  83f8ff               cmp eax, -1
// 006ca4fc  750f                 jne 0x6ca50d
// 006ca4fe  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 006ca504  85c9                 test ecx, ecx
// 006ca506  7405                 je 0x6ca50d
// 006ca508  e87300f7ff           call 0x63a580
// 006ca50d  85c0                 test eax, eax
// 006ca50f  7424                 je 0x6ca535
// 006ca511  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 006ca517  83b8f400000002       cmp dword ptr [eax + 0xf4], 2
// 006ca51e  7409                 je 0x6ca529
// 006ca520  83b8fc00000005       cmp dword ptr [eax + 0xfc], 5
// 006ca527  750c                 jne 0x6ca535
// 006ca529  8b06                 mov eax, dword ptr [esi]
// 006ca52b  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 006ca531  8bce                 mov ecx, esi
// 006ca533  ffd2                 call edx
// 006ca535  5e                   pop esi
// 006ca536  c20800               ret 8

struct CXTPToolBar_CControlButtonHide
{
    char pad_0[0x9c];
    int field_9c;
    char pad_a0[0xbc];
    int field_158;

    int __thiscall func(int a, int b);
};

struct SubObj
{
    char pad_0[0xf4];
    int field_f4;
    char pad_f8[4];
    int field_fc;
};

extern "C" int __cdecl sub_0063a580(int);

int __thiscall CXTPToolBar_CControlButtonHide::func(int a, int b)
{
    int eax = this->field_9c;
    if (eax != -1)
    {
        int ecx = this->field_158;
        if (ecx != 0)
        {
            eax = sub_0063a580(ecx);
        }
    }
    if (eax != 0)
    {
        SubObj* p = *(SubObj**)((char*)this + 0xfc);
        if (p->field_f4 == 2 || p->field_fc == 5)
        {
            void** vt = *(void***)this;
            void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x98/4];
            fn(this);
        }
    }
    return 0;
}
