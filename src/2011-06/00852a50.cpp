// from server: 100% by auto
// roc 2011-06 00852a50  unit: CXTPControlButtonColor  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00852a50
//
// 00852a50  56                   push esi
// 00852a51  8bf1                 mov esi, ecx
// 00852a53  e8089dfbff           call 0x80c760
// 00852a58  8bc8                 mov ecx, eax
// 00852a5a  e8d1ccfbff           call 0x80f730
// 00852a5f  83f817               cmp eax, 0x17
// 00852a62  7d16                 jge 0x852a7a
// 00852a64  8b442408             mov eax, dword ptr [esp + 8]
// 00852a68  b917000000           mov ecx, 0x17
// 00852a6d  c70094000000         mov dword ptr [eax], 0x94
// 00852a73  894804               mov dword ptr [eax + 4], ecx
// 00852a76  5e                   pop esi
// 00852a77  c20800               ret 8
// 00852a7a  8bce                 mov ecx, esi
// 00852a7c  e8df9cfbff           call 0x80c760
// 00852a81  8bc8                 mov ecx, eax
// 00852a83  e8a8ccfbff           call 0x80f730
// 00852a88  8bc8                 mov ecx, eax
// 00852a8a  8b442408             mov eax, dword ptr [esp + 8]
// 00852a8e  c70094000000         mov dword ptr [eax], 0x94
// 00852a94  894804               mov dword ptr [eax + 4], ecx
// 00852a97  5e                   pop esi
// 00852a98  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetSize@CXTPControlButtonColor@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlPopupColor.cpp
