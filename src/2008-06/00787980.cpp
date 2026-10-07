// roc 2008-06 00787980  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787980
//
// 00787980  53                   push ebx
// 00787981  56                   push esi
// 00787982  57                   push edi
// 00787983  8bf1                 mov esi, ecx
// 00787985  e8de92f1ff           call 0x6a0c68
// 0078798a  ff15102e8000         call dword ptr [0x802e10]
// 00787990  50                   push eax
// 00787991  e84892f1ff           call 0x6a0bde
// 00787996  3bc6                 cmp eax, esi
// 00787998  7407                 je 0x7879a1
// 0078799a  8bce                 mov ecx, esi
// 0078799c  e88790f1ff           call 0x6a0a28
// 007879a1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007879a5  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007879a9  57                   push edi
// 007879aa  53                   push ebx
// 007879ab  8bce                 mov ecx, esi
// 007879ad  e80efaffff           call 0x7873c0
// 007879b2  83f8ff               cmp eax, -1
// 007879b5  7437                 je 0x7879ee
// 007879b7  57                   push edi
// 007879b8  53                   push ebx
// 007879b9  8bce                 mov ecx, esi
// 007879bb  e860feffff           call 0x787820
// 007879c0  8b4620               mov eax, dword ptr [esi + 0x20]
// 007879c3  c7466001000000       mov dword ptr [esi + 0x60], 1
// 007879ca  8b35f82d8000         mov esi, dword ptr [0x802df8]
// 007879d0  50                   push eax
// 007879d1  ffd6                 call esi
// 007879d3  50                   push eax
// 007879d4  e80592f1ff           call 0x6a0bde
// 007879d9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007879dc  51                   push ecx
// 007879dd  ffd6                 call esi
// 007879df  50                   push eax
// 007879e0  e8f991f1ff           call 0x6a0bde
// 007879e5  6a01                 push 1
// 007879e7  8bc8                 mov ecx, eax
// 007879e9  e8944f0300           call 0x7bc982
// 007879ee  5f                   pop edi
// 007879ef  5e                   pop esi
// 007879f0  5b                   pop ebx
// 007879f1  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnLButtonDblClk@CXTColorHex@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
