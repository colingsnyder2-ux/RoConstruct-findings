// roc 2007-08 00671690  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671690
//
// 00671690  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671694  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671698  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067169b  8b5224               mov edx, dword ptr [edx + 0x24]
// 0067169e  56                   push esi
// 0067169f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006716a3  50                   push eax
// 006716a4  83ec10               sub esp, 0x10
// 006716a7  8bc4                 mov eax, esp
// 006716a9  8930                 mov dword ptr [eax], esi
// 006716ab  8b742424             mov esi, dword ptr [esp + 0x24]
// 006716af  897004               mov dword ptr [eax + 4], esi
// 006716b2  8b742428             mov esi, dword ptr [esp + 0x28]
// 006716b6  83c1fc               add ecx, -4
// 006716b9  897008               mov dword ptr [eax + 8], esi
// 006716bc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006716c0  89700c               mov dword ptr [eax + 0xc], esi
// 006716c3  ffd2                 call edx
// 006716c5  5e                   pop esi
// 006716c6  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accHelp@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
