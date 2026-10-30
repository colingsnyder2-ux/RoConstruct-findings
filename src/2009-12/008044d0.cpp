// roc 2009-12 008044d0  unit: CXTPCommandBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008044d0
//
// 008044d0  83b90401000000       cmp dword ptr [ecx + 0x104], 0
// 008044d7  7511                 jne 0x8044ea
// 008044d9  8b01                 mov eax, dword ptr [ecx]
// 008044db  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008044e1  ffd2                 call edx
// 008044e3  8bc8                 mov ecx, eax
// 008044e5  85c9                 test ecx, ecx
// 008044e7  75e7                 jne 0x8044d0
// 008044e9  c3                   ret 
// 008044ea  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 008044f0  c3                   ret 
// copied from an identical function in another client (function ?GetCommandBars@CXTPCommandBar@@QBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp