// from server: 100% by auto
// roc 2008-06 00716430  unit: CXTPPropertyGridView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716430
//
// 00716430  56                   push esi
// 00716431  8b742408             mov esi, dword ptr [esp + 8]
// 00716435  85f6                 test esi, esi
// 00716437  7509                 jne 0x716442
// 00716439  b857000780           mov eax, 0x80070057
// 0071643e  5e                   pop esi
// 0071643f  c20400               ret 4
// 00716442  8b41cc               mov eax, dword ptr [ecx - 0x34]
// 00716445  6a00                 push 0
// 00716447  6a00                 push 0
// 00716449  688b010000           push 0x18b
// 0071644e  50                   push eax
// 0071644f  ff15142e8000         call dword ptr [0x802e14]
// 00716455  8906                 mov dword ptr [esi], eax
// 00716457  33c0                 xor eax, eax
// 00716459  5e                   pop esi
// 0071645a  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleChildCount@CXTPPropertyGridView@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
