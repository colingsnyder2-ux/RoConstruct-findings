// from server: 100% by auto
// roc 2008-06 006dc070  unit: CXTTreeBase  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc070
//
// 006dc070  56                   push esi
// 006dc071  57                   push edi
// 006dc072  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006dc076  817f08f7fdffff       cmp dword ptr [edi + 8], 0xfffffdf7
// 006dc07d  8bf1                 mov esi, ecx
// 006dc07f  752d                 jne 0x6dc0ae
// 006dc081  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dc084  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dc087  6a00                 push 0
// 006dc089  6a00                 push 0
// 006dc08b  6819110000           push 0x1119
// 006dc090  51                   push ecx
// 006dc091  ff15142e8000         call dword ptr [0x802e14]
// 006dc097  85c0                 test eax, eax
// 006dc099  7413                 je 0x6dc0ae
// 006dc09b  6a13                 push 0x13
// 006dc09d  6a00                 push 0
// 006dc09f  6a00                 push 0
// 006dc0a1  6a00                 push 0
// 006dc0a3  6a00                 push 0
// 006dc0a5  6a00                 push 0
// 006dc0a7  50                   push eax
// 006dc0a8  ff15b02b8000         call dword ptr [0x802bb0]
// 006dc0ae  8b542414             mov edx, dword ptr [esp + 0x14]
// 006dc0b2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006dc0b6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dc0b9  52                   push edx
// 006dc0ba  57                   push edi
// 006dc0bb  50                   push eax
// 006dc0bc  e82147fcff           call 0x6a07e2
// 006dc0c1  5f                   pop edi
// 006dc0c2  5e                   pop esi
// 006dc0c3  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnNotify@CXTTreeBase@@MAEHIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
