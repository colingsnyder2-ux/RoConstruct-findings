// roc 2007-08 006fd9b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd9b0
//
// 006fd9b0  8b442404             mov eax, dword ptr [esp + 4]
// 006fd9b4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fd9b8  53                   push ebx
// 006fd9b9  55                   push ebp
// 006fd9ba  56                   push esi
// 006fd9bb  57                   push edi
// 006fd9bc  8bf9                 mov edi, ecx
// 006fd9be  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006fd9c2  8b7774               mov esi, dword ptr [edi + 0x74]
// 006fd9c5  83ee01               sub esi, 1
// 006fd9c8  894744               mov dword ptr [edi + 0x44], eax
// 006fd9cb  8b442420             mov eax, dword ptr [esp + 0x20]
// 006fd9cf  894f48               mov dword ptr [edi + 0x48], ecx
// 006fd9d2  89574c               mov dword ptr [edi + 0x4c], edx
// 006fd9d5  894750               mov dword ptr [edi + 0x50], eax
// 006fd9d8  7837                 js 0x6fda11
// 006fd9da  8d9b00000000         lea ebx, [ebx]
// 006fd9e0  85f6                 test esi, esi
// 006fd9e2  7c34                 jl 0x6fda18
// 006fd9e4  3b7774               cmp esi, dword ptr [edi + 0x74]
// 006fd9e7  7d2f                 jge 0x6fda18
// 006fd9e9  83ec10               sub esp, 0x10
// 006fd9ec  8bc4                 mov eax, esp
// 006fd9ee  33c9                 xor ecx, ecx
// 006fd9f0  8908                 mov dword ptr [eax], ecx
// 006fd9f2  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 006fd9f5  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 006fd9f8  33d2                 xor edx, edx
// 006fd9fa  895004               mov dword ptr [eax + 4], edx
// 006fd9fd  33db                 xor ebx, ebx
// 006fd9ff  33ed                 xor ebp, ebp
// 006fda01  895808               mov dword ptr [eax + 8], ebx
// 006fda04  89680c               mov dword ptr [eax + 0xc], ebp
// 006fda07  e884f8ffff           call 0x6fd290
// 006fda0c  83ee01               sub esi, 1
// 006fda0f  79cf                 jns 0x6fd9e0
// 006fda11  5f                   pop edi
// 006fda12  5e                   pop esi
// 006fda13  5d                   pop ebp
// 006fda14  5b                   pop ebx
// 006fda15  c21000               ret 0x10
// 006fda18  e80325f3ff           call 0x62ff20
// copied from an identical function in another client (function ?SetRect@CXTPTabManagerItem@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp