// roc 2009-06 0077f560  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f560
//
// 0077f560  56                   push esi
// 0077f561  8bf1                 mov esi, ecx
// 0077f563  837e0400             cmp dword ptr [esi + 4], 0
// 0077f567  7524                 jne 0x77f58d
// 0077f569  57                   push edi
// 0077f56a  8b3e                 mov edi, dword ptr [esi]
// 0077f56c  e84fffffff           call 0x77f4c0
// 0077f571  8b4020               mov eax, dword ptr [eax + 0x20]
// 0077f574  8b5714               mov edx, dword ptr [edi + 0x14]
// 0077f577  50                   push eax
// 0077f578  8bce                 mov ecx, esi
// 0077f57a  ffd2                 call edx
// 0077f57c  894604               mov dword ptr [esi + 4], eax
// 0077f57f  897004               mov dword ptr [eax + 4], esi
// 0077f582  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077f585  8b01                 mov eax, dword ptr [ecx]
// 0077f587  8b5004               mov edx, dword ptr [eax + 4]
// 0077f58a  ffd2                 call edx
// 0077f58c  5f                   pop edi
// 0077f58d  8b4604               mov eax, dword ptr [esi + 4]
// 0077f590  5e                   pop esi
// 0077f591  c3                   ret 
// copied from an identical function in another client (function ?GetSafeTheme@CXTThemeManagerStyleFactory@@QAEPAVCXTThemeManagerStyle@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp