// roc 2009-12 008a4c60  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4c60
//
// 008a4c60  6aff                 push -1
// 008a4c62  6808259600           push 0x962508
// 008a4c67  64a100000000         mov eax, dword ptr fs:[0]
// 008a4c6d  50                   push eax
// 008a4c6e  83ec2c               sub esp, 0x2c
// 008a4c71  53                   push ebx
// 008a4c72  56                   push esi
// 008a4c73  a10052b600           mov eax, dword ptr [0xb65200]
// 008a4c78  33c4                 xor eax, esp
// 008a4c7a  50                   push eax
// 008a4c7b  8d442438             lea eax, [esp + 0x38]
// 008a4c7f  64a300000000         mov dword ptr fs:[0], eax
// 008a4c85  8bf1                 mov esi, ecx
// 008a4c87  8d4c240c             lea ecx, [esp + 0xc]
// 008a4c8b  e8d059f7ff           call 0x81a660
// 008a4c90  c744240c4c4d9f00     mov dword ptr [esp + 0xc], 0x9f4d4c
// 008a4c98  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a4c9b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008a4c9f  8b16                 mov edx, dword ptr [esi]
// 008a4ca1  8d5c2418             lea ebx, [esp + 0x18]
// 008a4ca5  53                   push ebx
// 008a4ca6  8d5c2424             lea ebx, [esp + 0x24]
// 008a4caa  53                   push ebx
// 008a4cab  89442418             mov dword ptr [esp + 0x18], eax
// 008a4caf  8b442450             mov eax, dword ptr [esp + 0x50]
// 008a4cb3  51                   push ecx
// 008a4cb4  8944243c             mov dword ptr [esp + 0x3c], eax
// 008a4cb8  894c2440             mov dword ptr [esp + 0x40], ecx
// 008a4cbc  50                   push eax
// 008a4cbd  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 008a4cc3  8bce                 mov ecx, esi
// 008a4cc5  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008a4ccd  89742424             mov dword ptr [esp + 0x24], esi
// 008a4cd1  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008a4cd9  ffd0                 call eax
// 008a4cdb  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a4cdf  85c0                 test eax, eax
// 008a4ce1  7410                 je 0x8a4cf3
// 008a4ce3  8b10                 mov edx, dword ptr [eax]
// 008a4ce5  8b5264               mov edx, dword ptr [edx + 0x64]
// 008a4ce8  8d4c240c             lea ecx, [esp + 0xc]
// 008a4cec  51                   push ecx
// 008a4ced  8bc8                 mov ecx, eax
// 008a4cef  ffd2                 call edx
// 008a4cf1  eb19                 jmp 0x8a4d0c
// 008a4cf3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a4cf7  6aff                 push -1
// 008a4cf9  8d44244c             lea eax, [esp + 0x4c]
// 008a4cfd  50                   push eax
// 008a4cfe  6afd                 push -3
// 008a4d00  51                   push ecx
// 008a4d01  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a4d04  6a00                 push 0
// 008a4d06  56                   push esi
// 008a4d07  e8f4e5f7ff           call 0x823300
// 008a4d0c  8d4c240c             lea ecx, [esp + 0xc]
// 008a4d10  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 008a4d18  e88353f7ff           call 0x81a0a0
// 008a4d1d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008a4d21  64890d00000000       mov dword ptr fs:[0], ecx
// 008a4d28  59                   pop ecx
// 008a4d29  5e                   pop esi
// 008a4d2a  5b                   pop ebx
// 008a4d2b  83c438               add esp, 0x38
// 008a4d2e  c20800               ret 8
// copied from an identical function in another client (function ?OnDblClick@CXTPReportRow@@UAEXVCPoint@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportRow.cpp