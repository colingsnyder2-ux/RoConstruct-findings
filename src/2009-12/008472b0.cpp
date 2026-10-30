// roc 2009-12 008472b0  unit: CXTPControls  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008472b0
//
// 008472b0  53                   push ebx
// 008472b1  56                   push esi
// 008472b2  57                   push edi
// 008472b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008472b7  8b07                 mov eax, dword ptr [edi]
// 008472b9  8b10                 mov edx, dword ptr [eax]
// 008472bb  8bd9                 mov ebx, ecx
// 008472bd  8bcf                 mov ecx, edi
// 008472bf  ffd2                 call edx
// 008472c1  8bc8                 mov ecx, eax
// 008472c3  e89acffaff           call 0x7f4262
// 008472c8  8bf0                 mov esi, eax
// 008472ca  85f6                 test esi, esi
// 008472cc  7506                 jne 0x8472d4
// 008472ce  5f                   pop edi
// 008472cf  5e                   pop esi
// 008472d0  5b                   pop ebx
// 008472d1  c20c00               ret 0xc
// 008472d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 008472d8  50                   push eax
// 008472d9  56                   push esi
// 008472da  8bcb                 mov ecx, ebx
// 008472dc  e87fffffff           call 0x847260
// 008472e1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008472e5  8b16                 mov edx, dword ptr [esi]
// 008472e7  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 008472ed  50                   push eax
// 008472ee  57                   push edi
// 008472ef  8bce                 mov ecx, esi
// 008472f1  ffd2                 call edx
// 008472f3  5f                   pop edi
// 008472f4  8bc6                 mov eax, esi
// 008472f6  5e                   pop esi
// 008472f7  5b                   pop ebx
// 008472f8  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddClone@CXTPControls@@QAEPAVCXTPControl@@PAV2@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp