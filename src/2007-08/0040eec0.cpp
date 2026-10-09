// from server: 25% by colin
// roc 2007-08 0040eec0  unit: CChildFrame  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040eec0
//
// 0040eec0  6aff                 push -1
// 0040eec2  68fad87300           push 0x73d8fa
// 0040eec7  64a100000000         mov eax, dword ptr fs:[0]
// 0040eecd  50                   push eax
// 0040eece  51                   push ecx
// 0040eecf  56                   push esi
// 0040eed0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0040eed5  33c4                 xor eax, esp
// 0040eed7  50                   push eax
// 0040eed8  8d44240c             lea eax, [esp + 0xc]
// 0040eedc  64a300000000         mov dword ptr fs:[0], eax
// 0040eee2  68dc000000           push 0xdc
// 0040eee7  e80a102200           call 0x62fef6
// 0040eeec  8bf0                 mov esi, eax
// 0040eeee  83c404               add esp, 4
// 0040eef1  89742408             mov dword ptr [esp + 8], esi
// 0040eef5  33c0                 xor eax, eax
// 0040eef7  3bf0                 cmp esi, eax
// 0040eef9  89442414             mov dword ptr [esp + 0x14], eax
// 0040eefd  740f                 je 0x40ef0e
// 0040eeff  8bce                 mov ecx, esi
// 0040ef01  e8c4142200           call 0x6303ca
// 0040ef06  c7061c6b7800         mov dword ptr [esi], 0x786b1c
// 0040ef0c  8bc6                 mov eax, esi
// 0040ef0e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040ef12  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ef19  59                   pop ecx
// 0040ef1a  5e                   pop esi
// 0040ef1b  83c410               add esp, 0x10
// 0040ef1e  c3                   ret 

struct CChildFrame {
    void* field0;
    CChildFrame();
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_6303CA();

CChildFrame::CChildFrame()
{
    CChildFrame* p = (CChildFrame*)sub_62FEF6(0xdc);
    if (p != 0) {
        sub_6303CA();
        *(void**)p = (void*)0x786b1c;
    }
}
