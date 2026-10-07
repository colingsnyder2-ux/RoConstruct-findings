// roc 2007-08 00671650  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671650
//
// 00671650  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671654  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671658  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067165b  8b5220               mov edx, dword ptr [edx + 0x20]
// 0067165e  56                   push esi
// 0067165f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671663  50                   push eax
// 00671664  83ec10               sub esp, 0x10
// 00671667  8bc4                 mov eax, esp
// 00671669  8930                 mov dword ptr [eax], esi
// 0067166b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0067166f  897004               mov dword ptr [eax + 4], esi
// 00671672  8b742428             mov esi, dword ptr [esp + 0x28]
// 00671676  83c1fc               add ecx, -4
// 00671679  897008               mov dword ptr [eax + 8], esi
// 0067167c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00671680  89700c               mov dword ptr [eax + 0xc], esi
// 00671683  ffd2                 call edx
// 00671685  5e                   pop esi
// 00671686  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accState@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
