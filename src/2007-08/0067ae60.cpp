// from server: 100% by auto
// roc 2007-08 0067ae60  unit: CXTPControls  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067ae60
//
// 0067ae60  83ec18               sub esp, 0x18
// 0067ae63  53                   push ebx
// 0067ae64  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0067ae68  55                   push ebp
// 0067ae69  56                   push esi
// 0067ae6a  57                   push edi
// 0067ae6b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0067ae6f  57                   push edi
// 0067ae70  8d442434             lea eax, [esp + 0x34]
// 0067ae74  50                   push eax
// 0067ae75  6a00                 push 0
// 0067ae77  53                   push ebx
// 0067ae78  8bf1                 mov esi, ecx
// 0067ae7a  e8e1fdffff           call 0x67ac60
// 0067ae7f  6a00                 push 0
// 0067ae81  57                   push edi
// 0067ae82  53                   push ebx
// 0067ae83  8d4c2424             lea ecx, [esp + 0x24]
// 0067ae87  51                   push ecx
// 0067ae88  8bce                 mov ecx, esi
// 0067ae8a  e831fcffff           call 0x67aac0
// 0067ae8f  8b28                 mov ebp, dword ptr [eax]
// 0067ae91  8b5004               mov edx, dword ptr [eax + 4]
// 0067ae94  57                   push edi
// 0067ae95  8d442434             lea eax, [esp + 0x34]
// 0067ae99  50                   push eax
// 0067ae9a  68ff7f0000           push 0x7fff
// 0067ae9f  53                   push ebx
// 0067aea0  8bce                 mov ecx, esi
// 0067aea2  8954242c             mov dword ptr [esp + 0x2c], edx
// 0067aea6  e8b5fdffff           call 0x67ac60
// 0067aeab  6a00                 push 0
// 0067aead  57                   push edi
// 0067aeae  53                   push ebx
// 0067aeaf  8d4c242c             lea ecx, [esp + 0x2c]
// 0067aeb3  51                   push ecx
// 0067aeb4  8bce                 mov ecx, esi
// 0067aeb6  e805fcffff           call 0x67aac0
// 0067aebb  8b08                 mov ecx, dword ptr [eax]
// 0067aebd  3be9                 cmp ebp, ecx
// 0067aebf  8b5004               mov edx, dword ptr [eax + 4]
// 0067aec2  894c2410             mov dword ptr [esp + 0x10], ecx
// 0067aec6  89542414             mov dword ptr [esp + 0x14], edx
// 0067aeca  7d5a                 jge 0x67af26
// 0067aecc  eb06                 jmp 0x67aed4
// 0067aece  8bff                 mov edi, edi
// 0067aed0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067aed4  57                   push edi
// 0067aed5  8d442434             lea eax, [esp + 0x34]
// 0067aed9  50                   push eax
// 0067aeda  8d0429               lea eax, [ecx + ebp]
// 0067aedd  99                   cdq 
// 0067aede  2bc2                 sub eax, edx
// 0067aee0  d1f8                 sar eax, 1
// 0067aee2  50                   push eax
// 0067aee3  53                   push ebx
// 0067aee4  8bce                 mov ecx, esi
// 0067aee6  e875fdffff           call 0x67ac60
// 0067aeeb  6a00                 push 0
// 0067aeed  57                   push edi
// 0067aeee  53                   push ebx
// 0067aeef  8d4c242c             lea ecx, [esp + 0x2c]
// 0067aef3  51                   push ecx
// 0067aef4  8bce                 mov ecx, esi
// 0067aef6  e8c5fbffff           call 0x67aac0
// 0067aefb  8b08                 mov ecx, dword ptr [eax]
// 0067aefd  8b5004               mov edx, dword ptr [eax + 4]
// 0067af00  3bd1                 cmp edx, ecx
// 0067af02  7e12                 jle 0x67af16
// 0067af04  3be9                 cmp ebp, ecx
// 0067af06  7506                 jne 0x67af0e
// 0067af08  3954241c             cmp dword ptr [esp + 0x1c], edx
// 0067af0c  7418                 je 0x67af26
// 0067af0e  8be9                 mov ebp, ecx
// 0067af10  8954241c             mov dword ptr [esp + 0x1c], edx
// 0067af14  eb0a                 jmp 0x67af20
// 0067af16  7d0e                 jge 0x67af26
// 0067af18  894c2410             mov dword ptr [esp + 0x10], ecx
// 0067af1c  89542414             mov dword ptr [esp + 0x14], edx
// 0067af20  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0067af24  7caa                 jl 0x67aed0
// 0067af26  5f                   pop edi
// 0067af27  5e                   pop esi
// 0067af28  5d                   pop ebp
// 0067af29  5b                   pop ebx
// 0067af2a  83c418               add esp, 0x18
// 0067af2d  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_SizePopupToolBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@KABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
