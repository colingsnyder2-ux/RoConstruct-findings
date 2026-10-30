// roc 2009-06 00808c00  unit: CXTShadowHook  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808c00
//
// 00808c00  56                   push esi
// 00808c01  8bf1                 mov esi, ecx
// 00808c03  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00808c07  7505                 jne 0x808c0e
// 00808c09  e8b2fbffff           call 0x8087c0
// 00808c0e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00808c12  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00808c15  8b5008               mov edx, dword ptr [eax + 8]
// 00808c18  8b767c               mov esi, dword ptr [esi + 0x7c]
// 00808c1b  2b4804               sub ecx, dword ptr [eax + 4]
// 00808c1e  2b10                 sub edx, dword ptr [eax]
// 00808c20  85f6                 test esi, esi
// 00808c22  7403                 je 0x808c27
// 00808c24  8b7604               mov esi, dword ptr [esi + 4]
// 00808c27  8b442408             mov eax, dword ptr [esp + 8]
// 00808c2b  682000cc00           push 0xcc0020
// 00808c30  6a00                 push 0
// 00808c32  6a00                 push 0
// 00808c34  56                   push esi
// 00808c35  51                   push ecx
// 00808c36  8b4804               mov ecx, dword ptr [eax + 4]
// 00808c39  52                   push edx
// 00808c3a  6a00                 push 0
// 00808c3c  6a00                 push 0
// 00808c3e  51                   push ecx
// 00808c3f  ff15e0e08900         call dword ptr [0x89e0e0]
// 00808c45  5e                   pop esi
// 00808c46  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?DrawPseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
