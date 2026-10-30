// roc 2009-12 0081db10  unit: CXTPReportControl  size: 408 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081db10
//
// 0081db10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081db14  83ec1c               sub esp, 0x1c
// 0081db17  57                   push edi
// 0081db18  8bf9                 mov edi, ecx
// 0081db1a  85c0                 test eax, eax
// 0081db1c  7419                 je 0x81db37
// 0081db1e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081db22  50                   push eax
// 0081db23  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081db27  50                   push eax
// 0081db28  51                   push ecx
// 0081db29  8bcf                 mov ecx, edi
// 0081db2b  e8da8a1000           call 0x92660a
// 0081db30  5f                   pop edi
// 0081db31  83c41c               add esp, 0x1c
// 0081db34  c20c00               ret 0xc
// 0081db37  8b442424             mov eax, dword ptr [esp + 0x24]
// 0081db3b  56                   push esi
// 0081db3c  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 0081db42  83f807               cmp eax, 7
// 0081db45  0f872a010000         ja 0x81dc75
// 0081db4b  ff248588dc8100       jmp dword ptr [eax*4 + 0x81dc88]
// 0081db52  33f6                 xor esi, esi
// 0081db54  56                   push esi
// 0081db55  8bcf                 mov ecx, edi
// 0081db57  e844faffff           call 0x81d5a0
// 0081db5c  5e                   pop esi
// 0081db5d  5f                   pop edi
// 0081db5e  83c41c               add esp, 0x1c
// 0081db61  c20c00               ret 0xc
// 0081db64  6a01                 push 1
// 0081db66  e81d8b1000           call 0x926688
// 0081db6b  8bf0                 mov esi, eax
// 0081db6d  56                   push esi
// 0081db6e  8bcf                 mov ecx, edi
// 0081db70  e82bfaffff           call 0x81d5a0
// 0081db75  5e                   pop esi
// 0081db76  5f                   pop edi
// 0081db77  83c41c               add esp, 0x1c
// 0081db7a  c20c00               ret 0xc
// 0081db7d  8d46ff               lea eax, [esi - 1]
// 0081db80  33d2                 xor edx, edx
// 0081db82  85c0                 test eax, eax
// 0081db84  0f9ec2               setle dl
// 0081db87  8bcf                 mov ecx, edi
// 0081db89  4a                   dec edx
// 0081db8a  23d0                 and edx, eax
// 0081db8c  8bf2                 mov esi, edx
// 0081db8e  56                   push esi
// 0081db8f  e80cfaffff           call 0x81d5a0
// 0081db94  5e                   pop esi
// 0081db95  5f                   pop edi
// 0081db96  83c41c               add esp, 0x1c
// 0081db99  c20c00               ret 0xc
// 0081db9c  6a01                 push 1
// 0081db9e  46                   inc esi
// 0081db9f  e8e48a1000           call 0x926688
// 0081dba4  3bf0                 cmp esi, eax
// 0081dba6  0f8cc9000000         jl 0x81dc75
// 0081dbac  6a01                 push 1
// 0081dbae  8bcf                 mov ecx, edi
// 0081dbb0  e8d38a1000           call 0x926688
// 0081dbb5  8bf0                 mov esi, eax
// 0081dbb7  56                   push esi
// 0081dbb8  8bcf                 mov ecx, edi
// 0081dbba  e8e1f9ffff           call 0x81d5a0
// 0081dbbf  5e                   pop esi
// 0081dbc0  5f                   pop edi
// 0081dbc1  83c41c               add esp, 0x1c
// 0081dbc4  c20c00               ret 0xc
// 0081dbc7  6a00                 push 0
// 0081dbc9  56                   push esi
// 0081dbca  e8b1fbffff           call 0x81d780
// 0081dbcf  8bce                 mov ecx, esi
// 0081dbd1  2bc8                 sub ecx, eax
// 0081dbd3  85c9                 test ecx, ecx
// 0081dbd5  0f8e77ffffff         jle 0x81db52
// 0081dbdb  6a00                 push 0
// 0081dbdd  56                   push esi
// 0081dbde  8bcf                 mov ecx, edi
// 0081dbe0  e89bfbffff           call 0x81d780
// 0081dbe5  2bf0                 sub esi, eax
// 0081dbe7  56                   push esi
// 0081dbe8  8bcf                 mov ecx, edi
// 0081dbea  e8b1f9ffff           call 0x81d5a0
// 0081dbef  5e                   pop esi
// 0081dbf0  5f                   pop edi
// 0081dbf1  83c41c               add esp, 0x1c
// 0081dbf4  c20c00               ret 0xc
// 0081dbf7  53                   push ebx
// 0081dbf8  6a01                 push 1
// 0081dbfa  56                   push esi
// 0081dbfb  e880fbffff           call 0x81d780
// 0081dc00  6a01                 push 1
// 0081dc02  8bcf                 mov ecx, edi
// 0081dc04  8d1c30               lea ebx, [eax + esi]
// 0081dc07  e87c8a1000           call 0x926688
// 0081dc0c  3bd8                 cmp ebx, eax
// 0081dc0e  5b                   pop ebx
// 0081dc0f  6a01                 push 1
// 0081dc11  8bcf                 mov ecx, edi
// 0081dc13  0f8d4dffffff         jge 0x81db66
// 0081dc19  56                   push esi
// 0081dc1a  e861fbffff           call 0x81d780
// 0081dc1f  03f0                 add esi, eax
// 0081dc21  56                   push esi
// 0081dc22  8bcf                 mov ecx, edi
// 0081dc24  e877f9ffff           call 0x81d5a0
// 0081dc29  5e                   pop esi
// 0081dc2a  5f                   pop edi
// 0081dc2b  83c41c               add esp, 0x1c
// 0081dc2e  c20c00               ret 0xc
// 0081dc31  33c0                 xor eax, eax
// 0081dc33  6a17                 push 0x17
// 0081dc35  8d54240c             lea edx, [esp + 0xc]
// 0081dc39  52                   push edx
// 0081dc3a  89442410             mov dword ptr [esp + 0x10], eax
// 0081dc3e  89442414             mov dword ptr [esp + 0x14], eax
// 0081dc42  6a01                 push 1
// 0081dc44  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081dc48  89442420             mov dword ptr [esp + 0x20], eax
// 0081dc4c  89442424             mov dword ptr [esp + 0x24], eax
// 0081dc50  89442428             mov dword ptr [esp + 0x28], eax
// 0081dc54  8944242c             mov dword ptr [esp + 0x2c], eax
// 0081dc58  c74424141c000000     mov dword ptr [esp + 0x14], 0x1c
// 0081dc60  c744241810000000     mov dword ptr [esp + 0x18], 0x10
// 0081dc68  e8158a1000           call 0x926682
// 0081dc6d  85c0                 test eax, eax
// 0081dc6f  740c                 je 0x81dc7d
// 0081dc71  8b742420             mov esi, dword ptr [esp + 0x20]
// 0081dc75  56                   push esi
// 0081dc76  8bcf                 mov ecx, edi
// 0081dc78  e823f9ffff           call 0x81d5a0
// 0081dc7d  5e                   pop esi
// 0081dc7e  5f                   pop edi
// 0081dc7f  83c41c               add esp, 0x1c
// 0081dc82  c20c00               ret 0xc
// 0081dc85  8d4900               lea ecx, [ecx]
// 0081dc88  7ddb                 jge 0x81dc65
// 0081dc8a  81009cdb8100         add dword ptr [eax], 0x81db9c
// copied from an identical function in another client (function ?OnVScroll@CXTPReportControl@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp