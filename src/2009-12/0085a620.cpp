// roc 2009-12 0085a620  unit: CXTThemeManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a620
//
// 0085a620  56                   push esi
// 0085a621  8bf1                 mov esi, ecx
// 0085a623  837e0400             cmp dword ptr [esi + 4], 0
// 0085a627  7524                 jne 0x85a64d
// 0085a629  57                   push edi
// 0085a62a  8b3e                 mov edi, dword ptr [esi]
// 0085a62c  e84fffffff           call 0x85a580
// 0085a631  8b4020               mov eax, dword ptr [eax + 0x20]
// 0085a634  8b5714               mov edx, dword ptr [edi + 0x14]
// 0085a637  50                   push eax
// 0085a638  8bce                 mov ecx, esi
// 0085a63a  ffd2                 call edx
// 0085a63c  894604               mov dword ptr [esi + 4], eax
// 0085a63f  897004               mov dword ptr [eax + 4], esi
// 0085a642  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085a645  8b01                 mov eax, dword ptr [ecx]
// 0085a647  8b5004               mov edx, dword ptr [eax + 4]
// 0085a64a  ffd2                 call edx
// 0085a64c  5f                   pop edi
// 0085a64d  8b4604               mov eax, dword ptr [esi + 4]
// 0085a650  5e                   pop esi
// 0085a651  c3                   ret 
// copied from an identical function in another client (function ?GetSafeTheme@CXTThemeManagerStyleFactory@@QAEPAVCXTThemeManagerStyle@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp