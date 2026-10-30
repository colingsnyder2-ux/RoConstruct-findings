// roc 2009-12 0085a1f0  unit: CXTThemeManagerStyle  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a1f0
//
// 0085a1f0  56                   push esi
// 0085a1f1  8bf1                 mov esi, ecx
// 0085a1f3  56                   push esi
// 0085a1f4  c706b8d19f00         mov dword ptr [esi], 0x9fd1b8
// 0085a1fa  e811fdffff           call 0x859f10
// 0085a1ff  8bc8                 mov ecx, eax
// 0085a201  83c108               add ecx, 8
// 0085a204  e8d5c80c00           call 0x926ade
// 0085a209  837e0400             cmp dword ptr [esi + 4], 0
// 0085a20d  7417                 je 0x85a226
// 0085a20f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0085a212  85c9                 test ecx, ecx
// 0085a214  7410                 je 0x85a226
// 0085a216  8b01                 mov eax, dword ptr [ecx]
// 0085a218  8b5004               mov edx, dword ptr [eax + 4]
// 0085a21b  6a01                 push 1
// 0085a21d  ffd2                 call edx
// 0085a21f  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0085a226  5e                   pop esi
// 0085a227  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleHost@@MAE@XZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp