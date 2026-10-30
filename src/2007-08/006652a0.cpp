// from server: 100% by auto
// roc 2007-08 006652a0  unit: CXTTreeBase  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006652a0
//
// 006652a0  56                   push esi
// 006652a1  57                   push edi
// 006652a2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006652a6  817f08f7fdffff       cmp dword ptr [edi + 8], 0xfffffdf7
// 006652ad  8bf1                 mov esi, ecx
// 006652af  752d                 jne 0x6652de
// 006652b1  8b4634               mov eax, dword ptr [esi + 0x34]
// 006652b4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006652b7  6a00                 push 0
// 006652b9  6a00                 push 0
// 006652bb  6819110000           push 0x1119
// 006652c0  51                   push ecx
// 006652c1  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006652c7  85c0                 test eax, eax
// 006652c9  7413                 je 0x6652de
// 006652cb  6a13                 push 0x13
// 006652cd  6a00                 push 0
// 006652cf  6a00                 push 0
// 006652d1  6a00                 push 0
// 006652d3  6a00                 push 0
// 006652d5  6a00                 push 0
// 006652d7  50                   push eax
// 006652d8  ff15a4ee7700         call dword ptr [0x77eea4]
// 006652de  8b542414             mov edx, dword ptr [esp + 0x14]
// 006652e2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006652e6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006652e9  52                   push edx
// 006652ea  57                   push edi
// 006652eb  50                   push eax
// 006652ec  e8cdaafcff           call 0x62fdbe
// 006652f1  5f                   pop edi
// 006652f2  5e                   pop esi
// 006652f3  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnNotify@CXTTreeBase@@MAEHIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
