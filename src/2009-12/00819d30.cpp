// roc 2009-12 00819d30  unit: CRobloxReportView  size: 806 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00819d30
//
// 00819d30  83ec40               sub esp, 0x40
// 00819d33  53                   push ebx
// 00819d34  55                   push ebp
// 00819d35  56                   push esi
// 00819d36  8bf1                 mov esi, ecx
// 00819d38  8b06                 mov eax, dword ptr [esi]
// 00819d3a  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00819d40  33ed                 xor ebp, ebp
// 00819d42  57                   push edi
// 00819d43  896c2414             mov dword ptr [esp + 0x14], ebp
// 00819d47  ffd2                 call edx
// 00819d49  39a8ec010000         cmp dword ptr [eax + 0x1ec], ebp
// 00819d4f  7434                 je 0x819d85
// 00819d51  8bce                 mov ecx, esi
// 00819d53  e8c8e4ffff           call 0x818220
// 00819d58  8b16                 mov edx, dword ptr [esi]
// 00819d5a  8bd8                 mov ebx, eax
// 00819d5c  8b442464             mov eax, dword ptr [esp + 0x64]
// 00819d60  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 00819d64  8b3b                 mov edi, dword ptr [ebx]
// 00819d66  83c0fe               add eax, -2
// 00819d69  50                   push eax
// 00819d6a  8b442458             mov eax, dword ptr [esp + 0x58]
// 00819d6e  50                   push eax
// 00819d6f  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819d75  8bce                 mov ecx, esi
// 00819d77  83c764               add edi, 0x64
// 00819d7a  ffd0                 call eax
// 00819d7c  8b17                 mov edx, dword ptr [edi]
// 00819d7e  50                   push eax
// 00819d7f  8bcb                 mov ecx, ebx
// 00819d81  ffd2                 call edx
// 00819d83  8be8                 mov ebp, eax
// 00819d85  8b06                 mov eax, dword ptr [esi]
// 00819d87  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00819d8d  8bce                 mov ecx, esi
// 00819d8f  ffd2                 call edx
// 00819d91  83b8f001000000       cmp dword ptr [eax + 0x1f0], 0
// 00819d98  7436                 je 0x819dd0
// 00819d9a  8bce                 mov ecx, esi
// 00819d9c  e87fe4ffff           call 0x818220
// 00819da1  8b16                 mov edx, dword ptr [esi]
// 00819da3  8bd8                 mov ebx, eax
// 00819da5  8b442464             mov eax, dword ptr [esp + 0x64]
// 00819da9  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 00819dad  8b3b                 mov edi, dword ptr [ebx]
// 00819daf  83c0fe               add eax, -2
// 00819db2  50                   push eax
// 00819db3  8b442458             mov eax, dword ptr [esp + 0x58]
// 00819db7  50                   push eax
// 00819db8  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819dbe  8bce                 mov ecx, esi
// 00819dc0  83c76c               add edi, 0x6c
// 00819dc3  ffd0                 call eax
// 00819dc5  8b17                 mov edx, dword ptr [edi]
// 00819dc7  50                   push eax
// 00819dc8  8bcb                 mov ecx, ebx
// 00819dca  ffd2                 call edx
// 00819dcc  89442414             mov dword ptr [esp + 0x14], eax
// 00819dd0  8b442464             mov eax, dword ptr [esp + 0x64]
// 00819dd4  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00819dd8  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 00819ddc  48                   dec eax
// 00819ddd  89442410             mov dword ptr [esp + 0x10], eax
// 00819de1  8b442468             mov eax, dword ptr [esp + 0x68]
// 00819de5  8bf8                 mov edi, eax
// 00819de7  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 00819deb  41                   inc ecx
// 00819dec  48                   dec eax
// 00819ded  4f                   dec edi
// 00819dee  8d5301               lea edx, [ebx + 1]
// 00819df1  894c2418             mov dword ptr [esp + 0x18], ecx
// 00819df5  8d5c2b01             lea ebx, [ebx + ebp + 1]
// 00819df9  8944244c             mov dword ptr [esp + 0x4c], eax
// 00819dfd  85ed                 test ebp, ebp
// 00819dff  7429                 je 0x819e2a
// 00819e01  8b2e                 mov ebp, dword ptr [esi]
// 00819e03  83ec10               sub esp, 0x10
// 00819e06  8bc4                 mov eax, esp
// 00819e08  8908                 mov dword ptr [eax], ecx
// 00819e0a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00819e0e  895004               mov dword ptr [eax + 4], edx
// 00819e11  8b542464             mov edx, dword ptr [esp + 0x64]
// 00819e15  894808               mov dword ptr [eax + 8], ecx
// 00819e18  89580c               mov dword ptr [eax + 0xc], ebx
// 00819e1b  8b85a0010000         mov eax, dword ptr [ebp + 0x1a0]
// 00819e21  52                   push edx
// 00819e22  8bce                 mov ecx, esi
// 00819e24  ffd0                 call eax
// 00819e26  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00819e2a  8b16                 mov edx, dword ptr [esi]
// 00819e2c  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819e32  894c2420             mov dword ptr [esp + 0x20], ecx
// 00819e36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00819e3a  894c2428             mov dword ptr [esp + 0x28], ecx
// 00819e3e  8bce                 mov ecx, esi
// 00819e40  897c242c             mov dword ptr [esp + 0x2c], edi
// 00819e44  ffd0                 call eax
// 00819e46  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00819e4c  e8cf2d0100           call 0x82cc20
// 00819e51  85c0                 test eax, eax
// 00819e53  7e69                 jle 0x819ebe
// 00819e55  8b16                 mov edx, dword ptr [esi]
// 00819e57  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819e5d  8bce                 mov ecx, esi
// 00819e5f  ffd0                 call eax
// 00819e61  83b8f401000000       cmp dword ptr [eax + 0x1f4], 0
// 00819e68  7454                 je 0x819ebe
// 00819e6a  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00819e6f  740c                 je 0x819e7d
// 00819e71  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 00819e77  83794000             cmp dword ptr [ecx + 0x40], 0
// 00819e7b  7441                 je 0x819ebe
// 00819e7d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00819e81  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00819e85  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00819e89  6a01                 push 1
// 00819e8b  83ec10               sub esp, 0x10
// 00819e8e  8bc4                 mov eax, esp
// 00819e90  8910                 mov dword ptr [eax], edx
// 00819e92  8b542440             mov edx, dword ptr [esp + 0x40]
// 00819e96  895804               mov dword ptr [eax + 4], ebx
// 00819e99  894808               mov dword ptr [eax + 8], ecx
// 00819e9c  55                   push ebp
// 00819e9d  8bce                 mov ecx, esi
// 00819e9f  89500c               mov dword ptr [eax + 0xc], edx
// 00819ea2  e8f9fcffff           call 0x819ba0
// 00819ea7  03d8                 add ebx, eax
// 00819ea9  6a01                 push 1
// 00819eab  8d442424             lea eax, [esp + 0x24]
// 00819eaf  50                   push eax
// 00819eb0  55                   push ebp
// 00819eb1  8bce                 mov ecx, esi
// 00819eb3  895c2430             mov dword ptr [esp + 0x30], ebx
// 00819eb7  e8a4e3ffff           call 0x818260
// 00819ebc  03d8                 add ebx, eax
// 00819ebe  8b16                 mov edx, dword ptr [esi]
// 00819ec0  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819ec6  8bce                 mov ecx, esi
// 00819ec8  33ed                 xor ebp, ebp
// 00819eca  ffd0                 call eax
// 00819ecc  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 00819ed2  e8492d0100           call 0x82cc20
// 00819ed7  85c0                 test eax, eax
// 00819ed9  7e73                 jle 0x819f4e
// 00819edb  8b16                 mov edx, dword ptr [esi]
// 00819edd  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819ee3  8bce                 mov ecx, esi
// 00819ee5  ffd0                 call eax
// 00819ee7  39a8f8010000         cmp dword ptr [eax + 0x1f8], ebp
// 00819eed  745f                 je 0x819f4e
// 00819eef  8b16                 mov edx, dword ptr [esi]
// 00819ef1  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819ef7  8bce                 mov ecx, esi
// 00819ef9  ffd0                 call eax
// 00819efb  8b16                 mov edx, dword ptr [esi]
// 00819efd  8be8                 mov ebp, eax
// 00819eff  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819f05  8bce                 mov ecx, esi
// 00819f07  ffd0                 call eax
// 00819f09  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00819f0d  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00819f11  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 00819f17  8b5500               mov edx, dword ptr [ebp]
// 00819f1a  8b9220020000         mov edx, dword ptr [edx + 0x220]
// 00819f20  6aff                 push -1
// 00819f22  51                   push ecx
// 00819f23  50                   push eax
// 00819f24  8bcd                 mov ecx, ebp
// 00819f26  ffd2                 call edx
// 00819f28  8bce                 mov ecx, esi
// 00819f2a  8be8                 mov ebp, eax
// 00819f2c  e8efe2ffff           call 0x818220
// 00819f31  8bc8                 mov ecx, eax
// 00819f33  e8680b0800           call 0x89aaa0
// 00819f38  03e8                 add ebp, eax
// 00819f3a  8b8660030000         mov eax, dword ptr [esi + 0x360]
// 00819f40  83784400             cmp dword ptr [eax + 0x44], 0
// 00819f44  7408                 je 0x819f4e
// 00819f46  8bc7                 mov eax, edi
// 00819f48  2bc5                 sub eax, ebp
// 00819f4a  8944242c             mov dword ptr [esp + 0x2c], eax
// 00819f4e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00819f52  8b16                 mov edx, dword ptr [esi]
// 00819f54  8b92a8010000         mov edx, dword ptr [edx + 0x1a8]
// 00819f5a  8d44241c             lea eax, [esp + 0x1c]
// 00819f5e  50                   push eax
// 00819f5f  51                   push ecx
// 00819f60  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00819f64  83ec10               sub esp, 0x10
// 00819f67  8bc4                 mov eax, esp
// 00819f69  8908                 mov dword ptr [eax], ecx
// 00819f6b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00819f6f  895804               mov dword ptr [eax + 4], ebx
// 00819f72  894808               mov dword ptr [eax + 8], ecx
// 00819f75  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00819f79  89480c               mov dword ptr [eax + 0xc], ecx
// 00819f7c  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00819f80  50                   push eax
// 00819f81  8bce                 mov ecx, esi
// 00819f83  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00819f8b  ffd2                 call edx
// 00819f8d  8944246c             mov dword ptr [esp + 0x6c], eax
// 00819f91  85ed                 test ebp, ebp
// 00819f93  7e6f                 jle 0x81a004
// 00819f95  8b442420             mov eax, dword ptr [esp + 0x20]
// 00819f99  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00819f9d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00819fa1  89442430             mov dword ptr [esp + 0x30], eax
// 00819fa5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00819fa9  895c2434             mov dword ptr [esp + 0x34], ebx
// 00819fad  894c2438             mov dword ptr [esp + 0x38], ecx
// 00819fb1  03d8                 add ebx, eax
// 00819fb3  8bcf                 mov ecx, edi
// 00819fb5  2bcb                 sub ecx, ebx
// 00819fb7  3bcd                 cmp ecx, ebp
// 00819fb9  8954243c             mov dword ptr [esp + 0x3c], edx
// 00819fbd  895c2434             mov dword ptr [esp + 0x34], ebx
// 00819fc1  897c243c             mov dword ptr [esp + 0x3c], edi
// 00819fc5  7e3d                 jle 0x81a004
// 00819fc7  8b442454             mov eax, dword ptr [esp + 0x54]
// 00819fcb  6a00                 push 0
// 00819fcd  8d542434             lea edx, [esp + 0x34]
// 00819fd1  52                   push edx
// 00819fd2  50                   push eax
// 00819fd3  8bce                 mov ecx, esi
// 00819fd5  e886e2ffff           call 0x818260
// 00819fda  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00819fde  8b542438             mov edx, dword ptr [esp + 0x38]
// 00819fe2  6a00                 push 0
// 00819fe4  03d8                 add ebx, eax
// 00819fe6  83ec10               sub esp, 0x10
// 00819fe9  8bc4                 mov eax, esp
// 00819feb  8908                 mov dword ptr [eax], ecx
// 00819fed  895804               mov dword ptr [eax + 4], ebx
// 00819ff0  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00819ff4  895008               mov dword ptr [eax + 8], edx
// 00819ff7  53                   push ebx
// 00819ff8  8bce                 mov ecx, esi
// 00819ffa  89780c               mov dword ptr [eax + 0xc], edi
// 00819ffd  e89efbffff           call 0x819ba0
// 0081a002  eb04                 jmp 0x81a008
// 0081a004  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0081a008  837c241400           cmp dword ptr [esp + 0x14], 0
// 0081a00d  7429                 je 0x81a038
// 0081a00f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081a013  8b16                 mov edx, dword ptr [esi]
// 0081a015  8b92a4010000         mov edx, dword ptr [edx + 0x1a4]
// 0081a01b  83ec10               sub esp, 0x10
// 0081a01e  8bc4                 mov eax, esp
// 0081a020  8908                 mov dword ptr [eax], ecx
// 0081a022  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081a026  897804               mov dword ptr [eax + 4], edi
// 0081a029  894808               mov dword ptr [eax + 8], ecx
// 0081a02c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0081a030  89480c               mov dword ptr [eax + 0xc], ecx
// 0081a033  53                   push ebx
// 0081a034  8bce                 mov ecx, esi
// 0081a036  ffd2                 call edx
// 0081a038  6a00                 push 0
// 0081a03a  6a00                 push 0
// 0081a03c  8d442464             lea eax, [esp + 0x64]
// 0081a040  50                   push eax
// 0081a041  8bcb                 mov ecx, ebx
// 0081a043  e8b0a5fdff           call 0x7f45f8
// 0081a048  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0081a04c  5f                   pop edi
// 0081a04d  5e                   pop esi
// 0081a04e  5d                   pop ebp
// 0081a04f  5b                   pop ebx
// 0081a050  83c440               add esp, 0x40
// 0081a053  c21c00               ret 0x1c
// copied from an identical function in another client (function ?PrintReport@CXTPReportView@@MAEJPAVCDC@@PAUCPrintInfo@@VCRect@@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp