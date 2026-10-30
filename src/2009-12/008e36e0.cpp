// roc 2009-12 008e36e0  unit: PAVCXTShadowWnd::?$CList  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e36e0
//
// 008e36e0  56                   push esi
// 008e36e1  8bf1                 mov esi, ecx
// 008e36e3  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 008e36e7  7505                 jne 0x8e36ee
// 008e36e9  e8b2fbffff           call 0x8e32a0
// 008e36ee  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e36f2  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008e36f5  8b5008               mov edx, dword ptr [eax + 8]
// 008e36f8  8b767c               mov esi, dword ptr [esi + 0x7c]
// 008e36fb  2b4804               sub ecx, dword ptr [eax + 4]
// 008e36fe  2b10                 sub edx, dword ptr [eax]
// 008e3700  85f6                 test esi, esi
// 008e3702  7403                 je 0x8e3707
// 008e3704  8b7604               mov esi, dword ptr [esi + 4]
// 008e3707  8b442408             mov eax, dword ptr [esp + 8]
// 008e370b  682000cc00           push 0xcc0020
// 008e3710  6a00                 push 0
// 008e3712  6a00                 push 0
// 008e3714  56                   push esi
// 008e3715  51                   push ecx
// 008e3716  8b4804               mov ecx, dword ptr [eax + 4]
// 008e3719  52                   push edx
// 008e371a  6a00                 push 0
// 008e371c  6a00                 push 0
// 008e371e  51                   push ecx
// 008e371f  ff1548b19800         call dword ptr [0x98b148]
// 008e3725  5e                   pop esi
// 008e3726  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?DrawPseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
