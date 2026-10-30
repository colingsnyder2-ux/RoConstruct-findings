// roc 2012-06 00a60150  unit: CXTColorPageStandard  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a60150
//
// 00a60150  6aff                 push -1
// 00a60152  68a67bae00           push 0xae7ba6
// 00a60157  64a100000000         mov eax, dword ptr fs:[0]
// 00a6015d  50                   push eax
// 00a6015e  51                   push ecx
// 00a6015f  56                   push esi
// 00a60160  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a60165  33c4                 xor eax, esp
// 00a60167  50                   push eax
// 00a60168  8d44240c             lea eax, [esp + 0xc]
// 00a6016c  64a300000000         mov dword ptr fs:[0], eax
// 00a60172  8bf1                 mov esi, ecx
// 00a60174  89742408             mov dword ptr [esp + 8], esi
// 00a60178  6a30                 push 0x30
// 00a6017a  6a00                 push 0
// 00a6017c  6862240000           push 0x2462
// 00a60181  e8d89b0300           call 0xa99d5e
// 00a60186  8d8e88000000         lea ecx, [esi + 0x88]
// 00a6018c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a60194  c7064c45c200         mov dword ptr [esi], 0xc2454c
// 00a6019a  e8e1f9ffff           call 0xa5fb80
// 00a6019f  8bce                 mov ecx, esi
// 00a601a1  c644241401           mov byte ptr [esp + 0x14], 1
// 00a601a6  e8159a0300           call 0xa99bc0
// 00a601ab  83c004               add eax, 4
// 00a601ae  8320df               and dword ptr [eax], 0xffffffdf
// 00a601b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a601b5  898618010000         mov dword ptr [esi + 0x118], eax
// 00a601bb  8bc6                 mov eax, esi
// 00a601bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a601c1  64890d00000000       mov dword ptr fs:[0], ecx
// 00a601c8  59                   pop ecx
// 00a601c9  5e                   pop esi
// 00a601ca  83c410               add esp, 0x10
// 00a601cd  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageStandard@@QAE@PAVCXTColorDialog@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp