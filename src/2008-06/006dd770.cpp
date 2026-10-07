// roc 2008-06 006dd770  unit: CXTTreeBase  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dd770
//
// 006dd770  83ec10               sub esp, 0x10
// 006dd773  56                   push esi
// 006dd774  8bf1                 mov esi, ecx
// 006dd776  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd779  e88ce80d00           call 0x7bc00a
// 006dd77e  a900020000           test eax, 0x200
// 006dd783  747c                 je 0x6dd801
// 006dd785  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006dd789  33c0                 xor eax, eax
// 006dd78b  89442404             mov dword ptr [esp + 4], eax
// 006dd78f  89442408             mov dword ptr [esp + 8], eax
// 006dd793  8944240c             mov dword ptr [esp + 0xc], eax
// 006dd797  89442410             mov dword ptr [esp + 0x10], eax
// 006dd79b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006dd79f  8d542404             lea edx, [esp + 4]
// 006dd7a3  52                   push edx
// 006dd7a4  89442408             mov dword ptr [esp + 8], eax
// 006dd7a8  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dd7ab  6a00                 push 0
// 006dd7ad  894c2410             mov dword ptr [esp + 0x10], ecx
// 006dd7b1  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dd7b4  6811110000           push 0x1111
// 006dd7b9  51                   push ecx
// 006dd7ba  ff15142e8000         call dword ptr [0x802e14]
// 006dd7c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006dd7c4  85c0                 test eax, eax
// 006dd7c6  7407                 je 0x6dd7cf
// 006dd7c8  f644240c46           test byte ptr [esp + 0xc], 0x46
// 006dd7cd  7502                 jne 0x6dd7d1
// 006dd7cf  33c0                 xor eax, eax
// 006dd7d1  394614               cmp dword ptr [esi + 0x14], eax
// 006dd7d4  742b                 je 0x6dd801
// 006dd7d6  894614               mov dword ptr [esi + 0x14], eax
// 006dd7d9  85c0                 test eax, eax
// 006dd7db  7413                 je 0x6dd7f0
// 006dd7dd  8b5634               mov edx, dword ptr [esi + 0x34]
// 006dd7e0  8b4220               mov eax, dword ptr [edx + 0x20]
// 006dd7e3  6a00                 push 0
// 006dd7e5  6a37                 push 0x37
// 006dd7e7  6a55                 push 0x55
// 006dd7e9  50                   push eax
// 006dd7ea  ff157c2d8000         call dword ptr [0x802d7c]
// 006dd7f0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd7f3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006dd7f6  6a00                 push 0
// 006dd7f8  6a00                 push 0
// 006dd7fa  52                   push edx
// 006dd7fb  ff15182e8000         call dword ptr [0x802e18]
// 006dd801  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd804  e85f34fcff           call 0x6a0c68
// 006dd809  5e                   pop esi
// 006dd80a  83c410               add esp, 0x10
// 006dd80d  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnMouseMove@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
