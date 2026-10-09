// from server: 82% by colin
// roc 2007-08 00718f00  unit: CXTPRibbonQuickAccessControls  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00718f00
//
// 00718f00  56                   push esi
// 00718f01  8bf1                 mov esi, ecx
// 00718f03  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00718f06  83b97002000000       cmp dword ptr [ecx + 0x270], 0
// 00718f0d  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00718f10  57                   push edi
// 00718f11  7503                 jne 0x718f16
// 00718f13  83e801               sub eax, 1
// 00718f16  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00718f1a  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 00718f20  50                   push eax
// 00718f21  57                   push edi
// 00718f22  e83936f6ff           call 0x67c560
// 00718f27  83c704               add edi, 4
// 00718f2a  57                   push edi
// 00718f2b  ff15ecd27700         call dword ptr [0x77d2ec]
// 00718f31  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00718f34  e867ddf2ff           call 0x646ca0
// 00718f39  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00718f3c  8b01                 mov eax, dword ptr [ecx]
// 00718f3e  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 00718f44  ffd2                 call edx
// 00718f46  5f                   pop edi
// 00718f47  5e                   pop esi
// 00718f48  c20400               ret 4

extern "C" long __stdcall InterlockedIncrement(long volatile *);
extern "C" void __stdcall sub_67c560(void *, int *, int);
extern "C" void __stdcall sub_646ca0(void *);

struct CXTPRibbonQuickAccessControls {
    char pad[0x20];
    void *field20;
    char pad2[0x2c - 0x24];
    int field2c;
    void sub_718f00(int *);
};

void CXTPRibbonQuickAccessControls::sub_718f00(int *arg) {
    void *p = this->field20;
    int v = this->field2c;
    if (*(int *)((char *)p + 0x270) == 0)
        v -= 1;
    void *q = *(void **)((char *)p + 0xf8);
    sub_67c560(q, arg, v);
    InterlockedIncrement((long *)(arg + 1));
    sub_646ca0(this->field20);
    void *r = this->field20;
    void **vt = *(void ***)r;
    typedef void (__thiscall *Fn)(void *);
    Fn f = (Fn)vt[0x17c / 4];
    f(r);
}
