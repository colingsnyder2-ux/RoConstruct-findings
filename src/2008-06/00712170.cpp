// roc 2008-06 00712170  unit: CXTPPropertyGridItem  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712170
//
// 00712170  56                   push esi
// 00712171  57                   push edi
// 00712172  8bf9                 mov edi, ecx
// 00712174  8b07                 mov eax, dword ptr [edi]
// 00712176  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0071217c  ffd2                 call edx
// 0071217e  8bf0                 mov esi, eax
// 00712180  85f6                 test esi, esi
// 00712182  7439                 je 0x7121bd
// 00712184  837e2000             cmp dword ptr [esi + 0x20], 0
// 00712188  7433                 je 0x7121bd
// 0071218a  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 00712190  752b                 jne 0x7121bd
// 00712192  8bce                 mov ecx, esi
// 00712194  e88fe8f8ff           call 0x6a0a28
// 00712199  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071219c  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 007121a2  6aff                 push -1
// 007121a4  6a00                 push 0
// 007121a6  68b1000000           push 0xb1
// 007121ab  50                   push eax
// 007121ac  ffd7                 call edi
// 007121ae  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007121b1  6a00                 push 0
// 007121b3  6a00                 push 0
// 007121b5  68b7000000           push 0xb7
// 007121ba  51                   push ecx
// 007121bb  ffd7                 call edi
// 007121bd  5f                   pop edi
// 007121be  5e                   pop esi
// 007121bf  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFocusToInplaceControl@CXTPPropertyGridItem@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
