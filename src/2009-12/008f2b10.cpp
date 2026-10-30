// roc 2009-12 008f2b10  unit: CXTPRibbonSystemPopupBarPage  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2b10
//
// 008f2b10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f2b14  83ec30               sub esp, 0x30
// 008f2b17  53                   push ebx
// 008f2b18  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008f2b1c  56                   push esi
// 008f2b1d  8bf1                 mov esi, ecx
// 008f2b1f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008f2b23  50                   push eax
// 008f2b24  51                   push ecx
// 008f2b25  53                   push ebx
// 008f2b26  8bce                 mov ecx, esi
// 008f2b28  e893fbf4ff           call 0x8426c0
// 008f2b2d  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 008f2b33  8b8a00010000         mov ecx, dword ptr [edx + 0x100]
// 008f2b39  e8a2eeffff           call 0x8f19e0
// 008f2b3e  50                   push eax
// 008f2b3f  e8a412f0ff           call 0x7f3de8
// 008f2b44  85c0                 test eax, eax
// 008f2b46  7451                 je 0x8f2b99
// 008f2b48  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008f2b4e  57                   push edi
// 008f2b4f  8bb800010000         mov edi, dword ptr [eax + 0x100]
// 008f2b55  57                   push edi
// 008f2b56  8d4c2410             lea ecx, [esp + 0x10]
// 008f2b5a  e87187f5ff           call 0x84b2d0
// 008f2b5f  8b700c               mov esi, dword ptr [eax + 0xc]
// 008f2b62  2b7004               sub esi, dword ptr [eax + 4]
// 008f2b65  8b17                 mov edx, dword ptr [edi]
// 008f2b67  8b92b8010000         mov edx, dword ptr [edx + 0x1b8]
// 008f2b6d  8d44241c             lea eax, [esp + 0x1c]
// 008f2b71  50                   push eax
// 008f2b72  8bcf                 mov ecx, edi
// 008f2b74  ffd2                 call edx
// 008f2b76  2b700c               sub esi, dword ptr [eax + 0xc]
// 008f2b79  8b07                 mov eax, dword ptr [edi]
// 008f2b7b  8b90b8010000         mov edx, dword ptr [eax + 0x1b8]
// 008f2b81  8d4c242c             lea ecx, [esp + 0x2c]
// 008f2b85  51                   push ecx
// 008f2b86  8bcf                 mov ecx, edi
// 008f2b88  ffd2                 call edx
// 008f2b8a  2b7004               sub esi, dword ptr [eax + 4]
// 008f2b8d  5f                   pop edi
// 008f2b8e  83ee02               sub esi, 2
// 008f2b91  3b7304               cmp esi, dword ptr [ebx + 4]
// 008f2b94  7e03                 jle 0x8f2b99
// 008f2b96  897304               mov dword ptr [ebx + 4], esi
// 008f2b99  5e                   pop esi
// 008f2b9a  8bc3                 mov eax, ebx
// 008f2b9c  5b                   pop ebx
// 008f2b9d  83c430               add esp, 0x30
// 008f2ba0  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPRibbonSystemPopupBarPage@@MAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp