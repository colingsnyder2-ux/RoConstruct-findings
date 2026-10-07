// roc 2008-06 006e8510  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8510
//
// 006e8510  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e8514  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8518  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e851b  8b5220               mov edx, dword ptr [edx + 0x20]
// 006e851e  56                   push esi
// 006e851f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8523  50                   push eax
// 006e8524  83ec10               sub esp, 0x10
// 006e8527  8bc4                 mov eax, esp
// 006e8529  8930                 mov dword ptr [eax], esi
// 006e852b  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e852f  897004               mov dword ptr [eax + 4], esi
// 006e8532  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e8536  83c1fc               add ecx, -4
// 006e8539  897008               mov dword ptr [eax + 8], esi
// 006e853c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e8540  89700c               mov dword ptr [eax + 0xc], esi
// 006e8543  ffd2                 call edx
// 006e8545  5e                   pop esi
// 006e8546  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accState@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
