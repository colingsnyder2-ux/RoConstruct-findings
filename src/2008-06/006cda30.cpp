// roc 2008-06 006cda30  unit: CXTPReportControl  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cda30
//
// 006cda30  83ec10               sub esp, 0x10
// 006cda33  53                   push ebx
// 006cda34  56                   push esi
// 006cda35  8bf1                 mov esi, ecx
// 006cda37  e82c32fdff           call 0x6a0c68
// 006cda3c  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 006cda42  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006cda46  85c9                 test ecx, ecx
// 006cda48  7412                 je 0x6cda5c
// 006cda4a  8b542424             mov edx, dword ptr [esp + 0x24]
// 006cda4e  8b01                 mov eax, dword ptr [ecx]
// 006cda50  8b4074               mov eax, dword ptr [eax + 0x74]
// 006cda53  52                   push edx
// 006cda54  8b542424             mov edx, dword ptr [esp + 0x24]
// 006cda58  52                   push edx
// 006cda59  53                   push ebx
// 006cda5a  ffd0                 call eax
// 006cda5c  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 006cda63  0f85f1000000         jne 0x6cdb5a
// 006cda69  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006cda6d  8b542420             mov edx, dword ptr [esp + 0x20]
// 006cda71  57                   push edi
// 006cda72  51                   push ecx
// 006cda73  52                   push edx
// 006cda74  8bce                 mov ecx, esi
// 006cda76  e8b5c6ffff           call 0x6ca130
// 006cda7b  8bf8                 mov edi, eax
// 006cda7d  85ff                 test edi, edi
// 006cda7f  7441                 je 0x6cdac2
// 006cda81  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006cda85  8b542424             mov edx, dword ptr [esp + 0x24]
// 006cda89  8b07                 mov eax, dword ptr [edi]
// 006cda8b  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 006cda91  51                   push ecx
// 006cda92  52                   push edx
// 006cda93  53                   push ebx
// 006cda94  8bcf                 mov ecx, edi
// 006cda96  ffd0                 call eax
// 006cda98  83bec801000000       cmp dword ptr [esi + 0x1c8], 0
// 006cda9f  7421                 je 0x6cdac2
// 006cdaa1  85db                 test ebx, ebx
// 006cdaa3  751d                 jne 0x6cdac2
// 006cdaa5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006cdaa9  8b17                 mov edx, dword ptr [edi]
// 006cdaab  8b92a4000000         mov edx, dword ptr [edx + 0xa4]
// 006cdab1  8d8634010000         lea eax, [esi + 0x134]
// 006cdab7  50                   push eax
// 006cdab8  8b442428             mov eax, dword ptr [esp + 0x28]
// 006cdabc  51                   push ecx
// 006cdabd  50                   push eax
// 006cdabe  8bcf                 mov ecx, edi
// 006cdac0  ffd2                 call edx
// 006cdac2  39be2c010000         cmp dword ptr [esi + 0x12c], edi
// 006cdac8  7430                 je 0x6cdafa
// 006cdaca  8b4620               mov eax, dword ptr [esi + 0x20]
// 006cdacd  8d4c240c             lea ecx, [esp + 0xc]
// 006cdad1  51                   push ecx
// 006cdad2  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 006cdada  c744241402000000     mov dword ptr [esp + 0x14], 2
// 006cdae2  89442418             mov dword ptr [esp + 0x18], eax
// 006cdae6  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006cdaee  ff155c208000         call dword ptr [0x80205c]
// 006cdaf4  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 006cdafa  83be4002000000       cmp dword ptr [esi + 0x240], 0
// 006cdb01  5f                   pop edi
// 006cdb02  7456                 je 0x6cdb5a
// 006cdb04  8b442420             mov eax, dword ptr [esp + 0x20]
// 006cdb08  2b8638020000         sub eax, dword ptr [esi + 0x238]
// 006cdb0e  99                   cdq 
// 006cdb0f  33c2                 xor eax, edx
// 006cdb11  2bc2                 sub eax, edx
// 006cdb13  83f803               cmp eax, 3
// 006cdb16  7f14                 jg 0x6cdb2c
// 006cdb18  8b442424             mov eax, dword ptr [esp + 0x24]
// 006cdb1c  2b863c020000         sub eax, dword ptr [esi + 0x23c]
// 006cdb22  99                   cdq 
// 006cdb23  33c2                 xor eax, edx
// 006cdb25  2bc2                 sub eax, edx
// 006cdb27  83f803               cmp eax, 3
// 006cdb2a  7e2e                 jle 0x6cdb5a
// 006cdb2c  8b863c020000         mov eax, dword ptr [esi + 0x23c]
// 006cdb32  8b8e38020000         mov ecx, dword ptr [esi + 0x238]
// 006cdb38  8b16                 mov edx, dword ptr [esi]
// 006cdb3a  8b92f4010000         mov edx, dword ptr [edx + 0x1f4]
// 006cdb40  50                   push eax
// 006cdb41  51                   push ecx
// 006cdb42  8bce                 mov ecx, esi
// 006cdb44  c7864002000000000000 mov dword ptr [esi + 0x240], 0
// 006cdb4e  c786a402000000000000 mov dword ptr [esi + 0x2a4], 0
// 006cdb58  ffd2                 call edx
// 006cdb5a  5e                   pop esi
// 006cdb5b  5b                   pop ebx
// 006cdb5c  83c410               add esp, 0x10
// 006cdb5f  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?OnMouseMove@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
