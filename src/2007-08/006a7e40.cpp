// from server: 74% by colin
// roc 2007-08 006a7e40  unit: CXTPRibbonBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7e40
//
// 006a7e40  56                   push esi
// 006a7e41  8bf1                 mov esi, ecx
// 006a7e43  e838070900           call 0x738580
// 006a7e48  8bce                 mov ecx, esi
// 006a7e4a  e891fbffff           call 0x6a79e0
// 006a7e4f  8b10                 mov edx, dword ptr [eax]
// 006a7e51  8bc8                 mov ecx, eax
// 006a7e53  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 006a7e59  ffd0                 call eax
// 006a7e5b  8bb664020000         mov esi, dword ptr [esi + 0x264]
// 006a7e61  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 006a7e67  8b4208               mov eax, dword ptr [edx + 8]
// 006a7e6a  8d8e78010000         lea ecx, [esi + 0x178]
// 006a7e70  5e                   pop esi
// 006a7e71  ffe0                 jmp eax

struct CXTPRibbonBar
{
    void sub_738580();
    void* sub_6a79e0();
    void func_006a7e40();
};

void CXTPRibbonBar::func_006a7e40()
{
    sub_738580();
    void* p = sub_6a79e0();
    void** vtbl = *(void***)p;
    void (*fn)(void*) = (void (*)(void*))vtbl[0xa8 / 4];
    fn(p);

    char* base = (char*)this;
    char* obj = *(char**)(base + 0x264);
    char** slot = (char**)(obj + 0x178);
    void* target = *(void**)(*slot + 8);
    void (*jmpfn)(void*) = (void (*)(void*))target;
    jmpfn(slot);
}
