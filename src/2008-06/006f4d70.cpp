// roc 2008-06 006f4d70  unit: CXTPControls  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f4d70
//
// 006f4d70  53                   push ebx
// 006f4d71  55                   push ebp
// 006f4d72  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006f4d76  57                   push edi
// 006f4d77  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f4d7b  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 006f4d81  8bd9                 mov ebx, ecx
// 006f4d83  83f802               cmp eax, 2
// 006f4d86  740a                 je 0x6f4d92
// 006f4d88  83f803               cmp eax, 3
// 006f4d8b  7405                 je 0x6f4d92
// 006f4d8d  83f804               cmp eax, 4
// 006f4d90  751d                 jne 0x6f4daf
// 006f4d92  83fd02               cmp ebp, 2
// 006f4d95  740a                 je 0x6f4da1
// 006f4d97  83fd03               cmp ebp, 3
// 006f4d9a  7405                 je 0x6f4da1
// 006f4d9c  83fd04               cmp ebp, 4
// 006f4d9f  750e                 jne 0x6f4daf
// 006f4da1  89affc000000         mov dword ptr [edi + 0xfc], ebp
// 006f4da7  8bc7                 mov eax, edi
// 006f4da9  5f                   pop edi
// 006f4daa  5d                   pop ebp
// 006f4dab  5b                   pop ebx
// 006f4dac  c20800               ret 8
// 006f4daf  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 006f4db5  56                   push esi
// 006f4db6  6a00                 push 0
// 006f4db8  40                   inc eax
// 006f4db9  50                   push eax
// 006f4dba  6816b78000           push 0x80b716
// 006f4dbf  6a00                 push 0
// 006f4dc1  55                   push ebp
// 006f4dc2  e879fcffff           call 0x6f4a40
// 006f4dc7  8bf0                 mov esi, eax
// 006f4dc9  6a00                 push 0
// 006f4dcb  57                   push edi
// 006f4dcc  8bce                 mov ecx, esi
// 006f4dce  e8fd8ffbff           call 0x6addd0
// 006f4dd3  89aefc000000         mov dword ptr [esi + 0xfc], ebp
// 006f4dd9  8b03                 mov eax, dword ptr [ebx]
// 006f4ddb  8b5058               mov edx, dword ptr [eax + 0x58]
// 006f4dde  57                   push edi
// 006f4ddf  8bcb                 mov ecx, ebx
// 006f4de1  ffd2                 call edx
// 006f4de3  8bc6                 mov eax, esi
// 006f4de5  5e                   pop esi
// 006f4de6  5f                   pop edi
// 006f4de7  5d                   pop ebp
// 006f4de8  5b                   pop ebx
// 006f4de9  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?SetControlType@CXTPControls@@QAEPAVCXTPControl@@PAV2@W4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
