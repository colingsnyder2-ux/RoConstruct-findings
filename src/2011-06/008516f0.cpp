// from server: 100% by auto
// roc 2011-06 008516f0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008516f0
//
// 008516f0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008516f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008516f8  8b51fc               mov edx, dword ptr [ecx - 4]
// 008516fb  8b5238               mov edx, dword ptr [edx + 0x38]
// 008516fe  56                   push esi
// 008516ff  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851703  50                   push eax
// 00851704  83ec10               sub esp, 0x10
// 00851707  8bc4                 mov eax, esp
// 00851709  8930                 mov dword ptr [eax], esi
// 0085170b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0085170f  897004               mov dword ptr [eax + 4], esi
// 00851712  8b742428             mov esi, dword ptr [esp + 0x28]
// 00851716  83c1fc               add ecx, -4
// 00851719  897008               mov dword ptr [eax + 8], esi
// 0085171c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00851720  89700c               mov dword ptr [eax + 0xc], esi
// 00851723  ffd2                 call edx
// 00851725  5e                   pop esi
// 00851726  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accDefaultAction@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
