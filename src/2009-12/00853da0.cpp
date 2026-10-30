// roc 2009-12 00853da0  unit: CXTPPropExchangeXMLNode::CXMLEnumerator  size: 549 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00853da0
//
// 00853da0  6aff                 push -1
// 00853da2  68f8dd9500           push 0x95ddf8
// 00853da7  64a100000000         mov eax, dword ptr fs:[0]
// 00853dad  50                   push eax
// 00853dae  83ec10               sub esp, 0x10
// 00853db1  53                   push ebx
// 00853db2  55                   push ebp
// 00853db3  56                   push esi
// 00853db4  57                   push edi
// 00853db5  a10052b600           mov eax, dword ptr [0xb65200]
// 00853dba  33c4                 xor eax, esp
// 00853dbc  50                   push eax
// 00853dbd  8d442424             lea eax, [esp + 0x24]
// 00853dc1  64a300000000         mov dword ptr fs:[0], eax
// 00853dc7  8bf1                 mov esi, ecx
// 00853dc9  8b4604               mov eax, dword ptr [esi + 4]
// 00853dcc  8b38                 mov edi, dword ptr [eax]
// 00853dce  8d5e08               lea ebx, [esi + 8]
// 00853dd1  8bcb                 mov ecx, ebx
// 00853dd3  83c770               add edi, 0x70
// 00853dd6  ff1580de9800         call dword ptr [0x98de80]
// 00853ddc  8b4e04               mov ecx, dword ptr [esi + 4]
// 00853ddf  8b17                 mov edx, dword ptr [edi]
// 00853de1  50                   push eax
// 00853de2  ffd2                 call edx
// 00853de4  8bf8                 mov edi, eax
// 00853de6  33c9                 xor ecx, ecx
// 00853de8  897c241c             mov dword ptr [esp + 0x1c], edi
// 00853dec  894c2414             mov dword ptr [esp + 0x14], ecx
// 00853df0  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00853df4  894c2418             mov dword ptr [esp + 0x18], ecx
// 00853df8  8b4604               mov eax, dword ptr [esi + 4]
// 00853dfb  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00853e00  394828               cmp dword ptr [eax + 0x28], ecx
// 00853e03  0f85cc000000         jne 0x853ed5
// 00853e09  8b6f44               mov ebp, dword ptr [edi + 0x44]
// 00853e0c  3be9                 cmp ebp, ecx
// 00853e0e  750a                 jne 0x853e1a
// 00853e10  6803400080           push 0x80004003
// 00853e15  e8e61afaff           call 0x7f5900
// 00853e1a  8bcb                 mov ecx, ebx
// 00853e1c  ff1580de9800         call dword ptr [0x98de80]
// 00853e22  50                   push eax
// 00853e23  8d4c2424             lea ecx, [esp + 0x24]
// 00853e27  e864ab0100           call 0x86e990
// 00853e2c  8bd8                 mov ebx, eax
// 00853e2e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00853e32  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00853e37  85c0                 test eax, eax
// 00853e39  7408                 je 0x853e43
// 00853e3b  8b08                 mov ecx, dword ptr [eax]
// 00853e3d  8b5108               mov edx, dword ptr [ecx + 8]
// 00853e40  50                   push eax
// 00853e41  ffd2                 call edx
// 00853e43  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00853e4b  8b7d00               mov edi, dword ptr [ebp]
// 00853e4e  8d442418             lea eax, [esp + 0x18]
// 00853e52  50                   push eax
// 00853e53  8bcb                 mov ecx, ebx
// 00853e55  81c7bc000000         add edi, 0xbc
// 00853e5b  e810b8cdff           call 0x52f670
// 00853e60  8b0f                 mov ecx, dword ptr [edi]
// 00853e62  50                   push eax
// 00853e63  55                   push ebp
// 00853e64  ffd1                 call ecx
// 00853e66  8d4c2420             lea ecx, [esp + 0x20]
// 00853e6a  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00853e6f  e8fca10100           call 0x86e070
// 00853e74  837c241800           cmp dword ptr [esp + 0x18], 0
// 00853e79  7441                 je 0x853ebc
// 00853e7b  8b4604               mov eax, dword ptr [esi + 4]
// 00853e7e  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00853e81  83c04c               add eax, 0x4c
// 00853e84  85ff                 test edi, edi
// 00853e86  750a                 jne 0x853e92
// 00853e88  6803400080           push 0x80004003
// 00853e8d  e86e1afaff           call 0x7f5900
// 00853e92  8b442414             mov eax, dword ptr [esp + 0x14]
// 00853e96  85c0                 test eax, eax
// 00853e98  7408                 je 0x853ea2
// 00853e9a  8b10                 mov edx, dword ptr [eax]
// 00853e9c  50                   push eax
// 00853e9d  8b4208               mov eax, dword ptr [edx + 8]
// 00853ea0  ffd0                 call eax
// 00853ea2  8b442418             mov eax, dword ptr [esp + 0x18]
// 00853ea6  8d542414             lea edx, [esp + 0x14]
// 00853eaa  52                   push edx
// 00853eab  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00853eb3  8b0f                 mov ecx, dword ptr [edi]
// 00853eb5  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00853eb8  50                   push eax
// 00853eb9  57                   push edi
// 00853eba  ffd1                 call ecx
// 00853ebc  8b442434             mov eax, dword ptr [esp + 0x34]
// 00853ec0  ff00                 inc dword ptr [eax]
// 00853ec2  8b08                 mov ecx, dword ptr [eax]
// 00853ec4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00853ec8  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 00853ecb  767a                 jbe 0x853f47
// 00853ecd  c70000000000         mov dword ptr [eax], 0
// 00853ed3  eb72                 jmp 0x853f47
// 00853ed5  8b4610               mov eax, dword ptr [esi + 0x10]
// 00853ed8  3bc1                 cmp eax, ecx
// 00853eda  740c                 je 0x853ee8
// 00853edc  89442414             mov dword ptr [esp + 0x14], eax
// 00853ee0  8b10                 mov edx, dword ptr [eax]
// 00853ee2  50                   push eax
// 00853ee3  8b4204               mov eax, dword ptr [edx + 4]
// 00853ee6  ffd0                 call eax
// 00853ee8  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00853eec  8b4d00               mov ecx, dword ptr [ebp]
// 00853eef  51                   push ecx
// 00853ef0  8d542438             lea edx, [esp + 0x38]
// 00853ef4  52                   push edx
// 00853ef5  8bce                 mov ecx, esi
// 00853ef7  e804ebffff           call 0x852a00
// 00853efc  8b00                 mov eax, dword ptr [eax]
// 00853efe  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00853f01  3bd8                 cmp ebx, eax
// 00853f03  741b                 je 0x853f20
// 00853f05  894610               mov dword ptr [esi + 0x10], eax
// 00853f08  85c0                 test eax, eax
// 00853f0a  7408                 je 0x853f14
// 00853f0c  8b08                 mov ecx, dword ptr [eax]
// 00853f0e  8b5104               mov edx, dword ptr [ecx + 4]
// 00853f11  50                   push eax
// 00853f12  ffd2                 call edx
// 00853f14  85db                 test ebx, ebx
// 00853f16  7408                 je 0x853f20
// 00853f18  8b03                 mov eax, dword ptr [ebx]
// 00853f1a  8b4808               mov ecx, dword ptr [eax + 8]
// 00853f1d  53                   push ebx
// 00853f1e  ffd1                 call ecx
// 00853f20  8b442434             mov eax, dword ptr [esp + 0x34]
// 00853f24  85c0                 test eax, eax
// 00853f26  7408                 je 0x853f30
// 00853f28  8b10                 mov edx, dword ptr [eax]
// 00853f2a  50                   push eax
// 00853f2b  8b4208               mov eax, dword ptr [edx + 8]
// 00853f2e  ffd0                 call eax
// 00853f30  837e1000             cmp dword ptr [esi + 0x10], 0
// 00853f34  0f94c0               sete al
// 00853f37  84c0                 test al, al
// 00853f39  7409                 je 0x853f44
// 00853f3b  c7450000000000       mov dword ptr [ebp], 0
// 00853f42  eb03                 jmp 0x853f47
// 00853f44  ff4500               inc dword ptr [ebp]
// 00853f47  c7473801000000       mov dword ptr [edi + 0x38], 1
// 00853f4e  8b774c               mov esi, dword ptr [edi + 0x4c]
// 00853f51  8b442414             mov eax, dword ptr [esp + 0x14]
// 00853f55  3bf0                 cmp esi, eax
// 00853f57  7427                 je 0x853f80
// 00853f59  89474c               mov dword ptr [edi + 0x4c], eax
// 00853f5c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00853f60  85c0                 test eax, eax
// 00853f62  740c                 je 0x853f70
// 00853f64  8b08                 mov ecx, dword ptr [eax]
// 00853f66  8b5104               mov edx, dword ptr [ecx + 4]
// 00853f69  50                   push eax
// 00853f6a  ffd2                 call edx
// 00853f6c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00853f70  85f6                 test esi, esi
// 00853f72  740c                 je 0x853f80
// 00853f74  8b06                 mov eax, dword ptr [esi]
// 00853f76  8b4808               mov ecx, dword ptr [eax + 8]
// 00853f79  56                   push esi
// 00853f7a  ffd1                 call ecx
// 00853f7c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00853f80  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00853f84  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00853f89  85c9                 test ecx, ecx
// 00853f8b  740c                 je 0x853f99
// 00853f8d  8b11                 mov edx, dword ptr [ecx]
// 00853f8f  8b4208               mov eax, dword ptr [edx + 8]
// 00853f92  51                   push ecx
// 00853f93  ffd0                 call eax
// 00853f95  8b442414             mov eax, dword ptr [esp + 0x14]
// 00853f99  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00853fa1  85c0                 test eax, eax
// 00853fa3  7408                 je 0x853fad
// 00853fa5  8b08                 mov ecx, dword ptr [eax]
// 00853fa7  8b5108               mov edx, dword ptr [ecx + 8]
// 00853faa  50                   push eax
// 00853fab  ffd2                 call edx
// 00853fad  8bc7                 mov eax, edi
// 00853faf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00853fb3  64890d00000000       mov dword ptr fs:[0], ecx
// 00853fba  59                   pop ecx
// 00853fbb  5f                   pop edi
// 00853fbc  5e                   pop esi
// 00853fbd  5d                   pop ebp
// 00853fbe  5b                   pop ebx
// 00853fbf  83c41c               add esp, 0x1c
// 00853fc2  c20400               ret 4
// copied from an identical function in another client (function ?GetNext@CXMLEnumerator@CXTPPropExchangeXMLNode@@UAEPAVCXTPPropExchange@@AAPAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp