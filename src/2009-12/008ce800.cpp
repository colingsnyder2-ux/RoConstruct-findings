// roc 2009-12 008ce800  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce800
//
// 008ce800  8b442404             mov eax, dword ptr [esp + 4]
// 008ce804  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008ce808  53                   push ebx
// 008ce809  55                   push ebp
// 008ce80a  56                   push esi
// 008ce80b  57                   push edi
// 008ce80c  8bf9                 mov edi, ecx
// 008ce80e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ce812  8b7774               mov esi, dword ptr [edi + 0x74]
// 008ce815  83ee01               sub esi, 1
// 008ce818  894744               mov dword ptr [edi + 0x44], eax
// 008ce81b  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ce81f  894f48               mov dword ptr [edi + 0x48], ecx
// 008ce822  89574c               mov dword ptr [edi + 0x4c], edx
// 008ce825  894750               mov dword ptr [edi + 0x50], eax
// 008ce828  7837                 js 0x8ce861
// 008ce82a  8d9b00000000         lea ebx, [ebx]
// 008ce830  85f6                 test esi, esi
// 008ce832  7c34                 jl 0x8ce868
// 008ce834  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008ce837  7d2f                 jge 0x8ce868
// 008ce839  83ec10               sub esp, 0x10
// 008ce83c  8bc4                 mov eax, esp
// 008ce83e  33c9                 xor ecx, ecx
// 008ce840  8908                 mov dword ptr [eax], ecx
// 008ce842  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 008ce845  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 008ce848  33d2                 xor edx, edx
// 008ce84a  895004               mov dword ptr [eax + 4], edx
// 008ce84d  33db                 xor ebx, ebx
// 008ce84f  33ed                 xor ebp, ebp
// 008ce851  895808               mov dword ptr [eax + 8], ebx
// 008ce854  89680c               mov dword ptr [eax + 0xc], ebp
// 008ce857  e8d4f8ffff           call 0x8ce130
// 008ce85c  83ee01               sub esi, 1
// 008ce85f  79cf                 jns 0x8ce830
// 008ce861  5f                   pop edi
// 008ce862  5e                   pop esi
// 008ce863  5d                   pop ebp
// 008ce864  5b                   pop ebx
// 008ce865  c21000               ret 0x10
// 008ce868  e89f52f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?SetRect@CXTPTabManagerItem@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp