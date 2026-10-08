// roc 2012-06 00a688c0  unit: PAVCXTShadowWnd::?$CList  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a688c0
//
// 00a688c0  56                   push esi
// 00a688c1  8bf1                 mov esi, ecx
// 00a688c3  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00a688c7  7505                 jne 0xa688ce
// 00a688c9  e8f2fbffff           call 0xa684c0
// 00a688ce  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a688d2  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00a688d5  8b5008               mov edx, dword ptr [eax + 8]
// 00a688d8  8b767c               mov esi, dword ptr [esi + 0x7c]
// 00a688db  2b4804               sub ecx, dword ptr [eax + 4]
// 00a688de  2b10                 sub edx, dword ptr [eax]
// 00a688e0  85f6                 test esi, esi
// 00a688e2  7403                 je 0xa688e7
// 00a688e4  8b7604               mov esi, dword ptr [esi + 4]
// 00a688e7  8b442408             mov eax, dword ptr [esp + 8]
// 00a688eb  682000cc00           push 0xcc0020
// 00a688f0  6a00                 push 0
// 00a688f2  6a00                 push 0
// 00a688f4  56                   push esi
// 00a688f5  51                   push ecx
// 00a688f6  8b4804               mov ecx, dword ptr [eax + 4]
// 00a688f9  52                   push edx
// 00a688fa  6a00                 push 0
// 00a688fc  6a00                 push 0
// 00a688fe  51                   push ecx
// 00a688ff  ff156421b200         call dword ptr [0xb22164]
// 00a68905  5e                   pop esi
// 00a68906  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?DrawPseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
