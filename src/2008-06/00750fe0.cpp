// roc 2008-06 00750fe0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750fe0
//
// 00750fe0  56                   push esi
// 00750fe1  8bf1                 mov esi, ecx
// 00750fe3  8b4624               mov eax, dword ptr [esi + 0x24]
// 00750fe6  85c0                 test eax, eax
// 00750fe8  7504                 jne 0x750fee
// 00750fea  5e                   pop esi
// 00750feb  c20800               ret 8
// 00750fee  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00750ff2  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00750ff8  8b01                 mov eax, dword ptr [ecx]
// 00750ffa  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00750ffd  53                   push ebx
// 00750ffe  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00751002  57                   push edi
// 00751003  52                   push edx
// 00751004  56                   push esi
// 00751005  53                   push ebx
// 00751006  ffd0                 call eax
// 00751008  8b16                 mov edx, dword ptr [esi]
// 0075100a  8bf8                 mov edi, eax
// 0075100c  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 00751012  8bce                 mov ecx, esi
// 00751014  ffd0                 call eax
// 00751016  85c0                 test eax, eax
// 00751018  7512                 jne 0x75102c
// 0075101a  8b16                 mov edx, dword ptr [esi]
// 0075101c  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00751022  8bce                 mov ecx, esi
// 00751024  ffd0                 call eax
// 00751026  85c0                 test eax, eax
// 00751028  7502                 jne 0x75102c
// 0075102a  33ff                 xor edi, edi
// 0075102c  837b0c00             cmp dword ptr [ebx + 0xc], 0
// 00751030  7550                 jne 0x751082
// 00751032  8b16                 mov edx, dword ptr [esi]
// 00751034  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0075103a  8bce                 mov ecx, esi
// 0075103c  c7466800000000       mov dword ptr [esi + 0x68], 0
// 00751043  ffd0                 call eax
// 00751045  85c0                 test eax, eax
// 00751047  7439                 je 0x751082
// 00751049  8b16                 mov edx, dword ptr [esi]
// 0075104b  8b4260               mov eax, dword ptr [edx + 0x60]
// 0075104e  8bce                 mov ecx, esi
// 00751050  ffd0                 call eax
// 00751052  8bc8                 mov ecx, eax
// 00751054  e817f70400           call 0x7a0770
// 00751059  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0075105c  8b9188020000         mov edx, dword ptr [ecx + 0x288]
// 00751062  8b8a9c000000         mov ecx, dword ptr [edx + 0x9c]
// 00751068  8b10                 mov edx, dword ptr [eax]
// 0075106a  51                   push ecx
// 0075106b  56                   push esi
// 0075106c  8bc8                 mov ecx, eax
// 0075106e  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00751074  53                   push ebx
// 00751075  ffd0                 call eax
// 00751077  894668               mov dword ptr [esi + 0x68], eax
// 0075107a  03c7                 add eax, edi
// 0075107c  5f                   pop edi
// 0075107d  5b                   pop ebx
// 0075107e  5e                   pop esi
// 0075107f  c20800               ret 8
// 00751082  8bc7                 mov eax, edi
// 00751084  5f                   pop edi
// 00751085  5b                   pop ebx
// 00751086  5e                   pop esi
// 00751087  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?GetHeight@CXTPReportRow@@UAEHPAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
