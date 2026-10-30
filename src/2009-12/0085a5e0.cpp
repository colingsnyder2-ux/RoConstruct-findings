// roc 2009-12 0085a5e0  unit: CXTThemeManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a5e0
//
// 0085a5e0  56                   push esi
// 0085a5e1  8bf1                 mov esi, ecx
// 0085a5e3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085a5e6  c706d0d19f00         mov dword ptr [esi], 0x9fd1d0
// 0085a5ec  85c9                 test ecx, ecx
// 0085a5ee  740f                 je 0x85a5ff
// 0085a5f0  8b01                 mov eax, dword ptr [ecx]
// 0085a5f2  8b10                 mov edx, dword ptr [eax]
// 0085a5f4  6a01                 push 1
// 0085a5f6  ffd2                 call edx
// 0085a5f8  c7460400000000       mov dword ptr [esi + 4], 0
// 0085a5ff  e87cffffff           call 0x85a580
// 0085a604  83c024               add eax, 0x24
// 0085a607  56                   push esi
// 0085a608  8bc8                 mov ecx, eax
// 0085a60a  e8cfc40c00           call 0x926ade
// 0085a60f  c7460800000000       mov dword ptr [esi + 8], 0
// 0085a616  5e                   pop esi
// 0085a617  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleFactory@@UAE@XZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp