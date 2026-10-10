// from server: 100% by tester
// roc 2008-06 007193c0  unit: CSelectionCaption  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007193c0
//
// 007193c0  56                   push esi
// 007193c1  8bf1                 mov esi, ecx
// 007193c3  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007193c9  57                   push edi
// 007193ca  8b3d502d8000         mov edi, dword ptr [0x802d50]
// 007193d0  50                   push eax
// 007193d1  ffd7                 call edi
// 007193d3  85c0                 test eax, eax
// 007193d5  7423                 je 0x7193fa
// 007193d7  6a00                 push 0
// 007193d9  8d8edc000000         lea ecx, [esi + 0xdc]
// 007193df  e88a75f8ff           call 0x6a096e
// 007193e4  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007193ea  6a00                 push 0
// 007193ec  6a00                 push 0
// 007193ee  68f3000000           push 0xf3
// 007193f3  51                   push ecx
// 007193f4  ff15142e8000         call dword ptr [0x802e14]
// 007193fa  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 00719400  85c0                 test eax, eax
// 00719402  7403                 je 0x719407
// 00719404  8b4020               mov eax, dword ptr [eax + 0x20]
// 00719407  50                   push eax
// 00719408  ffd7                 call edi
// 0071940a  85c0                 test eax, eax
// 0071940c  740d                 je 0x71941b
// 0071940e  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 00719414  8b11                 mov edx, dword ptr [ecx]
// 00719416  8b4268               mov eax, dword ptr [edx + 0x68]
// 00719419  ffd0                 call eax
// 0071941b  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 00719421  85c9                 test ecx, ecx
// 00719423  7413                 je 0x719438
// 00719425  8b11                 mov edx, dword ptr [ecx]
// 00719427  8b4204               mov eax, dword ptr [edx + 4]
// 0071942a  6a01                 push 1
// 0071942c  ffd0                 call eax
// 0071942e  c7868c01000000000000 mov dword ptr [esi + 0x18c], 0
// 00719438  5f                   pop edi
// 00719439  5e                   pop esi
// 0071943a  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?KillChildWindow@CXTCaption@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
