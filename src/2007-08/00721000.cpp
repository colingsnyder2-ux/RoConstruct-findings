// from server: 34% by colin
// roc 2007-08 00721000  unit: CXTButtonThemeOffice2003  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00721000
//
// 00721000  6aff                 push -1
// 00721002  68fad87300           push 0x73d8fa
// 00721007  64a100000000         mov eax, dword ptr fs:[0]
// 0072100d  50                   push eax
// 0072100e  51                   push ecx
// 0072100f  56                   push esi
// 00721010  a188518b00           mov eax, dword ptr [0x8b5188]
// 00721015  33c4                 xor eax, esp
// 00721017  50                   push eax
// 00721018  8d44240c             lea eax, [esp + 0xc]
// 0072101c  64a300000000         mov dword ptr fs:[0], eax
// 00721022  6a14                 push 0x14
// 00721024  e8cdeef0ff           call 0x62fef6
// 00721029  8bf0                 mov esi, eax
// 0072102b  83c404               add esp, 4
// 0072102e  89742408             mov dword ptr [esp + 8], esi
// 00721032  33c0                 xor eax, eax
// 00721034  3bf0                 cmp esi, eax
// 00721036  89442414             mov dword ptr [esp + 0x14], eax
// 0072103a  740f                 je 0x72104b
// 0072103c  8bce                 mov ecx, esi
// 0072103e  e87d0ff7ff           call 0x691fc0
// 00721043  c70608237e00         mov dword ptr [esi], 0x7e2308
// 00721049  8bc6                 mov eax, esi
// 0072104b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072104f  64890d00000000       mov dword ptr fs:[0], ecx
// 00721056  59                   pop ecx
// 00721057  5e                   pop esi
// 00721058  83c410               add esp, 0x10
// 0072105b  c3                   ret 

struct CXTButtonThemeOffice2003
{
    void* vtable;
    void* construct();
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl CXTButtonThemeOffice2003_ctor(void* p);

void* CXTButtonThemeOffice2003::construct()
{
    CXTButtonThemeOffice2003* p = (CXTButtonThemeOffice2003*)operator_new(0x14);
    if (p != 0)
    {
        CXTButtonThemeOffice2003_ctor(p);
        p->vtable = (void*)0x7e2308;
    }
    return p;
}
