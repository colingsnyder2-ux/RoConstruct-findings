// from server: 37% by colin
// roc 2007-08 0040ee60  unit: CChildFrame  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040ee60
//
// 0040ee60  6aff                 push -1
// 0040ee62  68fad87300           push 0x73d8fa
// 0040ee67  64a100000000         mov eax, dword ptr fs:[0]
// 0040ee6d  50                   push eax
// 0040ee6e  51                   push ecx
// 0040ee6f  56                   push esi
// 0040ee70  a188518b00           mov eax, dword ptr [0x8b5188]
// 0040ee75  33c4                 xor eax, esp
// 0040ee77  50                   push eax
// 0040ee78  8d44240c             lea eax, [esp + 0xc]
// 0040ee7c  64a300000000         mov dword ptr fs:[0], eax
// 0040ee82  68dc000000           push 0xdc
// 0040ee87  e86a102200           call 0x62fef6
// 0040ee8c  8bf0                 mov esi, eax
// 0040ee8e  83c404               add esp, 4
// 0040ee91  89742408             mov dword ptr [esp + 8], esi
// 0040ee95  33c0                 xor eax, eax
// 0040ee97  3bf0                 cmp esi, eax
// 0040ee99  89442414             mov dword ptr [esp + 0x14], eax
// 0040ee9d  740f                 je 0x40eeae
// 0040ee9f  8bce                 mov ecx, esi
// 0040eea1  e824152200           call 0x6303ca
// 0040eea6  c70644697800         mov dword ptr [esi], 0x786944
// 0040eeac  8bc6                 mov eax, esi
// 0040eeae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040eeb2  64890d00000000       mov dword ptr fs:[0], ecx
// 0040eeb9  59                   pop ecx
// 0040eeba  5e                   pop esi
// 0040eebb  83c410               add esp, 0x10
// 0040eebe  c3                   ret 

struct CChildFrame {
    void construct();
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl construct_helper(void*);

void CChildFrame::construct()
{
    CChildFrame* p = (CChildFrame*)operator_new(0xdc);
    if (p != 0)
    {
        construct_helper(p);
        *(void**)p = (void*)0x786944;
    }
}
