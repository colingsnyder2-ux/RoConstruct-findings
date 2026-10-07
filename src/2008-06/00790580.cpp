// roc 2008-06 00790580  unit: PAVCXTShadowWnd::?$CList  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00790580
//
// 00790580  56                   push esi
// 00790581  8bf1                 mov esi, ecx
// 00790583  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00790587  7505                 jne 0x79058e
// 00790589  e8b2fbffff           call 0x790140
// 0079058e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00790592  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00790595  8b5008               mov edx, dword ptr [eax + 8]
// 00790598  8b767c               mov esi, dword ptr [esi + 0x7c]
// 0079059b  2b4804               sub ecx, dword ptr [eax + 4]
// 0079059e  2b10                 sub edx, dword ptr [eax]
// 007905a0  85f6                 test esi, esi
// 007905a2  7403                 je 0x7905a7
// 007905a4  8b7604               mov esi, dword ptr [esi + 4]
// 007905a7  8b442408             mov eax, dword ptr [esp + 8]
// 007905ab  682000cc00           push 0xcc0020
// 007905b0  6a00                 push 0
// 007905b2  6a00                 push 0
// 007905b4  56                   push esi
// 007905b5  51                   push ecx
// 007905b6  8b4804               mov ecx, dword ptr [eax + 4]
// 007905b9  52                   push edx
// 007905ba  6a00                 push 0
// 007905bc  6a00                 push 0
// 007905be  51                   push ecx
// 007905bf  ff15c4208000         call dword ptr [0x8020c4]
// 007905c5  5e                   pop esi
// 007905c6  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?DrawPseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
