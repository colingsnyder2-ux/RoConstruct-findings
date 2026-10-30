// roc 2009-12 008a43f0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a43f0
//
// 008a43f0  56                   push esi
// 008a43f1  8bf1                 mov esi, ecx
// 008a43f3  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a43f6  85c0                 test eax, eax
// 008a43f8  7504                 jne 0x8a43fe
// 008a43fa  5e                   pop esi
// 008a43fb  c20800               ret 8
// 008a43fe  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a4402  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 008a4408  8b01                 mov eax, dword ptr [ecx]
// 008a440a  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008a440d  53                   push ebx
// 008a440e  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008a4412  57                   push edi
// 008a4413  52                   push edx
// 008a4414  56                   push esi
// 008a4415  53                   push ebx
// 008a4416  ffd0                 call eax
// 008a4418  8b16                 mov edx, dword ptr [esi]
// 008a441a  8bf8                 mov edi, eax
// 008a441c  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 008a4422  8bce                 mov ecx, esi
// 008a4424  ffd0                 call eax
// 008a4426  85c0                 test eax, eax
// 008a4428  7512                 jne 0x8a443c
// 008a442a  8b16                 mov edx, dword ptr [esi]
// 008a442c  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 008a4432  8bce                 mov ecx, esi
// 008a4434  ffd0                 call eax
// 008a4436  85c0                 test eax, eax
// 008a4438  7502                 jne 0x8a443c
// 008a443a  33ff                 xor edi, edi
// 008a443c  837b0c00             cmp dword ptr [ebx + 0xc], 0
// 008a4440  7550                 jne 0x8a4492
// 008a4442  8b16                 mov edx, dword ptr [esi]
// 008a4444  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 008a444a  8bce                 mov ecx, esi
// 008a444c  c7466800000000       mov dword ptr [esi + 0x68], 0
// 008a4453  ffd0                 call eax
// 008a4455  85c0                 test eax, eax
// 008a4457  7439                 je 0x8a4492
// 008a4459  8b16                 mov edx, dword ptr [esi]
// 008a445b  8b4260               mov eax, dword ptr [edx + 0x60]
// 008a445e  8bce                 mov ecx, esi
// 008a4460  ffd0                 call eax
// 008a4462  8bc8                 mov ecx, eax
// 008a4464  e82763fbff           call 0x85a790
// 008a4469  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a446c  8b9188020000         mov edx, dword ptr [ecx + 0x288]
// 008a4472  8b8a9c000000         mov ecx, dword ptr [edx + 0x9c]
// 008a4478  8b10                 mov edx, dword ptr [eax]
// 008a447a  51                   push ecx
// 008a447b  56                   push esi
// 008a447c  8bc8                 mov ecx, eax
// 008a447e  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 008a4484  53                   push ebx
// 008a4485  ffd0                 call eax
// 008a4487  894668               mov dword ptr [esi + 0x68], eax
// 008a448a  03c7                 add eax, edi
// 008a448c  5f                   pop edi
// 008a448d  5b                   pop ebx
// 008a448e  5e                   pop esi
// 008a448f  c20800               ret 8
// 008a4492  8bc7                 mov eax, edi
// 008a4494  5f                   pop edi
// 008a4495  5b                   pop ebx
// 008a4496  5e                   pop esi
// 008a4497  c20800               ret 8
// copied from an identical function in another client (function ?GetHeight@CXTPReportRow@@UAEHPAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp