// roc 2008-06 006f1c20  unit: CXTPControls  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1c20
//
// 006f1c20  51                   push ecx
// 006f1c21  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006f1c24  53                   push ebx
// 006f1c25  55                   push ebp
// 006f1c26  56                   push esi
// 006f1c27  57                   push edi
// 006f1c28  33ff                 xor edi, edi
// 006f1c2a  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f1c2e  85c0                 test eax, eax
// 006f1c30  0f8e9d000000         jle 0x6f1cd3
// 006f1c36  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006f1c3a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006f1c3e  8bff                 mov edi, edi
// 006f1c40  85ff                 test edi, edi
// 006f1c42  7c15                 jl 0x6f1c59
// 006f1c44  3bf8                 cmp edi, eax
// 006f1c46  7d11                 jge 0x6f1c59
// 006f1c48  3b792c               cmp edi, dword ptr [ecx + 0x2c]
// 006f1c4b  0f8d8c000000         jge 0x6f1cdd
// 006f1c51  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006f1c54  8b34b8               mov esi, dword ptr [eax + edi*4]
// 006f1c57  eb02                 jmp 0x6f1c5b
// 006f1c59  33f6                 xor esi, esi
// 006f1c5b  85ed                 test ebp, ebp
// 006f1c5d  7408                 je 0x6f1c67
// 006f1c5f  39aefc000000         cmp dword ptr [esi + 0xfc], ebp
// 006f1c65  752a                 jne 0x6f1c91
// 006f1c67  837c242000           cmp dword ptr [esp + 0x20], 0
// 006f1c6c  7416                 je 0x6f1c84
// 006f1c6e  8b16                 mov edx, dword ptr [esi]
// 006f1c70  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006f1c76  6a00                 push 0
// 006f1c78  8bce                 mov ecx, esi
// 006f1c7a  ffd0                 call eax
// 006f1c7c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f1c80  85c0                 test eax, eax
// 006f1c82  740d                 je 0x6f1c91
// 006f1c84  83fbff               cmp ebx, -1
// 006f1c87  7459                 je 0x6f1ce2
// 006f1c89  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 006f1c8f  7451                 je 0x6f1ce2
// 006f1c91  837c242400           cmp dword ptr [esp + 0x24], 0
// 006f1c96  742f                 je 0x6f1cc7
// 006f1c98  8b16                 mov edx, dword ptr [esi]
// 006f1c9a  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 006f1ca0  8bce                 mov ecx, esi
// 006f1ca2  ffd0                 call eax
// 006f1ca4  85c0                 test eax, eax
// 006f1ca6  741b                 je 0x6f1cc3
// 006f1ca8  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f1cac  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 006f1cb2  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f1cb6  52                   push edx
// 006f1cb7  50                   push eax
// 006f1cb8  53                   push ebx
// 006f1cb9  55                   push ebp
// 006f1cba  e861ffffff           call 0x6f1c20
// 006f1cbf  85c0                 test eax, eax
// 006f1cc1  7512                 jne 0x6f1cd5
// 006f1cc3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f1cc7  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006f1cca  47                   inc edi
// 006f1ccb  3bf8                 cmp edi, eax
// 006f1ccd  0f8c6dffffff         jl 0x6f1c40
// 006f1cd3  33c0                 xor eax, eax
// 006f1cd5  5f                   pop edi
// 006f1cd6  5e                   pop esi
// 006f1cd7  5d                   pop ebp
// 006f1cd8  5b                   pop ebx
// 006f1cd9  59                   pop ecx
// 006f1cda  c21000               ret 0x10
// 006f1cdd  e862ecfaff           call 0x6a0944
// 006f1ce2  5f                   pop edi
// 006f1ce3  8bc6                 mov eax, esi
// 006f1ce5  5e                   pop esi
// 006f1ce6  5d                   pop ebp
// 006f1ce7  5b                   pop ebx
// 006f1ce8  59                   pop ecx
// 006f1ce9  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?FindControl@CXTPControls@@QBEPAVCXTPControl@@W4XTPControlType@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
