// roc 2007-03 007048c0  unit: seg_00700000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007048c0
//
// 007048c0  56                   push esi
// 007048c1  8bf1                 mov esi, ecx
// 007048c3  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 007048c7  7505                 jne 0x7048ce
// 007048c9  e852f5ffff           call 0x703e20
// 007048ce  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007048d2  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007048d5  8b5008               mov edx, dword ptr [eax + 8]
// 007048d8  8b767c               mov esi, dword ptr [esi + 0x7c]
// 007048db  2b4804               sub ecx, dword ptr [eax + 4]
// 007048de  2b10                 sub edx, dword ptr [eax]
// 007048e0  85f6                 test esi, esi
// 007048e2  7403                 je 0x7048e7
// 007048e4  8b7604               mov esi, dword ptr [esi + 4]
// 007048e7  8b442408             mov eax, dword ptr [esp + 8]
// 007048eb  682000cc00           push 0xcc0020
// 007048f0  6a00                 push 0
// 007048f2  6a00                 push 0
// 007048f4  56                   push esi
// 007048f5  51                   push ecx
// 007048f6  8b4804               mov ecx, dword ptr [eax + 4]
// 007048f9  52                   push edx
// 007048fa  6a00                 push 0
// 007048fc  6a00                 push 0
// 007048fe  51                   push ecx
// 007048ff  ff15e4d07700         call dword ptr [0x77d0e4]
// 00704905  5e                   pop esi
// 00704906  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?DrawPseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
