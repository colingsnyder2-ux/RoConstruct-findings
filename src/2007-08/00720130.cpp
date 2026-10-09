// from server: 34% by colin
// roc 2007-08 00720130  unit: CXTColorSelectorCtrlThemeOffice2003  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720130
//
// 00720130  6aff                 push -1
// 00720132  68fad87300           push 0x73d8fa
// 00720137  64a100000000         mov eax, dword ptr fs:[0]
// 0072013d  50                   push eax
// 0072013e  51                   push ecx
// 0072013f  56                   push esi
// 00720140  a188518b00           mov eax, dword ptr [0x8b5188]
// 00720145  33c4                 xor eax, esp
// 00720147  50                   push eax
// 00720148  8d44240c             lea eax, [esp + 0xc]
// 0072014c  64a300000000         mov dword ptr fs:[0], eax
// 00720152  6a14                 push 0x14
// 00720154  e89dfdf0ff           call 0x62fef6
// 00720159  8bf0                 mov esi, eax
// 0072015b  83c404               add esp, 4
// 0072015e  89742408             mov dword ptr [esp + 8], esi
// 00720162  33c0                 xor eax, eax
// 00720164  3bf0                 cmp esi, eax
// 00720166  89442414             mov dword ptr [esp + 0x14], eax
// 0072016a  740f                 je 0x72017b
// 0072016c  8bce                 mov ecx, esi
// 0072016e  e84d1ef7ff           call 0x691fc0
// 00720173  c706cc217e00         mov dword ptr [esi], 0x7e21cc
// 00720179  8bc6                 mov eax, esi
// 0072017b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072017f  64890d00000000       mov dword ptr fs:[0], ecx
// 00720186  59                   pop ecx
// 00720187  5e                   pop esi
// 00720188  83c410               add esp, 0x10
// 0072018b  c3                   ret 

extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" void __cdecl func_00691fc0(void* self);

struct CXTColorSelectorCtrlThemeOffice2003
{
    void* construct();
};

void* CXTColorSelectorCtrlThemeOffice2003::construct()
{
    void* p = func_0062fef6(0x14);
    if (p != 0)
    {
        func_00691fc0(p);
        *(void**)p = (void*)0x7e21cc;
    }
    return p;
}
