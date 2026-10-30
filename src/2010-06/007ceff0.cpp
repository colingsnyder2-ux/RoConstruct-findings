// roc 2010-06 007ceff0  unit: CInstanceRecord::CNameItem  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ceff0
//
// 007ceff0  6aff                 push -1
// 007ceff2  6874089b00           push 0x9b0874
// 007ceff7  64a100000000         mov eax, dword ptr fs:[0]
// 007ceffd  50                   push eax
// 007ceffe  83ec08               sub esp, 8
// 007cf001  53                   push ebx
// 007cf002  56                   push esi
// 007cf003  57                   push edi
// 007cf004  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007cf009  33c4                 xor eax, esp
// 007cf00b  50                   push eax
// 007cf00c  8d442418             lea eax, [esp + 0x18]
// 007cf010  64a300000000         mov dword ptr fs:[0], eax
// 007cf016  8bf1                 mov esi, ecx
// 007cf018  8d7e5c               lea edi, [esi + 0x5c]
// 007cf01b  8bcf                 mov ecx, edi
// 007cf01d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007cf025  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007cf02b  84c0                 test al, al
// 007cf02d  7512                 jne 0x7cf041
// 007cf02f  8b742428             mov esi, dword ptr [esp + 0x28]
// 007cf033  57                   push edi
// 007cf034  8bce                 mov ecx, esi
// 007cf036  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007cf03c  e9ca000000           jmp 0x7cf10b
// 007cf041  8b06                 mov eax, dword ptr [esi]
// 007cf043  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007cf047  8b5078               mov edx, dword ptr [eax + 0x78]
// 007cf04a  57                   push edi
// 007cf04b  8bce                 mov ecx, esi
// 007cf04d  ffd2                 call edx
// 007cf04f  8bd8                 mov ebx, eax
// 007cf051  85db                 test ebx, ebx
// 007cf053  7e4a                 jle 0x7cf09f
// 007cf055  8d4c242c             lea ecx, [esp + 0x2c]
// 007cf059  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007cf05f  53                   push ebx
// 007cf060  8d4c2430             lea ecx, [esp + 0x30]
// 007cf064  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007cf06c  ff15b8bf9e00         call dword ptr [0x9ebfb8]
// 007cf072  85c0                 test eax, eax
// 007cf074  7417                 je 0x7cf08d
// 007cf076  8b742428             mov esi, dword ptr [esp + 0x28]
// 007cf07a  8d44242c             lea eax, [esp + 0x2c]
// 007cf07e  50                   push eax
// 007cf07f  8bce                 mov ecx, esi
// 007cf081  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007cf087  8d4c242c             lea ecx, [esp + 0x2c]
// 007cf08b  eb78                 jmp 0x7cf105
// 007cf08d  8d4c242c             lea ecx, [esp + 0x2c]
// 007cf091  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007cf099  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cf09f  8b16                 mov edx, dword ptr [esi]
// 007cf0a1  8b526c               mov edx, dword ptr [edx + 0x6c]
// 007cf0a4  57                   push edi
// 007cf0a5  8d442418             lea eax, [esp + 0x18]
// 007cf0a9  50                   push eax
// 007cf0aa  8bce                 mov ecx, esi
// 007cf0ac  ffd2                 call edx
// 007cf0ae  8bf0                 mov esi, eax
// 007cf0b0  8d442410             lea eax, [esp + 0x10]
// 007cf0b4  50                   push eax
// 007cf0b5  8bcf                 mov ecx, edi
// 007cf0b7  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007cf0bf  e86cf0ffff           call 0x7ce130
// 007cf0c4  680c3fa500           push 0xa53f0c
// 007cf0c9  50                   push eax
// 007cf0ca  8d4c2434             lea ecx, [esp + 0x34]
// 007cf0ce  51                   push ecx
// 007cf0cf  c644242c02           mov byte ptr [esp + 0x2c], 2
// 007cf0d4  e837e2c3ff           call 0x40d310
// 007cf0d9  56                   push esi
// 007cf0da  8b742438             mov esi, dword ptr [esp + 0x38]
// 007cf0de  50                   push eax
// 007cf0df  56                   push esi
// 007cf0e0  c644243803           mov byte ptr [esp + 0x38], 3
// 007cf0e5  e88621c9ff           call 0x461270
// 007cf0ea  83c418               add esp, 0x18
// 007cf0ed  8d4c242c             lea ecx, [esp + 0x2c]
// 007cf0f1  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cf0f7  8d4c2410             lea ecx, [esp + 0x10]
// 007cf0fb  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cf101  8d4c2414             lea ecx, [esp + 0x14]
// 007cf105  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cf10b  8bc6                 mov eax, esi
// 007cf10d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007cf111  64890d00000000       mov dword ptr fs:[0], ecx
// 007cf118  59                   pop ecx
// 007cf119  5f                   pop edi
// 007cf11a  5e                   pop esi
// 007cf11b  5b                   pop ebx
// 007cf11c  83c414               add esp, 0x14
// 007cf11f  c20800               ret 8
// copied from an identical function in another client (function ?GetGroupCaption@CXTPReportRecordItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp