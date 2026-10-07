// roc 2011-06 008488d0  unit: CXTTreeBase  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008488d0
//
// 008488d0  83ec10               sub esp, 0x10
// 008488d3  56                   push esi
// 008488d4  8bf1                 mov esi, ecx
// 008488d6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008488d9  e83a3d1800           call 0x9cc618
// 008488de  a900020000           test eax, 0x200
// 008488e3  747c                 je 0x848961
// 008488e5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008488e9  33c0                 xor eax, eax
// 008488eb  89442404             mov dword ptr [esp + 4], eax
// 008488ef  89442408             mov dword ptr [esp + 8], eax
// 008488f3  8944240c             mov dword ptr [esp + 0xc], eax
// 008488f7  89442410             mov dword ptr [esp + 0x10], eax
// 008488fb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008488ff  8d542404             lea edx, [esp + 4]
// 00848903  52                   push edx
// 00848904  89442408             mov dword ptr [esp + 8], eax
// 00848908  8b4634               mov eax, dword ptr [esi + 0x34]
// 0084890b  6a00                 push 0
// 0084890d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00848911  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00848914  6811110000           push 0x1111
// 00848919  51                   push ecx
// 0084891a  ff15c019a400         call dword ptr [0xa419c0]
// 00848920  8b442410             mov eax, dword ptr [esp + 0x10]
// 00848924  85c0                 test eax, eax
// 00848926  7407                 je 0x84892f
// 00848928  f644240c46           test byte ptr [esp + 0xc], 0x46
// 0084892d  7502                 jne 0x848931
// 0084892f  33c0                 xor eax, eax
// 00848931  394614               cmp dword ptr [esi + 0x14], eax
// 00848934  742b                 je 0x848961
// 00848936  894614               mov dword ptr [esi + 0x14], eax
// 00848939  85c0                 test eax, eax
// 0084893b  7413                 je 0x848950
// 0084893d  8b5634               mov edx, dword ptr [esi + 0x34]
// 00848940  8b4220               mov eax, dword ptr [edx + 0x20]
// 00848943  6a00                 push 0
// 00848945  6a37                 push 0x37
// 00848947  6a55                 push 0x55
// 00848949  50                   push eax
// 0084894a  ff15741ca400         call dword ptr [0xa41c74]
// 00848950  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848953  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00848956  6a00                 push 0
// 00848958  6a00                 push 0
// 0084895a  52                   push edx
// 0084895b  ff15ec19a400         call dword ptr [0xa419ec]
// 00848961  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848964  e8c51cfcff           call 0x80a62e
// 00848969  5e                   pop esi
// 0084896a  83c410               add esp, 0x10
// 0084896d  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnMouseMove@CXTPTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
