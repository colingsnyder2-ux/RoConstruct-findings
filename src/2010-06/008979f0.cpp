// roc 2010-06 008979f0  unit: CXTShadowHook  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008979f0
//
// 008979f0  56                   push esi
// 008979f1  8bf1                 mov esi, ecx
// 008979f3  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 008979f7  7505                 jne 0x8979fe
// 008979f9  e872fbffff           call 0x897570
// 008979fe  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00897a02  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00897a05  8b5008               mov edx, dword ptr [eax + 8]
// 00897a08  8b767c               mov esi, dword ptr [esi + 0x7c]
// 00897a0b  2b4804               sub ecx, dword ptr [eax + 4]
// 00897a0e  2b10                 sub edx, dword ptr [eax]
// 00897a10  85f6                 test esi, esi
// 00897a12  7403                 je 0x897a17
// 00897a14  8b7604               mov esi, dword ptr [esi + 4]
// 00897a17  8b442408             mov eax, dword ptr [esp + 8]
// 00897a1b  682000cc00           push 0xcc0020
// 00897a20  6a00                 push 0
// 00897a22  6a00                 push 0
// 00897a24  56                   push esi
// 00897a25  51                   push ecx
// 00897a26  8b4804               mov ecx, dword ptr [eax + 4]
// 00897a29  52                   push edx
// 00897a2a  6a00                 push 0
// 00897a2c  6a00                 push 0
// 00897a2e  51                   push ecx
// 00897a2f  ff15c0a09e00         call dword ptr [0x9ea0c0]
// 00897a35  5e                   pop esi
// 00897a36  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?DrawPseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
