// roc 2007-03 0067ba70  unit: seg_00670000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067ba70
//
// 0067ba70  56                   push esi
// 0067ba71  8bf1                 mov esi, ecx
// 0067ba73  837e0400             cmp dword ptr [esi + 4], 0
// 0067ba77  7524                 jne 0x67ba9d
// 0067ba79  57                   push edi
// 0067ba7a  8b3e                 mov edi, dword ptr [esi]
// 0067ba7c  e84fffffff           call 0x67b9d0
// 0067ba81  8b4020               mov eax, dword ptr [eax + 0x20]
// 0067ba84  8b5714               mov edx, dword ptr [edi + 0x14]
// 0067ba87  50                   push eax
// 0067ba88  8bce                 mov ecx, esi
// 0067ba8a  ffd2                 call edx
// 0067ba8c  894604               mov dword ptr [esi + 4], eax
// 0067ba8f  897004               mov dword ptr [eax + 4], esi
// 0067ba92  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067ba95  8b01                 mov eax, dword ptr [ecx]
// 0067ba97  8b5004               mov edx, dword ptr [eax + 4]
// 0067ba9a  ffd2                 call edx
// 0067ba9c  5f                   pop edi
// 0067ba9d  8b4604               mov eax, dword ptr [esi + 4]
// 0067baa0  5e                   pop esi
// 0067baa1  c3                   ret 
// copied from an identical function in another client (function ?GetSafeTheme@CXTThemeManagerStyleFactory@@QAEPAVCXTThemeManagerStyle@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp