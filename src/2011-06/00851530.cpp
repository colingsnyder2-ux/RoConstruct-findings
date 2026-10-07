// roc 2011-06 00851530  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851530
//
// 00851530  8b442418             mov eax, dword ptr [esp + 0x18]
// 00851534  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851538  8b51fc               mov edx, dword ptr [ecx - 4]
// 0085153b  8b5218               mov edx, dword ptr [edx + 0x18]
// 0085153e  56                   push esi
// 0085153f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851543  50                   push eax
// 00851544  83ec10               sub esp, 0x10
// 00851547  8bc4                 mov eax, esp
// 00851549  8930                 mov dword ptr [eax], esi
// 0085154b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0085154f  897004               mov dword ptr [eax + 4], esi
// 00851552  8b742428             mov esi, dword ptr [esp + 0x28]
// 00851556  83c1fc               add ecx, -4
// 00851559  897008               mov dword ptr [eax + 8], esi
// 0085155c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00851560  89700c               mov dword ptr [eax + 0xc], esi
// 00851563  ffd2                 call edx
// 00851565  5e                   pop esi
// 00851566  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accDescription@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
