// roc 2011-06 0086b920  unit: CXTThemeManagerStyle  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086b920
//
// 0086b920  56                   push esi
// 0086b921  8bf1                 mov esi, ecx
// 0086b923  56                   push esi
// 0086b924  c70658bdac00         mov dword ptr [esi], 0xacbd58
// 0086b92a  e801fdffff           call 0x86b630
// 0086b92f  8bc8                 mov ecx, eax
// 0086b931  83c108               add ecx, 8
// 0086b934  e889111600           call 0x9ccac2
// 0086b939  837e0400             cmp dword ptr [esi + 4], 0
// 0086b93d  7417                 je 0x86b956
// 0086b93f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0086b942  85c9                 test ecx, ecx
// 0086b944  7410                 je 0x86b956
// 0086b946  8b01                 mov eax, dword ptr [ecx]
// 0086b948  8b5004               mov edx, dword ptr [eax + 4]
// 0086b94b  6a01                 push 1
// 0086b94d  ffd2                 call edx
// 0086b94f  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0086b956  5e                   pop esi
// 0086b957  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleHost@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp