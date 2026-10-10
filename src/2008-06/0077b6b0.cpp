// roc 2008-06 0077b6b0  unit: CXTPTabManagerNavigateButton  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b6b0
//
// 0077b6b0  83ec10               sub esp, 0x10
// 0077b6b3  56                   push esi
// 0077b6b4  57                   push edi
// 0077b6b5  8bf9                 mov edi, ecx
// 0077b6b7  8d7710               lea esi, [edi + 0x10]
// 0077b6ba  56                   push esi
// 0077b6bb  ff156c2d8000         call dword ptr [0x802d6c]
// 0077b6c1  85c0                 test eax, eax
// 0077b6c3  7539                 jne 0x77b6fe
// 0077b6c5  8b06                 mov eax, dword ptr [esi]
// 0077b6c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077b6ca  8b5608               mov edx, dword ptr [esi + 8]
// 0077b6cd  89442408             mov dword ptr [esp + 8], eax
// 0077b6d1  8b460c               mov eax, dword ptr [esi + 0xc]
// 0077b6d4  894c240c             mov dword ptr [esp + 0xc], ecx
// 0077b6d8  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0077b6db  89442414             mov dword ptr [esp + 0x14], eax
// 0077b6df  89542410             mov dword ptr [esp + 0x10], edx
// 0077b6e3  8b11                 mov edx, dword ptr [ecx]
// 0077b6e5  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0077b6e8  ffd0                 call eax
// 0077b6ea  8b10                 mov edx, dword ptr [eax]
// 0077b6ec  8b5264               mov edx, dword ptr [edx + 0x64]
// 0077b6ef  8d4c2408             lea ecx, [esp + 8]
// 0077b6f3  51                   push ecx
// 0077b6f4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077b6f8  57                   push edi
// 0077b6f9  51                   push ecx
// 0077b6fa  8bc8                 mov ecx, eax
// 0077b6fc  ffd2                 call edx
// 0077b6fe  5f                   pop edi
// 0077b6ff  5e                   pop esi
// 0077b700  83c410               add esp, 0x10
// 0077b703  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabManager.cpp (function ?Draw@CXTPTabManagerNavigateButton@@QAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabManager.cpp
