// roc 2009-12 008c6900  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6900
//
// 008c6900  56                   push esi
// 008c6901  8b742408             mov esi, dword ptr [esp + 8]
// 008c6905  85f6                 test esi, esi
// 008c6907  7420                 je 0x8c6929
// 008c6909  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008c690c  33c0                 xor eax, eax
// 008c690e  85d2                 test edx, edx
// 008c6910  7e17                 jle 0x8c6929
// 008c6912  57                   push edi
// 008c6913  85c0                 test eax, eax
// 008c6915  7c21                 jl 0x8c6938
// 008c6917  3bc2                 cmp eax, edx
// 008c6919  7d1d                 jge 0x8c6938
// 008c691b  8b7924               mov edi, dword ptr [ecx + 0x24]
// 008c691e  393487               cmp dword ptr [edi + eax*4], esi
// 008c6921  740a                 je 0x8c692d
// 008c6923  40                   inc eax
// 008c6924  3bc2                 cmp eax, edx
// 008c6926  7ceb                 jl 0x8c6913
// 008c6928  5f                   pop edi
// 008c6929  5e                   pop esi
// 008c692a  c20400               ret 4
// 008c692d  5f                   pop edi
// 008c692e  5e                   pop esi
// 008c692f  89442404             mov dword ptr [esp + 4], eax
// 008c6933  e9d8fdffff           jmp 0x8c6710
// 008c6938  e8cfd1f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?Remove@CXTPPropertyGridInplaceButtons@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp