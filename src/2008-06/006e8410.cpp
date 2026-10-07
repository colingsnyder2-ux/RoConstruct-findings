// roc 2008-06 006e8410  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8410
//
// 006e8410  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e8414  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8418  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e841b  8b5210               mov edx, dword ptr [edx + 0x10]
// 006e841e  56                   push esi
// 006e841f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8423  50                   push eax
// 006e8424  83ec10               sub esp, 0x10
// 006e8427  8bc4                 mov eax, esp
// 006e8429  8930                 mov dword ptr [eax], esi
// 006e842b  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e842f  897004               mov dword ptr [eax + 4], esi
// 006e8432  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e8436  83c1fc               add ecx, -4
// 006e8439  897008               mov dword ptr [eax + 8], esi
// 006e843c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e8440  89700c               mov dword ptr [eax + 0xc], esi
// 006e8443  ffd2                 call edx
// 006e8445  5e                   pop esi
// 006e8446  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accName@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
