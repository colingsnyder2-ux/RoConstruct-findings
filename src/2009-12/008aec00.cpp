// roc 2009-12 008aec00  unit: CXTPDockingPaneMiniWnd  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aec00
//
// 008aec00  8b442408             mov eax, dword ptr [esp + 8]
// 008aec04  83ec20               sub esp, 0x20
// 008aec07  53                   push ebx
// 008aec08  57                   push edi
// 008aec09  8bf9                 mov edi, ecx
// 008aec0b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008aec0f  50                   push eax
// 008aec10  51                   push ecx
// 008aec11  8bcf                 mov ecx, edi
// 008aec13  e8e8800700           call 0x926d00
// 008aec18  8bcf                 mov ecx, edi
// 008aec1a  8bd8                 mov ebx, eax
// 008aec1c  e8dffaffff           call 0x8ae700
// 008aec21  85c0                 test eax, eax
// 008aec23  750a                 jne 0x8aec2f
// 008aec25  5f                   pop edi
// 008aec26  8bc3                 mov eax, ebx
// 008aec28  5b                   pop ebx
// 008aec29  83c420               add esp, 0x20
// 008aec2c  c20800               ret 8
// 008aec2f  56                   push esi
// 008aec30  57                   push edi
// 008aec31  8d4c2420             lea ecx, [esp + 0x20]
// 008aec35  e836c6f9ff           call 0x84b270
// 008aec3a  8b442420             mov eax, dword ptr [esp + 0x20]
// 008aec3e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008aec42  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008aec46  6afd                 push -3
// 008aec48  89442414             mov dword ptr [esp + 0x14], eax
// 008aec4c  89542410             mov dword ptr [esp + 0x10], edx
// 008aec50  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008aec54  6afd                 push -3
// 008aec56  8d442414             lea eax, [esp + 0x14]
// 008aec5a  50                   push eax
// 008aec5b  894c2420             mov dword ptr [esp + 0x20], ecx
// 008aec5f  89542424             mov dword ptr [esp + 0x24], edx
// 008aec63  ff1558ca9800         call dword ptr [0x98ca58]
// 008aec69  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008aec6d  8b542430             mov edx, dword ptr [esp + 0x30]
// 008aec71  8b355cca9800         mov esi, dword ptr [0x98ca5c]
// 008aec77  51                   push ecx
// 008aec78  52                   push edx
// 008aec79  8d442424             lea eax, [esp + 0x24]
// 008aec7d  50                   push eax
// 008aec7e  ffd6                 call esi
// 008aec80  85c0                 test eax, eax
// 008aec82  745d                 je 0x8aece1
// 008aec84  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008aec88  8b542430             mov edx, dword ptr [esp + 0x30]
// 008aec8c  51                   push ecx
// 008aec8d  52                   push edx
// 008aec8e  8d442414             lea eax, [esp + 0x14]
// 008aec92  50                   push eax
// 008aec93  ffd6                 call esi
// 008aec95  85c0                 test eax, eax
// 008aec97  7548                 jne 0x8aece1
// 008aec99  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008aec9d  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 008aeca1  7d07                 jge 0x8aecaa
// 008aeca3  b803000000           mov eax, 3
// 008aeca8  eb0b                 jmp 0x8aecb5
// 008aecaa  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 008aecae  7c05                 jl 0x8aecb5
// 008aecb0  b806000000           mov eax, 6
// 008aecb5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008aecb9  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 008aecbd  7d0d                 jge 0x8aeccc
// 008aecbf  5e                   pop esi
// 008aecc0  40                   inc eax
// 008aecc1  5f                   pop edi
// 008aecc2  83c009               add eax, 9
// 008aecc5  5b                   pop ebx
// 008aecc6  83c420               add esp, 0x20
// 008aecc9  c20800               ret 8
// 008aeccc  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 008aecd0  7c03                 jl 0x8aecd5
// 008aecd2  83c002               add eax, 2
// 008aecd5  5e                   pop esi
// 008aecd6  5f                   pop edi
// 008aecd7  83c009               add eax, 9
// 008aecda  5b                   pop ebx
// 008aecdb  83c420               add esp, 0x20
// 008aecde  c20800               ret 8
// 008aece1  85db                 test ebx, ebx
// 008aece3  7520                 jne 0x8aed05
// 008aece5  8b742434             mov esi, dword ptr [esp + 0x34]
// 008aece9  2b742420             sub esi, dword ptr [esp + 0x20]
// 008aeced  8d8ff8000000         lea ecx, [edi + 0xf8]
// 008aecf3  e8581b0000           call 0x8b0850
// 008aecf8  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008aecfb  83c104               add ecx, 4
// 008aecfe  3bf1                 cmp esi, ecx
// 008aed00  8d4302               lea eax, [ebx + 2]
// 008aed03  7c02                 jl 0x8aed07
// 008aed05  8bc3                 mov eax, ebx
// 008aed07  5e                   pop esi
// 008aed08  5f                   pop edi
// 008aed09  5b                   pop ebx
// 008aed0a  83c420               add esp, 0x20
// 008aed0d  c20800               ret 8
// copied from an identical function in another client (function ?OnNcHitTest@CXTPDockingPaneMiniWnd@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp