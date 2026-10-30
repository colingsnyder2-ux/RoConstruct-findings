// roc 2009-12 008ce9b0  unit: CXTPTabManagerNavigateButton  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce9b0
//
// 008ce9b0  83ec10               sub esp, 0x10
// 008ce9b3  56                   push esi
// 008ce9b4  57                   push edi
// 008ce9b5  8bf9                 mov edi, ecx
// 008ce9b7  8d7710               lea esi, [edi + 0x10]
// 008ce9ba  56                   push esi
// 008ce9bb  ff1568cc9800         call dword ptr [0x98cc68]
// 008ce9c1  85c0                 test eax, eax
// 008ce9c3  7539                 jne 0x8ce9fe
// 008ce9c5  8b06                 mov eax, dword ptr [esi]
// 008ce9c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 008ce9ca  8b5608               mov edx, dword ptr [esi + 8]
// 008ce9cd  89442408             mov dword ptr [esp + 8], eax
// 008ce9d1  8b460c               mov eax, dword ptr [esi + 0xc]
// 008ce9d4  894c240c             mov dword ptr [esp + 0xc], ecx
// 008ce9d8  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008ce9db  89442414             mov dword ptr [esp + 0x14], eax
// 008ce9df  89542410             mov dword ptr [esp + 0x10], edx
// 008ce9e3  8b11                 mov edx, dword ptr [ecx]
// 008ce9e5  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008ce9e8  ffd0                 call eax
// 008ce9ea  8b10                 mov edx, dword ptr [eax]
// 008ce9ec  8b5264               mov edx, dword ptr [edx + 0x64]
// 008ce9ef  8d4c2408             lea ecx, [esp + 8]
// 008ce9f3  51                   push ecx
// 008ce9f4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ce9f8  57                   push edi
// 008ce9f9  51                   push ecx
// 008ce9fa  8bc8                 mov ecx, eax
// 008ce9fc  ffd2                 call edx
// 008ce9fe  5f                   pop edi
// 008ce9ff  5e                   pop esi
// 008cea00  83c410               add esp, 0x10
// 008cea03  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPTabManagerNavigateButton@@QAEXPAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabManager.cpp