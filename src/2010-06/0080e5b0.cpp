// roc 2010-06 0080e5b0  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e5b0
//
// 0080e5b0  56                   push esi
// 0080e5b1  8bf1                 mov esi, ecx
// 0080e5b3  837e0400             cmp dword ptr [esi + 4], 0
// 0080e5b7  7524                 jne 0x80e5dd
// 0080e5b9  57                   push edi
// 0080e5ba  8b3e                 mov edi, dword ptr [esi]
// 0080e5bc  e84fffffff           call 0x80e510
// 0080e5c1  8b4020               mov eax, dword ptr [eax + 0x20]
// 0080e5c4  8b5714               mov edx, dword ptr [edi + 0x14]
// 0080e5c7  50                   push eax
// 0080e5c8  8bce                 mov ecx, esi
// 0080e5ca  ffd2                 call edx
// 0080e5cc  894604               mov dword ptr [esi + 4], eax
// 0080e5cf  897004               mov dword ptr [eax + 4], esi
// 0080e5d2  8b4e04               mov ecx, dword ptr [esi + 4]
// 0080e5d5  8b01                 mov eax, dword ptr [ecx]
// 0080e5d7  8b5004               mov edx, dword ptr [eax + 4]
// 0080e5da  ffd2                 call edx
// 0080e5dc  5f                   pop edi
// 0080e5dd  8b4604               mov eax, dword ptr [esi + 4]
// 0080e5e0  5e                   pop esi
// 0080e5e1  c3                   ret 
// copied from an identical function in another client (function ?GetSafeTheme@CXTThemeManagerStyleFactory@@QAEPAVCXTThemeManagerStyle@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp