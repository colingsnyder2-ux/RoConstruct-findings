// roc 2009-12 008b6bd0  unit: CXTPDockingPanePaintManager  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6bd0
//
// 008b6bd0  83ec10               sub esp, 0x10
// 008b6bd3  53                   push ebx
// 008b6bd4  55                   push ebp
// 008b6bd5  56                   push esi
// 008b6bd6  57                   push edi
// 008b6bd7  6a0f                 push 0xf
// 008b6bd9  8bf1                 mov esi, ecx
// 008b6bdb  e820edffff           call 0x8b5900
// 008b6be0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008b6be4  50                   push eax
// 008b6be5  8d442430             lea eax, [esp + 0x30]
// 008b6be9  50                   push eax
// 008b6bea  8bcb                 mov ecx, ebx
// 008b6bec  e80ddaf3ff           call 0x7f45fe
// 008b6bf1  6a01                 push 1
// 008b6bf3  8bcb                 mov ecx, ebx
// 008b6bf5  e896f80600           call 0x926490
// 008b6bfa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008b6bfe  8b542430             mov edx, dword ptr [esp + 0x30]
// 008b6c02  8b442434             mov eax, dword ptr [esp + 0x34]
// 008b6c06  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008b6c0a  894c2410             mov dword ptr [esp + 0x10], ecx
// 008b6c0e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008b6c12  89542414             mov dword ptr [esp + 0x14], edx
// 008b6c16  8b17                 mov edx, dword ptr [edi]
// 008b6c18  89442418             mov dword ptr [esp + 0x18], eax
// 008b6c1c  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008b6c22  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008b6c26  8bcf                 mov ecx, edi
// 008b6c28  ffd0                 call eax
// 008b6c2a  85c0                 test eax, eax
// 008b6c2c  7444                 je 0x8b6c72
// 008b6c2e  8b16                 mov edx, dword ptr [esi]
// 008b6c30  8b5270               mov edx, dword ptr [edx + 0x70]
// 008b6c33  8d44242c             lea eax, [esp + 0x2c]
// 008b6c37  50                   push eax
// 008b6c38  57                   push edi
// 008b6c39  8bce                 mov ecx, esi
// 008b6c3b  ffd2                 call edx
// 008b6c3d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008b6c41  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008b6c47  8b11                 mov edx, dword ptr [ecx]
// 008b6c49  83ec10               sub esp, 0x10
// 008b6c4c  8bc4                 mov eax, esp
// 008b6c4e  8928                 mov dword ptr [eax], ebp
// 008b6c50  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008b6c54  896804               mov dword ptr [eax + 4], ebp
// 008b6c57  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008b6c5b  896808               mov dword ptr [eax + 8], ebp
// 008b6c5e  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008b6c62  89680c               mov dword ptr [eax + 0xc], ebp
// 008b6c65  53                   push ebx
// 008b6c66  8d87a8000000         lea eax, [edi + 0xa8]
// 008b6c6c  50                   push eax
// 008b6c6d  8b4258               mov eax, dword ptr [edx + 0x58]
// 008b6c70  ffd0                 call eax
// 008b6c72  8bcf                 mov ecx, edi
// 008b6c74  e887a1ffff           call 0x8b0e00
// 008b6c79  85c0                 test eax, eax
// 008b6c7b  742b                 je 0x8b6ca8
// 008b6c7d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008b6c81  8b16                 mov edx, dword ptr [esi]
// 008b6c83  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008b6c86  83ec10               sub esp, 0x10
// 008b6c89  8bc4                 mov eax, esp
// 008b6c8b  8908                 mov dword ptr [eax], ecx
// 008b6c8d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b6c91  894804               mov dword ptr [eax + 4], ecx
// 008b6c94  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b6c98  894808               mov dword ptr [eax + 8], ecx
// 008b6c9b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008b6c9f  57                   push edi
// 008b6ca0  89480c               mov dword ptr [eax + 0xc], ecx
// 008b6ca3  53                   push ebx
// 008b6ca4  8bce                 mov ecx, esi
// 008b6ca6  ffd2                 call edx
// 008b6ca8  5f                   pop edi
// 008b6ca9  5e                   pop esi
// 008b6caa  5d                   pop ebp
// 008b6cab  5b                   pop ebx
// 008b6cac  83c410               add esp, 0x10
// 008b6caf  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawPane@CXTPDockingPanePaintManager@@UAEXAAVCDC@@PAVCXTPDockingPaneTabbedContainer@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPanePaintManager.cpp