// roc 2009-12 00845ad0  unit: CXTPControls  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845ad0
//
// 00845ad0  83ec18               sub esp, 0x18
// 00845ad3  53                   push ebx
// 00845ad4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00845ad8  55                   push ebp
// 00845ad9  56                   push esi
// 00845ada  57                   push edi
// 00845adb  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00845adf  57                   push edi
// 00845ae0  8d442434             lea eax, [esp + 0x34]
// 00845ae4  50                   push eax
// 00845ae5  6a00                 push 0
// 00845ae7  53                   push ebx
// 00845ae8  8bf1                 mov esi, ecx
// 00845aea  e8f1fdffff           call 0x8458e0
// 00845aef  6a00                 push 0
// 00845af1  57                   push edi
// 00845af2  53                   push ebx
// 00845af3  8d4c2424             lea ecx, [esp + 0x24]
// 00845af7  51                   push ecx
// 00845af8  8bce                 mov ecx, esi
// 00845afa  e841fcffff           call 0x845740
// 00845aff  8b28                 mov ebp, dword ptr [eax]
// 00845b01  8b5004               mov edx, dword ptr [eax + 4]
// 00845b04  57                   push edi
// 00845b05  8d442434             lea eax, [esp + 0x34]
// 00845b09  50                   push eax
// 00845b0a  68ff7f0000           push 0x7fff
// 00845b0f  53                   push ebx
// 00845b10  8bce                 mov ecx, esi
// 00845b12  8954242c             mov dword ptr [esp + 0x2c], edx
// 00845b16  e8c5fdffff           call 0x8458e0
// 00845b1b  6a00                 push 0
// 00845b1d  57                   push edi
// 00845b1e  53                   push ebx
// 00845b1f  8d4c242c             lea ecx, [esp + 0x2c]
// 00845b23  51                   push ecx
// 00845b24  8bce                 mov ecx, esi
// 00845b26  e815fcffff           call 0x845740
// 00845b2b  8b08                 mov ecx, dword ptr [eax]
// 00845b2d  3be9                 cmp ebp, ecx
// 00845b2f  8b5004               mov edx, dword ptr [eax + 4]
// 00845b32  894c2410             mov dword ptr [esp + 0x10], ecx
// 00845b36  89542414             mov dword ptr [esp + 0x14], edx
// 00845b3a  7d5a                 jge 0x845b96
// 00845b3c  eb06                 jmp 0x845b44
// 00845b3e  8bff                 mov edi, edi
// 00845b40  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00845b44  57                   push edi
// 00845b45  8d442434             lea eax, [esp + 0x34]
// 00845b49  50                   push eax
// 00845b4a  8d0429               lea eax, [ecx + ebp]
// 00845b4d  99                   cdq 
// 00845b4e  2bc2                 sub eax, edx
// 00845b50  d1f8                 sar eax, 1
// 00845b52  50                   push eax
// 00845b53  53                   push ebx
// 00845b54  8bce                 mov ecx, esi
// 00845b56  e885fdffff           call 0x8458e0
// 00845b5b  6a00                 push 0
// 00845b5d  57                   push edi
// 00845b5e  53                   push ebx
// 00845b5f  8d4c242c             lea ecx, [esp + 0x2c]
// 00845b63  51                   push ecx
// 00845b64  8bce                 mov ecx, esi
// 00845b66  e8d5fbffff           call 0x845740
// 00845b6b  8b08                 mov ecx, dword ptr [eax]
// 00845b6d  8b5004               mov edx, dword ptr [eax + 4]
// 00845b70  3bd1                 cmp edx, ecx
// 00845b72  7e12                 jle 0x845b86
// 00845b74  3be9                 cmp ebp, ecx
// 00845b76  7506                 jne 0x845b7e
// 00845b78  3954241c             cmp dword ptr [esp + 0x1c], edx
// 00845b7c  7418                 je 0x845b96
// 00845b7e  8be9                 mov ebp, ecx
// 00845b80  8954241c             mov dword ptr [esp + 0x1c], edx
// 00845b84  eb0a                 jmp 0x845b90
// 00845b86  7d0e                 jge 0x845b96
// 00845b88  894c2410             mov dword ptr [esp + 0x10], ecx
// 00845b8c  89542414             mov dword ptr [esp + 0x14], edx
// 00845b90  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 00845b94  7caa                 jl 0x845b40
// 00845b96  5f                   pop edi
// 00845b97  5e                   pop esi
// 00845b98  5d                   pop ebp
// 00845b99  5b                   pop ebx
// 00845b9a  83c418               add esp, 0x18
// 00845b9d  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizePopupToolBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@KABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
