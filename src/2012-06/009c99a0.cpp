// from server: 100% by auto
// roc 2012-06 009c99a0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c99a0
//
// 009c99a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c99a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c99a8  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c99ab  8b5214               mov edx, dword ptr [edx + 0x14]
// 009c99ae  56                   push esi
// 009c99af  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c99b3  50                   push eax
// 009c99b4  83ec10               sub esp, 0x10
// 009c99b7  8bc4                 mov eax, esp
// 009c99b9  8930                 mov dword ptr [eax], esi
// 009c99bb  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c99bf  897004               mov dword ptr [eax + 4], esi
// 009c99c2  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c99c6  83c1fc               add ecx, -4
// 009c99c9  897008               mov dword ptr [eax + 8], esi
// 009c99cc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c99d0  89700c               mov dword ptr [eax + 0xc], esi
// 009c99d3  ffd2                 call edx
// 009c99d5  5e                   pop esi
// 009c99d6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accValue@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
