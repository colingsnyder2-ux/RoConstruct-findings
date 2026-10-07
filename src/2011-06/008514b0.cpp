// roc 2011-06 008514b0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008514b0
//
// 008514b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008514b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008514b8  8b51fc               mov edx, dword ptr [ecx - 4]
// 008514bb  8b5210               mov edx, dword ptr [edx + 0x10]
// 008514be  56                   push esi
// 008514bf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008514c3  50                   push eax
// 008514c4  83ec10               sub esp, 0x10
// 008514c7  8bc4                 mov eax, esp
// 008514c9  8930                 mov dword ptr [eax], esi
// 008514cb  8b742424             mov esi, dword ptr [esp + 0x24]
// 008514cf  897004               mov dword ptr [eax + 4], esi
// 008514d2  8b742428             mov esi, dword ptr [esp + 0x28]
// 008514d6  83c1fc               add ecx, -4
// 008514d9  897008               mov dword ptr [eax + 8], esi
// 008514dc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008514e0  89700c               mov dword ptr [eax + 0xc], esi
// 008514e3  ffd2                 call edx
// 008514e5  5e                   pop esi
// 008514e6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accName@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
