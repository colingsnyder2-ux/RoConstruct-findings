// roc 2012-06 009c9ba0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9ba0
//
// 009c9ba0  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c9ba4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9ba8  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c9bab  8b5238               mov edx, dword ptr [edx + 0x38]
// 009c9bae  56                   push esi
// 009c9baf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c9bb3  50                   push eax
// 009c9bb4  83ec10               sub esp, 0x10
// 009c9bb7  8bc4                 mov eax, esp
// 009c9bb9  8930                 mov dword ptr [eax], esi
// 009c9bbb  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c9bbf  897004               mov dword ptr [eax + 4], esi
// 009c9bc2  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9bc6  83c1fc               add ecx, -4
// 009c9bc9  897008               mov dword ptr [eax + 8], esi
// 009c9bcc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c9bd0  89700c               mov dword ptr [eax + 0xc], esi
// 009c9bd3  ffd2                 call edx
// 009c9bd5  5e                   pop esi
// 009c9bd6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accDefaultAction@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
