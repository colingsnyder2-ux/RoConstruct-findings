// roc 2007-08 006669d0  unit: CXTTreeBase  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006669d0
//
// 006669d0  83ec10               sub esp, 0x10
// 006669d3  56                   push esi
// 006669d4  8bf1                 mov esi, ecx
// 006669d6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006669d9  e8341a0d00           call 0x738412
// 006669de  a900020000           test eax, 0x200
// 006669e3  747c                 je 0x666a61
// 006669e5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006669e9  33c0                 xor eax, eax
// 006669eb  89442404             mov dword ptr [esp + 4], eax
// 006669ef  89442408             mov dword ptr [esp + 8], eax
// 006669f3  8944240c             mov dword ptr [esp + 0xc], eax
// 006669f7  89442410             mov dword ptr [esp + 0x10], eax
// 006669fb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006669ff  8d542404             lea edx, [esp + 4]
// 00666a03  52                   push edx
// 00666a04  89442408             mov dword ptr [esp + 8], eax
// 00666a08  8b4634               mov eax, dword ptr [esi + 0x34]
// 00666a0b  6a00                 push 0
// 00666a0d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00666a11  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00666a14  6811110000           push 0x1111
// 00666a19  51                   push ecx
// 00666a1a  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00666a20  8b442410             mov eax, dword ptr [esp + 0x10]
// 00666a24  85c0                 test eax, eax
// 00666a26  7407                 je 0x666a2f
// 00666a28  f644240c46           test byte ptr [esp + 0xc], 0x46
// 00666a2d  7502                 jne 0x666a31
// 00666a2f  33c0                 xor eax, eax
// 00666a31  394614               cmp dword ptr [esi + 0x14], eax
// 00666a34  742b                 je 0x666a61
// 00666a36  85c0                 test eax, eax
// 00666a38  894614               mov dword ptr [esi + 0x14], eax
// 00666a3b  7413                 je 0x666a50
// 00666a3d  8b5634               mov edx, dword ptr [esi + 0x34]
// 00666a40  8b4220               mov eax, dword ptr [edx + 0x20]
// 00666a43  6a00                 push 0
// 00666a45  6a37                 push 0x37
// 00666a47  6a55                 push 0x55
// 00666a49  50                   push eax
// 00666a4a  ff15eced7700         call dword ptr [0x77edec]
// 00666a50  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00666a53  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00666a56  6a00                 push 0
// 00666a58  6a00                 push 0
// 00666a5a  52                   push edx
// 00666a5b  ff15dcec7700         call dword ptr [0x77ecdc]
// 00666a61  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00666a64  e8d597fcff           call 0x63023e
// 00666a69  5e                   pop esi
// 00666a6a  83c410               add esp, 0x10
// 00666a6d  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnMouseMove@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
