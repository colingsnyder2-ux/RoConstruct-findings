// from server: 100% by auto
// roc 2012-06 009c99e0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c99e0
//
// 009c99e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c99e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c99e8  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c99eb  8b5218               mov edx, dword ptr [edx + 0x18]
// 009c99ee  56                   push esi
// 009c99ef  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c99f3  50                   push eax
// 009c99f4  83ec10               sub esp, 0x10
// 009c99f7  8bc4                 mov eax, esp
// 009c99f9  8930                 mov dword ptr [eax], esi
// 009c99fb  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c99ff  897004               mov dword ptr [eax + 4], esi
// 009c9a02  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9a06  83c1fc               add ecx, -4
// 009c9a09  897008               mov dword ptr [eax + 8], esi
// 009c9a0c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c9a10  89700c               mov dword ptr [eax + 0xc], esi
// 009c9a13  ffd2                 call edx
// 009c9a15  5e                   pop esi
// 009c9a16  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accDescription@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
