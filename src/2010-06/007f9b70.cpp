// roc 2010-06 007f9b70  unit: CXTPControls  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f9b70
//
// 007f9b70  83ec18               sub esp, 0x18
// 007f9b73  53                   push ebx
// 007f9b74  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007f9b78  55                   push ebp
// 007f9b79  56                   push esi
// 007f9b7a  57                   push edi
// 007f9b7b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007f9b7f  57                   push edi
// 007f9b80  8d442434             lea eax, [esp + 0x34]
// 007f9b84  50                   push eax
// 007f9b85  6a00                 push 0
// 007f9b87  53                   push ebx
// 007f9b88  8bf1                 mov esi, ecx
// 007f9b8a  e8f1fdffff           call 0x7f9980
// 007f9b8f  6a00                 push 0
// 007f9b91  57                   push edi
// 007f9b92  53                   push ebx
// 007f9b93  8d4c2424             lea ecx, [esp + 0x24]
// 007f9b97  51                   push ecx
// 007f9b98  8bce                 mov ecx, esi
// 007f9b9a  e841fcffff           call 0x7f97e0
// 007f9b9f  8b28                 mov ebp, dword ptr [eax]
// 007f9ba1  8b5004               mov edx, dword ptr [eax + 4]
// 007f9ba4  57                   push edi
// 007f9ba5  8d442434             lea eax, [esp + 0x34]
// 007f9ba9  50                   push eax
// 007f9baa  68ff7f0000           push 0x7fff
// 007f9baf  53                   push ebx
// 007f9bb0  8bce                 mov ecx, esi
// 007f9bb2  8954242c             mov dword ptr [esp + 0x2c], edx
// 007f9bb6  e8c5fdffff           call 0x7f9980
// 007f9bbb  6a00                 push 0
// 007f9bbd  57                   push edi
// 007f9bbe  53                   push ebx
// 007f9bbf  8d4c242c             lea ecx, [esp + 0x2c]
// 007f9bc3  51                   push ecx
// 007f9bc4  8bce                 mov ecx, esi
// 007f9bc6  e815fcffff           call 0x7f97e0
// 007f9bcb  8b08                 mov ecx, dword ptr [eax]
// 007f9bcd  3be9                 cmp ebp, ecx
// 007f9bcf  8b5004               mov edx, dword ptr [eax + 4]
// 007f9bd2  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f9bd6  89542414             mov dword ptr [esp + 0x14], edx
// 007f9bda  7d5a                 jge 0x7f9c36
// 007f9bdc  eb06                 jmp 0x7f9be4
// 007f9bde  8bff                 mov edi, edi
// 007f9be0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9be4  57                   push edi
// 007f9be5  8d442434             lea eax, [esp + 0x34]
// 007f9be9  50                   push eax
// 007f9bea  8d0429               lea eax, [ecx + ebp]
// 007f9bed  99                   cdq 
// 007f9bee  2bc2                 sub eax, edx
// 007f9bf0  d1f8                 sar eax, 1
// 007f9bf2  50                   push eax
// 007f9bf3  53                   push ebx
// 007f9bf4  8bce                 mov ecx, esi
// 007f9bf6  e885fdffff           call 0x7f9980
// 007f9bfb  6a00                 push 0
// 007f9bfd  57                   push edi
// 007f9bfe  53                   push ebx
// 007f9bff  8d4c242c             lea ecx, [esp + 0x2c]
// 007f9c03  51                   push ecx
// 007f9c04  8bce                 mov ecx, esi
// 007f9c06  e8d5fbffff           call 0x7f97e0
// 007f9c0b  8b08                 mov ecx, dword ptr [eax]
// 007f9c0d  8b5004               mov edx, dword ptr [eax + 4]
// 007f9c10  3bd1                 cmp edx, ecx
// 007f9c12  7e12                 jle 0x7f9c26
// 007f9c14  3be9                 cmp ebp, ecx
// 007f9c16  7506                 jne 0x7f9c1e
// 007f9c18  3954241c             cmp dword ptr [esp + 0x1c], edx
// 007f9c1c  7418                 je 0x7f9c36
// 007f9c1e  8be9                 mov ebp, ecx
// 007f9c20  8954241c             mov dword ptr [esp + 0x1c], edx
// 007f9c24  eb0a                 jmp 0x7f9c30
// 007f9c26  7d0e                 jge 0x7f9c36
// 007f9c28  894c2410             mov dword ptr [esp + 0x10], ecx
// 007f9c2c  89542414             mov dword ptr [esp + 0x14], edx
// 007f9c30  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 007f9c34  7caa                 jl 0x7f9be0
// 007f9c36  5f                   pop edi
// 007f9c37  5e                   pop esi
// 007f9c38  5d                   pop ebp
// 007f9c39  5b                   pop ebx
// 007f9c3a  83c418               add esp, 0x18
// 007f9c3d  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizePopupToolBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@KABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
