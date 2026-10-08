// from server: 100% by auto
// roc 2008-06 006e85d0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e85d0
//
// 006e85d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e85d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e85d8  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e85db  8b522c               mov edx, dword ptr [edx + 0x2c]
// 006e85de  56                   push esi
// 006e85df  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e85e3  50                   push eax
// 006e85e4  83ec10               sub esp, 0x10
// 006e85e7  8bc4                 mov eax, esp
// 006e85e9  8930                 mov dword ptr [eax], esi
// 006e85eb  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e85ef  897004               mov dword ptr [eax + 4], esi
// 006e85f2  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e85f6  83c1fc               add ecx, -4
// 006e85f9  897008               mov dword ptr [eax + 8], esi
// 006e85fc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e8600  89700c               mov dword ptr [eax + 0xc], esi
// 006e8603  ffd2                 call edx
// 006e8605  5e                   pop esi
// 006e8606  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accKeyboardShortcut@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
