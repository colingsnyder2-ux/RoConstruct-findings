// roc 2009-12 008070f0  unit: CXTPCommandBar  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008070f0
//
// 008070f0  56                   push esi
// 008070f1  8bf1                 mov esi, ecx
// 008070f3  8b06                 mov eax, dword ptr [esi]
// 008070f5  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008070fb  ffd2                 call edx
// 008070fd  8d4900               lea ecx, [ecx]
// 00807100  83be0801000000       cmp dword ptr [esi + 0x108], 0
// 00807107  751a                 jne 0x807123
// 00807109  837e3800             cmp dword ptr [esi + 0x38], 0
// 0080710d  751c                 jne 0x80712b
// 0080710f  85c0                 test eax, eax
// 00807111  7423                 je 0x807136
// 00807113  8b10                 mov edx, dword ptr [eax]
// 00807115  8bf0                 mov esi, eax
// 00807117  8bc8                 mov ecx, eax
// 00807119  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0080711f  ffd0                 call eax
// 00807121  ebdd                 jmp 0x807100
// 00807123  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 00807129  5e                   pop esi
// 0080712a  c3                   ret 
// 0080712b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0080712e  51                   push ecx
// 0080712f  e8f6c9feff           call 0x7f3b2a
// 00807134  5e                   pop esi
// 00807135  c3                   ret 
// 00807136  8bce                 mov ecx, esi
// 00807138  5e                   pop esi
// 00807139  e952ffffff           jmp 0x807090
// copied from an identical function in another client (function ?GetOwnerSite@CXTPCommandBar@@QBEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp