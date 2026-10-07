// roc 2008-06 006e8650  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8650
//
// 006e8650  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e8654  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8658  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e865b  8b5238               mov edx, dword ptr [edx + 0x38]
// 006e865e  56                   push esi
// 006e865f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8663  50                   push eax
// 006e8664  83ec10               sub esp, 0x10
// 006e8667  8bc4                 mov eax, esp
// 006e8669  8930                 mov dword ptr [eax], esi
// 006e866b  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e866f  897004               mov dword ptr [eax + 4], esi
// 006e8672  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e8676  83c1fc               add ecx, -4
// 006e8679  897008               mov dword ptr [eax + 8], esi
// 006e867c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e8680  89700c               mov dword ptr [eax + 0xc], esi
// 006e8683  ffd2                 call edx
// 006e8685  5e                   pop esi
// 006e8686  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accDefaultAction@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
