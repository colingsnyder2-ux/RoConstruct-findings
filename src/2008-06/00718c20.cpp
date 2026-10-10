// roc 2008-06 00718c20  unit: CSelectionCaption  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718c20
//
// 00718c20  57                   push edi
// 00718c21  8bf9                 mov edi, ecx
// 00718c23  e83a360a00           call 0x7bc262
// 00718c28  80bf8000000000       cmp byte ptr [edi + 0x80], 0
// 00718c2f  756b                 jne 0x718c9c
// 00718c31  53                   push ebx
// 00718c32  8b1d582b8000         mov ebx, dword ptr [0x802b58]
// 00718c38  6a12                 push 0x12
// 00718c3a  ffd3                 call ebx
// 00718c3c  6a0f                 push 0xf
// 00718c3e  894778               mov dword ptr [edi + 0x78], eax
// 00718c41  ffd3                 call ebx
// 00718c43  6a0f                 push 0xf
// 00718c45  894770               mov dword ptr [edi + 0x70], eax
// 00718c48  ffd3                 call ebx
// 00718c4a  894774               mov dword ptr [edi + 0x74], eax
// 00718c4d  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 00718c53  50                   push eax
// 00718c54  ff15502d8000         call dword ptr [0x802d50]
// 00718c5a  85c0                 test eax, eax
// 00718c5c  743d                 je 0x718c9b
// 00718c5e  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 00718c64  8b4774               mov eax, dword ptr [edi + 0x74]
// 00718c67  8b9274010000         mov edx, dword ptr [edx + 0x174]
// 00718c6d  56                   push esi
// 00718c6e  8db7dc000000         lea esi, [edi + 0xdc]
// 00718c74  50                   push eax
// 00718c75  8bce                 mov ecx, esi
// 00718c77  ffd2                 call edx
// 00718c79  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 00718c7c  8b06                 mov eax, dword ptr [esi]
// 00718c7e  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00718c84  51                   push ecx
// 00718c85  8bce                 mov ecx, esi
// 00718c87  ffd2                 call edx
// 00718c89  8b3e                 mov edi, dword ptr [esi]
// 00718c8b  6a15                 push 0x15
// 00718c8d  ffd3                 call ebx
// 00718c8f  50                   push eax
// 00718c90  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 00718c96  8bce                 mov ecx, esi
// 00718c98  ffd0                 call eax
// 00718c9a  5e                   pop esi
// 00718c9b  5b                   pop ebx
// 00718c9c  5f                   pop edi
// 00718c9d  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?OnSysColorChange@CXTCaption@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
