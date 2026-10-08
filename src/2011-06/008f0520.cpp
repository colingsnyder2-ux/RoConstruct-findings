// roc 2011-06 008f0520  unit: PAVCXTShadowWnd::?$CList  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0520
//
// 008f0520  56                   push esi
// 008f0521  8bf1                 mov esi, ecx
// 008f0523  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 008f0527  7505                 jne 0x8f052e
// 008f0529  e842fbffff           call 0x8f0070
// 008f052e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f0532  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008f0535  8b5008               mov edx, dword ptr [eax + 8]
// 008f0538  8b767c               mov esi, dword ptr [esi + 0x7c]
// 008f053b  2b4804               sub ecx, dword ptr [eax + 4]
// 008f053e  2b10                 sub edx, dword ptr [eax]
// 008f0540  85f6                 test esi, esi
// 008f0542  7403                 je 0x8f0547
// 008f0544  8b7604               mov esi, dword ptr [esi + 4]
// 008f0547  8b442408             mov eax, dword ptr [esp + 8]
// 008f054b  682000cc00           push 0xcc0020
// 008f0550  6a00                 push 0
// 008f0552  6a00                 push 0
// 008f0554  56                   push esi
// 008f0555  51                   push ecx
// 008f0556  8b4804               mov ecx, dword ptr [eax + 4]
// 008f0559  52                   push edx
// 008f055a  6a00                 push 0
// 008f055c  6a00                 push 0
// 008f055e  51                   push ecx
// 008f055f  ff159001a400         call dword ptr [0xa40190]
// 008f0565  5e                   pop esi
// 008f0566  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?DrawPseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
