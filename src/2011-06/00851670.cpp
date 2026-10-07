// roc 2011-06 00851670  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851670
//
// 00851670  8b442418             mov eax, dword ptr [esp + 0x18]
// 00851674  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851678  8b51fc               mov edx, dword ptr [ecx - 4]
// 0085167b  8b522c               mov edx, dword ptr [edx + 0x2c]
// 0085167e  56                   push esi
// 0085167f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851683  50                   push eax
// 00851684  83ec10               sub esp, 0x10
// 00851687  8bc4                 mov eax, esp
// 00851689  8930                 mov dword ptr [eax], esi
// 0085168b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0085168f  897004               mov dword ptr [eax + 4], esi
// 00851692  8b742428             mov esi, dword ptr [esp + 0x28]
// 00851696  83c1fc               add ecx, -4
// 00851699  897008               mov dword ptr [eax + 8], esi
// 0085169c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008516a0  89700c               mov dword ptr [eax + 0xc], esi
// 008516a3  ffd2                 call edx
// 008516a5  5e                   pop esi
// 008516a6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accKeyboardShortcut@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
