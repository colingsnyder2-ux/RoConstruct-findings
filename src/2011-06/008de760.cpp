// roc 2011-06 008de760  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de760
//
// 008de760  56                   push esi
// 008de761  8b742408             mov esi, dword ptr [esp + 8]
// 008de765  85f6                 test esi, esi
// 008de767  7420                 je 0x8de789
// 008de769  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008de76c  33c0                 xor eax, eax
// 008de76e  85d2                 test edx, edx
// 008de770  7e17                 jle 0x8de789
// 008de772  57                   push edi
// 008de773  85c0                 test eax, eax
// 008de775  7c21                 jl 0x8de798
// 008de777  3bc2                 cmp eax, edx
// 008de779  7d1d                 jge 0x8de798
// 008de77b  8b7924               mov edi, dword ptr [ecx + 0x24]
// 008de77e  393487               cmp dword ptr [edi + eax*4], esi
// 008de781  740a                 je 0x8de78d
// 008de783  40                   inc eax
// 008de784  3bc2                 cmp eax, edx
// 008de786  7ceb                 jl 0x8de773
// 008de788  5f                   pop edi
// 008de789  5e                   pop esi
// 008de78a  c20400               ret 4
// 008de78d  5f                   pop edi
// 008de78e  5e                   pop esi
// 008de78f  89442404             mov dword ptr [esp + 4], eax
// 008de793  e9d8fdffff           jmp 0x8de570
// 008de798  e86dbbf2ff           call 0x80a30a
// copied from an identical function in another client (function ?Remove@CXTPPropertyGridInplaceButtons@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp