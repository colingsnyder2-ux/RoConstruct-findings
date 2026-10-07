// roc 2008-06 006e8450  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8450
//
// 006e8450  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e8454  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8458  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e845b  8b5214               mov edx, dword ptr [edx + 0x14]
// 006e845e  56                   push esi
// 006e845f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8463  50                   push eax
// 006e8464  83ec10               sub esp, 0x10
// 006e8467  8bc4                 mov eax, esp
// 006e8469  8930                 mov dword ptr [eax], esi
// 006e846b  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e846f  897004               mov dword ptr [eax + 4], esi
// 006e8472  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e8476  83c1fc               add ecx, -4
// 006e8479  897008               mov dword ptr [eax + 8], esi
// 006e847c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e8480  89700c               mov dword ptr [eax + 0xc], esi
// 006e8483  ffd2                 call edx
// 006e8485  5e                   pop esi
// 006e8486  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accValue@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
