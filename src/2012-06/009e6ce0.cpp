// roc 2012-06 009e6ce0  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6ce0
//
// 009e6ce0  56                   push esi
// 009e6ce1  8bf1                 mov esi, ecx
// 009e6ce3  837e0400             cmp dword ptr [esi + 4], 0
// 009e6ce7  7524                 jne 0x9e6d0d
// 009e6ce9  57                   push edi
// 009e6cea  8b3e                 mov edi, dword ptr [esi]
// 009e6cec  e84fffffff           call 0x9e6c40
// 009e6cf1  8b4020               mov eax, dword ptr [eax + 0x20]
// 009e6cf4  8b5714               mov edx, dword ptr [edi + 0x14]
// 009e6cf7  50                   push eax
// 009e6cf8  8bce                 mov ecx, esi
// 009e6cfa  ffd2                 call edx
// 009e6cfc  894604               mov dword ptr [esi + 4], eax
// 009e6cff  897004               mov dword ptr [eax + 4], esi
// 009e6d02  8b4e04               mov ecx, dword ptr [esi + 4]
// 009e6d05  8b01                 mov eax, dword ptr [ecx]
// 009e6d07  8b5004               mov edx, dword ptr [eax + 4]
// 009e6d0a  ffd2                 call edx
// 009e6d0c  5f                   pop edi
// 009e6d0d  8b4604               mov eax, dword ptr [esi + 4]
// 009e6d10  5e                   pop esi
// 009e6d11  c3                   ret 
// copied from an identical function in another client (function ?GetSafeTheme@CXTThemeManagerStyleFactory@@QAEPAVCXTThemeManagerStyle@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp