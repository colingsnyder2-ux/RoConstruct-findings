// roc 2008-06 00742d20  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742d20
//
// 00742d20  56                   push esi
// 00742d21  8bf1                 mov esi, ecx
// 00742d23  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00742d26  e89584f6ff           call 0x6ab1c0
// 00742d2b  85c0                 test eax, eax
// 00742d2d  7553                 jne 0x742d82
// 00742d2f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00742d32  8b01                 mov eax, dword ptr [ecx]
// 00742d34  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00742d3a  57                   push edi
// 00742d3b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00742d3f  57                   push edi
// 00742d40  ffd2                 call edx
// 00742d42  57                   push edi
// 00742d43  8bce                 mov ecx, esi
// 00742d45  e880e6f5ff           call 0x6a13ca
// 00742d4a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00742d4d  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 00742d53  6a00                 push 0
// 00742d55  6a00                 push 0
// 00742d57  68b1000000           push 0xb1
// 00742d5c  50                   push eax
// 00742d5d  ffd7                 call edi
// 00742d5f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00742d62  6a00                 push 0
// 00742d64  6a00                 push 0
// 00742d66  68b7000000           push 0xb7
// 00742d6b  51                   push ecx
// 00742d6c  ffd7                 call edi
// 00742d6e  8b5620               mov edx, dword ptr [esi + 0x20]
// 00742d71  6aff                 push -1
// 00742d73  6a00                 push 0
// 00742d75  68b1000000           push 0xb1
// 00742d7a  52                   push edx
// 00742d7b  ff150c2e8000         call dword ptr [0x802e0c]
// 00742d81  5f                   pop edi
// 00742d82  5e                   pop esi
// 00742d83  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?OnSetFocus@CXTPControlEditCtrl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp
