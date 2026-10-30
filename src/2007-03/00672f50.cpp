// roc 2007-03 00672f50  unit: seg_00670000  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00672f50
//
// 00672f50  83ec18               sub esp, 0x18
// 00672f53  53                   push ebx
// 00672f54  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00672f58  55                   push ebp
// 00672f59  56                   push esi
// 00672f5a  57                   push edi
// 00672f5b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00672f5f  57                   push edi
// 00672f60  8d442434             lea eax, [esp + 0x34]
// 00672f64  50                   push eax
// 00672f65  6a00                 push 0
// 00672f67  53                   push ebx
// 00672f68  8bf1                 mov esi, ecx
// 00672f6a  e8e1fdffff           call 0x672d50
// 00672f6f  6a00                 push 0
// 00672f71  57                   push edi
// 00672f72  53                   push ebx
// 00672f73  8d4c2424             lea ecx, [esp + 0x24]
// 00672f77  51                   push ecx
// 00672f78  8bce                 mov ecx, esi
// 00672f7a  e831fcffff           call 0x672bb0
// 00672f7f  8b28                 mov ebp, dword ptr [eax]
// 00672f81  8b5004               mov edx, dword ptr [eax + 4]
// 00672f84  57                   push edi
// 00672f85  8d442434             lea eax, [esp + 0x34]
// 00672f89  50                   push eax
// 00672f8a  68ff7f0000           push 0x7fff
// 00672f8f  53                   push ebx
// 00672f90  8bce                 mov ecx, esi
// 00672f92  8954242c             mov dword ptr [esp + 0x2c], edx
// 00672f96  e8b5fdffff           call 0x672d50
// 00672f9b  6a00                 push 0
// 00672f9d  57                   push edi
// 00672f9e  53                   push ebx
// 00672f9f  8d4c242c             lea ecx, [esp + 0x2c]
// 00672fa3  51                   push ecx
// 00672fa4  8bce                 mov ecx, esi
// 00672fa6  e805fcffff           call 0x672bb0
// 00672fab  8b08                 mov ecx, dword ptr [eax]
// 00672fad  3be9                 cmp ebp, ecx
// 00672faf  8b5004               mov edx, dword ptr [eax + 4]
// 00672fb2  894c2410             mov dword ptr [esp + 0x10], ecx
// 00672fb6  89542414             mov dword ptr [esp + 0x14], edx
// 00672fba  7d5a                 jge 0x673016
// 00672fbc  eb06                 jmp 0x672fc4
// 00672fbe  8bff                 mov edi, edi
// 00672fc0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00672fc4  57                   push edi
// 00672fc5  8d442434             lea eax, [esp + 0x34]
// 00672fc9  50                   push eax
// 00672fca  8d0429               lea eax, [ecx + ebp]
// 00672fcd  99                   cdq 
// 00672fce  2bc2                 sub eax, edx
// 00672fd0  d1f8                 sar eax, 1
// 00672fd2  50                   push eax
// 00672fd3  53                   push ebx
// 00672fd4  8bce                 mov ecx, esi
// 00672fd6  e875fdffff           call 0x672d50
// 00672fdb  6a00                 push 0
// 00672fdd  57                   push edi
// 00672fde  53                   push ebx
// 00672fdf  8d4c242c             lea ecx, [esp + 0x2c]
// 00672fe3  51                   push ecx
// 00672fe4  8bce                 mov ecx, esi
// 00672fe6  e8c5fbffff           call 0x672bb0
// 00672feb  8b08                 mov ecx, dword ptr [eax]
// 00672fed  8b5004               mov edx, dword ptr [eax + 4]
// 00672ff0  3bd1                 cmp edx, ecx
// 00672ff2  7e12                 jle 0x673006
// 00672ff4  3be9                 cmp ebp, ecx
// 00672ff6  7506                 jne 0x672ffe
// 00672ff8  3954241c             cmp dword ptr [esp + 0x1c], edx
// 00672ffc  7418                 je 0x673016
// 00672ffe  8be9                 mov ebp, ecx
// 00673000  8954241c             mov dword ptr [esp + 0x1c], edx
// 00673004  eb0a                 jmp 0x673010
// 00673006  7d0e                 jge 0x673016
// 00673008  894c2410             mov dword ptr [esp + 0x10], ecx
// 0067300c  89542414             mov dword ptr [esp + 0x14], edx
// 00673010  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 00673014  7caa                 jl 0x672fc0
// 00673016  5f                   pop edi
// 00673017  5e                   pop esi
// 00673018  5d                   pop ebp
// 00673019  5b                   pop ebx
// 0067301a  83c418               add esp, 0x18
// 0067301d  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizePopupToolBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@KABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
