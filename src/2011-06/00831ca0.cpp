// roc 2011-06 00831ca0  unit: CXTPReportControl  size: 408 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00831ca0
//
// 00831ca0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00831ca4  83ec1c               sub esp, 0x1c
// 00831ca7  57                   push edi
// 00831ca8  8bf9                 mov edi, ecx
// 00831caa  85c0                 test eax, eax
// 00831cac  7419                 je 0x831cc7
// 00831cae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00831cb2  50                   push eax
// 00831cb3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00831cb7  50                   push eax
// 00831cb8  51                   push ecx
// 00831cb9  8bcf                 mov ecx, edi
// 00831cbb  e8a2aa1900           call 0x9cc762
// 00831cc0  5f                   pop edi
// 00831cc1  83c41c               add esp, 0x1c
// 00831cc4  c20c00               ret 0xc
// 00831cc7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00831ccb  56                   push esi
// 00831ccc  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 00831cd2  83f807               cmp eax, 7
// 00831cd5  0f872a010000         ja 0x831e05
// 00831cdb  ff2485181e8300       jmp dword ptr [eax*4 + 0x831e18]
// 00831ce2  33f6                 xor esi, esi
// 00831ce4  56                   push esi
// 00831ce5  8bcf                 mov ecx, edi
// 00831ce7  e854faffff           call 0x831740
// 00831cec  5e                   pop esi
// 00831ced  5f                   pop edi
// 00831cee  83c41c               add esp, 0x1c
// 00831cf1  c20c00               ret 0xc
// 00831cf4  6a01                 push 1
// 00831cf6  e8d9aa1900           call 0x9cc7d4
// 00831cfb  8bf0                 mov esi, eax
// 00831cfd  56                   push esi
// 00831cfe  8bcf                 mov ecx, edi
// 00831d00  e83bfaffff           call 0x831740
// 00831d05  5e                   pop esi
// 00831d06  5f                   pop edi
// 00831d07  83c41c               add esp, 0x1c
// 00831d0a  c20c00               ret 0xc
// 00831d0d  8d46ff               lea eax, [esi - 1]
// 00831d10  33d2                 xor edx, edx
// 00831d12  85c0                 test eax, eax
// 00831d14  0f9ec2               setle dl
// 00831d17  8bcf                 mov ecx, edi
// 00831d19  4a                   dec edx
// 00831d1a  23d0                 and edx, eax
// 00831d1c  8bf2                 mov esi, edx
// 00831d1e  56                   push esi
// 00831d1f  e81cfaffff           call 0x831740
// 00831d24  5e                   pop esi
// 00831d25  5f                   pop edi
// 00831d26  83c41c               add esp, 0x1c
// 00831d29  c20c00               ret 0xc
// 00831d2c  6a01                 push 1
// 00831d2e  46                   inc esi
// 00831d2f  e8a0aa1900           call 0x9cc7d4
// 00831d34  3bf0                 cmp esi, eax
// 00831d36  0f8cc9000000         jl 0x831e05
// 00831d3c  6a01                 push 1
// 00831d3e  8bcf                 mov ecx, edi
// 00831d40  e88faa1900           call 0x9cc7d4
// 00831d45  8bf0                 mov esi, eax
// 00831d47  56                   push esi
// 00831d48  8bcf                 mov ecx, edi
// 00831d4a  e8f1f9ffff           call 0x831740
// 00831d4f  5e                   pop esi
// 00831d50  5f                   pop edi
// 00831d51  83c41c               add esp, 0x1c
// 00831d54  c20c00               ret 0xc
// 00831d57  6a00                 push 0
// 00831d59  56                   push esi
// 00831d5a  e8c1fbffff           call 0x831920
// 00831d5f  8bce                 mov ecx, esi
// 00831d61  2bc8                 sub ecx, eax
// 00831d63  85c9                 test ecx, ecx
// 00831d65  0f8e77ffffff         jle 0x831ce2
// 00831d6b  6a00                 push 0
// 00831d6d  56                   push esi
// 00831d6e  8bcf                 mov ecx, edi
// 00831d70  e8abfbffff           call 0x831920
// 00831d75  2bf0                 sub esi, eax
// 00831d77  56                   push esi
// 00831d78  8bcf                 mov ecx, edi
// 00831d7a  e8c1f9ffff           call 0x831740
// 00831d7f  5e                   pop esi
// 00831d80  5f                   pop edi
// 00831d81  83c41c               add esp, 0x1c
// 00831d84  c20c00               ret 0xc
// 00831d87  53                   push ebx
// 00831d88  6a01                 push 1
// 00831d8a  56                   push esi
// 00831d8b  e890fbffff           call 0x831920
// 00831d90  6a01                 push 1
// 00831d92  8bcf                 mov ecx, edi
// 00831d94  8d1c30               lea ebx, [eax + esi]
// 00831d97  e838aa1900           call 0x9cc7d4
// 00831d9c  3bd8                 cmp ebx, eax
// 00831d9e  5b                   pop ebx
// 00831d9f  6a01                 push 1
// 00831da1  8bcf                 mov ecx, edi
// 00831da3  0f8d4dffffff         jge 0x831cf6
// 00831da9  56                   push esi
// 00831daa  e871fbffff           call 0x831920
// 00831daf  03f0                 add esi, eax
// 00831db1  56                   push esi
// 00831db2  8bcf                 mov ecx, edi
// 00831db4  e887f9ffff           call 0x831740
// 00831db9  5e                   pop esi
// 00831dba  5f                   pop edi
// 00831dbb  83c41c               add esp, 0x1c
// 00831dbe  c20c00               ret 0xc
// 00831dc1  33c0                 xor eax, eax
// 00831dc3  6a17                 push 0x17
// 00831dc5  8d54240c             lea edx, [esp + 0xc]
// 00831dc9  52                   push edx
// 00831dca  89442410             mov dword ptr [esp + 0x10], eax
// 00831dce  89442414             mov dword ptr [esp + 0x14], eax
// 00831dd2  6a01                 push 1
// 00831dd4  8944241c             mov dword ptr [esp + 0x1c], eax
// 00831dd8  89442420             mov dword ptr [esp + 0x20], eax
// 00831ddc  89442424             mov dword ptr [esp + 0x24], eax
// 00831de0  89442428             mov dword ptr [esp + 0x28], eax
// 00831de4  8944242c             mov dword ptr [esp + 0x2c], eax
// 00831de8  c74424141c000000     mov dword ptr [esp + 0x14], 0x1c
// 00831df0  c744241810000000     mov dword ptr [esp + 0x18], 0x10
// 00831df8  e8d1a91900           call 0x9cc7ce
// 00831dfd  85c0                 test eax, eax
// 00831dff  740c                 je 0x831e0d
// 00831e01  8b742420             mov esi, dword ptr [esp + 0x20]
// 00831e05  56                   push esi
// 00831e06  8bcf                 mov ecx, edi
// 00831e08  e833f9ffff           call 0x831740
// 00831e0d  5e                   pop esi
// 00831e0e  5f                   pop edi
// 00831e0f  83c41c               add esp, 0x1c
// 00831e12  c20c00               ret 0xc
// 00831e15  8d4900               lea ecx, [ecx]
// 00831e18  0d1d83002c           or eax, 0x2c00831d
// 00831e1d  1d8300571d           sbb eax, 0x1d570083
// 00831e22  830087               add dword ptr [eax], -0x79
// 00831e25  1d8300c11d           sbb eax, 0x1dc10083
// 00831e2a  8300c1               add dword ptr [eax], -0x3f
// 00831e2d  1d8300e21c           sbb eax, 0x1ce20083
// 00831e32  8300f4               add dword ptr [eax], -0xc
// 00831e35  1c83                 sbb al, 0x83
// copied from an identical function in another client (function ?OnVScroll@CXTPReportControl@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp