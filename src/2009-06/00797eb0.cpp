// roc 2009-06 00797eb0  unit: CXTPRibbonTheme  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00797eb0
//
// 00797eb0  83ec30               sub esp, 0x30
// 00797eb3  53                   push ebx
// 00797eb4  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00797eb8  55                   push ebp
// 00797eb9  56                   push esi
// 00797eba  57                   push edi
// 00797ebb  8d442410             lea eax, [esp + 0x10]
// 00797ebf  8bf9                 mov edi, ecx
// 00797ec1  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00797ec4  50                   push eax
// 00797ec5  51                   push ecx
// 00797ec6  ff1514ee8900         call dword ptr [0x89ee14]
// 00797ecc  bd05000000           mov ebp, 5
// 00797ed1  8bcf                 mov ecx, edi
// 00797ed3  39ab00010000         cmp dword ptr [ebx + 0x100], ebp
// 00797ed9  7527                 jne 0x797f02
// 00797edb  68c0099000           push 0x9009c0
// 00797ee0  e8dbbe0000           call 0x7a3dc0
// 00797ee5  8bf0                 mov esi, eax
// 00797ee7  85f6                 test esi, esi
// 00797ee9  0f8404010000         je 0x797ff3
// 00797eef  6a01                 push 1
// 00797ef1  6a00                 push 0
// 00797ef3  8d542438             lea edx, [esp + 0x38]
// 00797ef7  bd04000000           mov ebp, 4
// 00797efc  52                   push edx
// 00797efd  e9a4000000           jmp 0x797fa6
// 00797f02  53                   push ebx
// 00797f03  e868b2f8ff           call 0x723170
// 00797f08  85c0                 test eax, eax
// 00797f0a  7417                 je 0x797f23
// 00797f0c  8b442444             mov eax, dword ptr [esp + 0x44]
// 00797f10  53                   push ebx
// 00797f11  50                   push eax
// 00797f12  8bcf                 mov ecx, edi
// 00797f14  e857080100           call 0x7a8770
// 00797f19  5f                   pop edi
// 00797f1a  5e                   pop esi
// 00797f1b  5d                   pop ebp
// 00797f1c  5b                   pop ebx
// 00797f1d  83c430               add esp, 0x30
// 00797f20  c20800               ret 8
// 00797f23  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 00797f29  85c0                 test eax, eax
// 00797f2b  745a                 je 0x797f87
// 00797f2d  83f801               cmp eax, 1
// 00797f30  7455                 je 0x797f87
// 00797f32  83f802               cmp eax, 2
// 00797f35  741c                 je 0x797f53
// 00797f37  83f803               cmp eax, 3
// 00797f3a  7417                 je 0x797f53
// 00797f3c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00797f40  53                   push ebx
// 00797f41  51                   push ecx
// 00797f42  8bcf                 mov ecx, edi
// 00797f44  e827080100           call 0x7a8770
// 00797f49  5f                   pop edi
// 00797f4a  5e                   pop esi
// 00797f4b  5d                   pop ebp
// 00797f4c  5b                   pop ebx
// 00797f4d  83c430               add esp, 0x30
// 00797f50  c20800               ret 8
// 00797f53  68380a9000           push 0x900a38
// 00797f58  8bcf                 mov ecx, edi
// 00797f5a  e861be0000           call 0x7a3dc0
// 00797f5f  8bf0                 mov esi, eax
// 00797f61  85f6                 test esi, esi
// 00797f63  7517                 jne 0x797f7c
// 00797f65  8b542444             mov edx, dword ptr [esp + 0x44]
// 00797f69  53                   push ebx
// 00797f6a  52                   push edx
// 00797f6b  8bcf                 mov ecx, edi
// 00797f6d  e8fe070100           call 0x7a8770
// 00797f72  5f                   pop edi
// 00797f73  5e                   pop esi
// 00797f74  5d                   pop ebp
// 00797f75  5b                   pop ebx
// 00797f76  83c430               add esp, 0x30
// 00797f79  c20800               ret 8
// 00797f7c  6a01                 push 1
// 00797f7e  6a00                 push 0
// 00797f80  8d442438             lea eax, [esp + 0x38]
// 00797f84  50                   push eax
// 00797f85  eb1f                 jmp 0x797fa6
// 00797f87  68200a9000           push 0x900a20
// 00797f8c  8bcf                 mov ecx, edi
// 00797f8e  e82dbe0000           call 0x7a3dc0
// 00797f93  8bf0                 mov esi, eax
// 00797f95  85f6                 test esi, esi
// 00797f97  0f846fffffff         je 0x797f0c
// 00797f9d  6a01                 push 1
// 00797f9f  6a00                 push 0
// 00797fa1  8d4c2438             lea ecx, [esp + 0x38]
// 00797fa5  51                   push ecx
// 00797fa6  8bce                 mov ecx, esi
// 00797fa8  8bfd                 mov edi, ebp
// 00797faa  8bdd                 mov ebx, ebp
// 00797fac  896c2438             mov dword ptr [esp + 0x38], ebp
// 00797fb0  e80bde0600           call 0x805dc0
// 00797fb5  83ec10               sub esp, 0x10
// 00797fb8  8bcc                 mov ecx, esp
// 00797fba  8939                 mov dword ptr [ecx], edi
// 00797fbc  895904               mov dword ptr [ecx + 4], ebx
// 00797fbf  896908               mov dword ptr [ecx + 8], ebp
// 00797fc2  83ec10               sub esp, 0x10
// 00797fc5  8bd5                 mov edx, ebp
// 00797fc7  89510c               mov dword ptr [ecx + 0xc], edx
// 00797fca  8b10                 mov edx, dword ptr [eax]
// 00797fcc  8bcc                 mov ecx, esp
// 00797fce  8911                 mov dword ptr [ecx], edx
// 00797fd0  8b5004               mov edx, dword ptr [eax + 4]
// 00797fd3  895104               mov dword ptr [ecx + 4], edx
// 00797fd6  8b5008               mov edx, dword ptr [eax + 8]
// 00797fd9  8b400c               mov eax, dword ptr [eax + 0xc]
// 00797fdc  895108               mov dword ptr [ecx + 8], edx
// 00797fdf  8b542464             mov edx, dword ptr [esp + 0x64]
// 00797fe3  89410c               mov dword ptr [ecx + 0xc], eax
// 00797fe6  8d4c2430             lea ecx, [esp + 0x30]
// 00797fea  51                   push ecx
// 00797feb  52                   push edx
// 00797fec  8bce                 mov ecx, esi
// 00797fee  e89dd60600           call 0x805690
// 00797ff3  5f                   pop edi
// 00797ff4  5e                   pop esi
// 00797ff5  5d                   pop ebp
// 00797ff6  5b                   pop ebx
// 00797ff7  83c430               add esp, 0x30
// 00797ffa  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillCommandBarEntry@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
