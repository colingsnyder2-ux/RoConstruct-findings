// roc 2011-06 0086bd50  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bd50
//
// 0086bd50  56                   push esi
// 0086bd51  8bf1                 mov esi, ecx
// 0086bd53  837e0400             cmp dword ptr [esi + 4], 0
// 0086bd57  7524                 jne 0x86bd7d
// 0086bd59  57                   push edi
// 0086bd5a  8b3e                 mov edi, dword ptr [esi]
// 0086bd5c  e84fffffff           call 0x86bcb0
// 0086bd61  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086bd64  8b5714               mov edx, dword ptr [edi + 0x14]
// 0086bd67  50                   push eax
// 0086bd68  8bce                 mov ecx, esi
// 0086bd6a  ffd2                 call edx
// 0086bd6c  894604               mov dword ptr [esi + 4], eax
// 0086bd6f  897004               mov dword ptr [eax + 4], esi
// 0086bd72  8b4e04               mov ecx, dword ptr [esi + 4]
// 0086bd75  8b01                 mov eax, dword ptr [ecx]
// 0086bd77  8b5004               mov edx, dword ptr [eax + 4]
// 0086bd7a  ffd2                 call edx
// 0086bd7c  5f                   pop edi
// 0086bd7d  8b4604               mov eax, dword ptr [esi + 4]
// 0086bd80  5e                   pop esi
// 0086bd81  c3                   ret 
// copied from an identical function in another client (function ?GetSafeTheme@CXTThemeManagerStyleFactory@@QAEPAVCXTThemeManagerStyle@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp