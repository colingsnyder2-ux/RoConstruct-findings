// roc 2009-12 008296a0  unit: CXTPReportHeader  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008296a0
//
// 008296a0  83ec24               sub esp, 0x24
// 008296a3  53                   push ebx
// 008296a4  55                   push ebp
// 008296a5  56                   push esi
// 008296a6  57                   push edi
// 008296a7  8bf1                 mov esi, ecx
// 008296a9  e872ecffff           call 0x828320
// 008296ae  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008296b2  8b0f                 mov ecx, dword ptr [edi]
// 008296b4  8b18                 mov ebx, dword ptr [eax]
// 008296b6  83ec10               sub esp, 0x10
// 008296b9  8bd4                 mov edx, esp
// 008296bb  890a                 mov dword ptr [edx], ecx
// 008296bd  8b4f04               mov ecx, dword ptr [edi + 4]
// 008296c0  894a04               mov dword ptr [edx + 4], ecx
// 008296c3  8b4f08               mov ecx, dword ptr [edi + 8]
// 008296c6  894a08               mov dword ptr [edx + 8], ecx
// 008296c9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008296cc  894a0c               mov dword ptr [edx + 0xc], ecx
// 008296cf  8b542448             mov edx, dword ptr [esp + 0x48]
// 008296d3  8bc8                 mov ecx, eax
// 008296d5  8b8394000000         mov eax, dword ptr [ebx + 0x94]
// 008296db  52                   push edx
// 008296dc  ffd0                 call eax
// 008296de  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008296e1  e81a3d0400           call 0x86d400
// 008296e6  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008296e9  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 008296ef  3bc8                 cmp ecx, eax
// 008296f1  894c2410             mov dword ptr [esp + 0x10], ecx
// 008296f5  7c04                 jl 0x8296fb
// 008296f7  89442410             mov dword ptr [esp + 0x10], eax
// 008296fb  8d68ff               lea ebp, [eax - 1]
// 008296fe  896c2418             mov dword ptr [esp + 0x18], ebp
// 00829702  85ed                 test ebp, ebp
// 00829704  0f8cea000000         jl 0x8297f4
// 0082970a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0082970e  2bdd                 sub ebx, ebp
// 00829710  4b                   dec ebx
// 00829711  895c2414             mov dword ptr [esp + 0x14], ebx
// 00829715  33c0                 xor eax, eax
// 00829717  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0082971b  0f9cc0               setl al
// 0082971e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00829722  85c0                 test eax, eax
// 00829724  8bc3                 mov eax, ebx
// 00829726  7502                 jne 0x82972a
// 00829728  8bc5                 mov eax, ebp
// 0082972a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082972d  50                   push eax
// 0082972e  e8cd3d0400           call 0x86d500
// 00829733  89442420             mov dword ptr [esp + 0x20], eax
// 00829737  85c0                 test eax, eax
// 00829739  0f84a3000000         je 0x8297e2
// 0082973f  8d542424             lea edx, [esp + 0x24]
// 00829743  52                   push edx
// 00829744  8bc8                 mov ecx, eax
// 00829746  e885e3ffff           call 0x827ad0
// 0082974b  8b5f04               mov ebx, dword ptr [edi + 4]
// 0082974e  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 00829751  8bc7                 mov eax, edi
// 00829753  2bc3                 sub eax, ebx
// 00829755  895c2428             mov dword ptr [esp + 0x28], ebx
// 00829759  897c2430             mov dword ptr [esp + 0x30], edi
// 0082975d  85c0                 test eax, eax
// 0082975f  7e79                 jle 0x8297da
// 00829761  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00829766  7438                 je 0x8297a0
// 00829768  8bce                 mov ecx, esi
// 0082976a  e8b1ebffff           call 0x828320
// 0082976f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00829773  8b28                 mov ebp, dword ptr [eax]
// 00829775  83ec10               sub esp, 0x10
// 00829778  8bd4                 mov edx, esp
// 0082977a  890a                 mov dword ptr [edx], ecx
// 0082977c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00829780  895a04               mov dword ptr [edx + 4], ebx
// 00829783  894a08               mov dword ptr [edx + 8], ecx
// 00829786  897a0c               mov dword ptr [edx + 0xc], edi
// 00829789  8b542448             mov edx, dword ptr [esp + 0x48]
// 0082978d  8bc8                 mov ecx, eax
// 0082978f  8b8594000000         mov eax, dword ptr [ebp + 0x94]
// 00829795  52                   push edx
// 00829796  ffd0                 call eax
// 00829798  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0082979c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008297a0  8bce                 mov ecx, esi
// 008297a2  e879ebffff           call 0x828320
// 008297a7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008297ab  8b28                 mov ebp, dword ptr [eax]
// 008297ad  83ec10               sub esp, 0x10
// 008297b0  8bd4                 mov edx, esp
// 008297b2  890a                 mov dword ptr [edx], ecx
// 008297b4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008297b8  895a04               mov dword ptr [edx + 4], ebx
// 008297bb  894a08               mov dword ptr [edx + 8], ecx
// 008297be  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008297c2  897a0c               mov dword ptr [edx + 0xc], edi
// 008297c5  8b542430             mov edx, dword ptr [esp + 0x30]
// 008297c9  56                   push esi
// 008297ca  52                   push edx
// 008297cb  8b959c000000         mov edx, dword ptr [ebp + 0x9c]
// 008297d1  51                   push ecx
// 008297d2  8bc8                 mov ecx, eax
// 008297d4  ffd2                 call edx
// 008297d6  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008297da  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008297de  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008297e2  4d                   dec ebp
// 008297e3  43                   inc ebx
// 008297e4  896c2418             mov dword ptr [esp + 0x18], ebp
// 008297e8  895c2414             mov dword ptr [esp + 0x14], ebx
// 008297ec  85ed                 test ebp, ebp
// 008297ee  0f8d21ffffff         jge 0x829715
// 008297f4  5f                   pop edi
// 008297f5  5e                   pop esi
// 008297f6  5d                   pop ebp
// 008297f7  5b                   pop ebx
// 008297f8  83c424               add esp, 0x24
// 008297fb  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawFooter@CXTPReportHeader@@MAEXPAVCDC@@AAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp