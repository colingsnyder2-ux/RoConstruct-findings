// roc 2007-08 0071ebb0  unit: CXTPDialogBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ebb0
//
// 0071ebb0  53                   push ebx
// 0071ebb1  56                   push esi
// 0071ebb2  57                   push edi
// 0071ebb3  8bf1                 mov esi, ecx
// 0071ebb5  e88416f1ff           call 0x63023e
// 0071ebba  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0071ebbe  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0071ebc2  83ec10               sub esp, 0x10
// 0071ebc5  8bc4                 mov eax, esp
// 0071ebc7  33c9                 xor ecx, ecx
// 0071ebc9  8908                 mov dword ptr [eax], ecx
// 0071ebcb  33d2                 xor edx, edx
// 0071ebcd  895004               mov dword ptr [eax + 4], edx
// 0071ebd0  897808               mov dword ptr [eax + 8], edi
// 0071ebd3  8bce                 mov ecx, esi
// 0071ebd5  89580c               mov dword ptr [eax + 0xc], ebx
// 0071ebd8  e863ffffff           call 0x71eb40
// 0071ebdd  5f                   pop edi
// 0071ebde  5e                   pop esi
// 0071ebdf  5b                   pop ebx
// 0071ebe0  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ?OnSize@CXTPDialogBar@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
