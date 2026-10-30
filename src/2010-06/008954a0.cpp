// roc 2010-06 008954a0  unit: CXTPOffice2007Image  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008954a0
//
// 008954a0  6aff                 push -1
// 008954a2  68fbba9b00           push 0x9bbafb
// 008954a7  64a100000000         mov eax, dword ptr fs:[0]
// 008954ad  50                   push eax
// 008954ae  83ec08               sub esp, 8
// 008954b1  56                   push esi
// 008954b2  57                   push edi
// 008954b3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008954b8  33c4                 xor eax, esp
// 008954ba  50                   push eax
// 008954bb  8d442414             lea eax, [esp + 0x14]
// 008954bf  64a300000000         mov dword ptr fs:[0], eax
// 008954c5  8bf1                 mov esi, ecx
// 008954c7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008954cf  51                   push ecx
// 008954d0  8d442430             lea eax, [esp + 0x30]
// 008954d4  8bcc                 mov ecx, esp
// 008954d6  89642410             mov dword ptr [esp + 0x10], esp
// 008954da  50                   push eax
// 008954db  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008954e3  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 008954e9  51                   push ecx
// 008954ea  8d542430             lea edx, [esp + 0x30]
// 008954ee  8bcc                 mov ecx, esp
// 008954f0  89642418             mov dword ptr [esp + 0x18], esp
// 008954f4  52                   push edx
// 008954f5  c644242802           mov byte ptr [esp + 0x28], 2
// 008954fa  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 00895500  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00895504  57                   push edi
// 00895505  8bce                 mov ecx, esi
// 00895507  c644242801           mov byte ptr [esp + 0x28], 1
// 0089550c  e8dff8ffff           call 0x894df0
// 00895511  8d4c2428             lea ecx, [esp + 0x28]
// 00895515  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0089551b  8d4c242c             lea ecx, [esp + 0x2c]
// 0089551f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00895525  8bc7                 mov eax, edi
// 00895527  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089552b  64890d00000000       mov dword ptr fs:[0], ecx
// 00895532  59                   pop ecx
// 00895533  5f                   pop edi
// 00895534  5e                   pop esi
// 00895535  83c414               add esp, 0x14
// 00895538  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetImageString@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp