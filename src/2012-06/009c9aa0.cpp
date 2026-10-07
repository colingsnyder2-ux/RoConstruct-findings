// roc 2012-06 009c9aa0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9aa0
//
// 009c9aa0  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c9aa4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9aa8  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c9aab  8b5224               mov edx, dword ptr [edx + 0x24]
// 009c9aae  56                   push esi
// 009c9aaf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c9ab3  50                   push eax
// 009c9ab4  83ec10               sub esp, 0x10
// 009c9ab7  8bc4                 mov eax, esp
// 009c9ab9  8930                 mov dword ptr [eax], esi
// 009c9abb  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c9abf  897004               mov dword ptr [eax + 4], esi
// 009c9ac2  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9ac6  83c1fc               add ecx, -4
// 009c9ac9  897008               mov dword ptr [eax + 8], esi
// 009c9acc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c9ad0  89700c               mov dword ptr [eax + 0xc], esi
// 009c9ad3  ffd2                 call edx
// 009c9ad5  5e                   pop esi
// 009c9ad6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accHelp@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
