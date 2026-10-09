// roc 2007-03 00652a10  unit: seg_00650000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00652a10
//
// 00652a10  83ec10               sub esp, 0x10
// 00652a13  56                   push esi
// 00652a14  8bf1                 mov esi, ecx
// 00652a16  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00652a19  e8a6810e00           call 0x73abc4
// 00652a1e  a900020000           test eax, 0x200
// 00652a23  747c                 je 0x652aa1
// 00652a25  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00652a29  33c0                 xor eax, eax
// 00652a2b  89442404             mov dword ptr [esp + 4], eax
// 00652a2f  89442408             mov dword ptr [esp + 8], eax
// 00652a33  8944240c             mov dword ptr [esp + 0xc], eax
// 00652a37  89442410             mov dword ptr [esp + 0x10], eax
// 00652a3b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00652a3f  8d542404             lea edx, [esp + 4]
// 00652a43  52                   push edx
// 00652a44  89442408             mov dword ptr [esp + 8], eax
// 00652a48  8b4634               mov eax, dword ptr [esi + 0x34]
// 00652a4b  6a00                 push 0
// 00652a4d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00652a51  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00652a54  6811110000           push 0x1111
// 00652a59  51                   push ecx
// 00652a5a  ff1550ee7700         call dword ptr [0x77ee50]
// 00652a60  8b442410             mov eax, dword ptr [esp + 0x10]
// 00652a64  85c0                 test eax, eax
// 00652a66  7407                 je 0x652a6f
// 00652a68  f644240c46           test byte ptr [esp + 0xc], 0x46
// 00652a6d  7502                 jne 0x652a71
// 00652a6f  33c0                 xor eax, eax
// 00652a71  394614               cmp dword ptr [esi + 0x14], eax
// 00652a74  742b                 je 0x652aa1
// 00652a76  85c0                 test eax, eax
// 00652a78  894614               mov dword ptr [esi + 0x14], eax
// 00652a7b  7413                 je 0x652a90
// 00652a7d  8b5634               mov edx, dword ptr [esi + 0x34]
// 00652a80  8b4220               mov eax, dword ptr [edx + 0x20]
// 00652a83  6a00                 push 0
// 00652a85  6a37                 push 0x37
// 00652a87  6a55                 push 0x55
// 00652a89  50                   push eax
// 00652a8a  ff1544ed7700         call dword ptr [0x77ed44]
// 00652a90  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00652a93  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00652a96  6a00                 push 0
// 00652a98  6a00                 push 0
// 00652a9a  52                   push edx
// 00652a9b  ff1554ee7700         call dword ptr [0x77ee54]
// 00652aa1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00652aa4  e829bcfcff           call 0x61e6d2
// 00652aa9  5e                   pop esi
// 00652aaa  83c410               add esp, 0x10
// 00652aad  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnMouseMove@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
