// roc 2008-06 0079f960  unit: CXTPDialogBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079f960
//
// 0079f960  53                   push ebx
// 0079f961  56                   push esi
// 0079f962  57                   push edi
// 0079f963  8bf1                 mov esi, ecx
// 0079f965  e8fe12f0ff           call 0x6a0c68
// 0079f96a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079f96e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0079f972  83ec10               sub esp, 0x10
// 0079f975  8bc4                 mov eax, esp
// 0079f977  33c9                 xor ecx, ecx
// 0079f979  8908                 mov dword ptr [eax], ecx
// 0079f97b  33d2                 xor edx, edx
// 0079f97d  895004               mov dword ptr [eax + 4], edx
// 0079f980  897808               mov dword ptr [eax + 8], edi
// 0079f983  8bce                 mov ecx, esi
// 0079f985  89580c               mov dword ptr [eax + 0xc], ebx
// 0079f988  e863ffffff           call 0x79f8f0
// 0079f98d  5f                   pop edi
// 0079f98e  5e                   pop esi
// 0079f98f  5b                   pop ebx
// 0079f990  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnSize@CXTPDialogBar@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
