// from server: 100% by auto
// roc 2012-06 00a719e0  unit: CXTPDialogBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a719e0
//
// 00a719e0  53                   push ebx
// 00a719e1  56                   push esi
// 00a719e2  57                   push edi
// 00a719e3  8bf1                 mov esi, ecx
// 00a719e5  e8f40cf1ff           call 0x9826de
// 00a719ea  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a719ee  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a719f2  83ec10               sub esp, 0x10
// 00a719f5  8bc4                 mov eax, esp
// 00a719f7  33c9                 xor ecx, ecx
// 00a719f9  8908                 mov dword ptr [eax], ecx
// 00a719fb  33d2                 xor edx, edx
// 00a719fd  895004               mov dword ptr [eax + 4], edx
// 00a71a00  897808               mov dword ptr [eax + 8], edi
// 00a71a03  8bce                 mov ecx, esi
// 00a71a05  89580c               mov dword ptr [eax + 0xc], ebx
// 00a71a08  e863ffffff           call 0xa71970
// 00a71a0d  5f                   pop edi
// 00a71a0e  5e                   pop esi
// 00a71a0f  5b                   pop ebx
// 00a71a10  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPDialogBar.cpp (function ?OnSize@CXTPDialogBar@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDialogBar.cpp
