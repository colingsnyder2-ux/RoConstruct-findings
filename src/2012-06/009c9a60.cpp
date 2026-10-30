// from server: 100% by auto
// roc 2012-06 009c9a60  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9a60
//
// 009c9a60  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c9a64  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9a68  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c9a6b  8b5220               mov edx, dword ptr [edx + 0x20]
// 009c9a6e  56                   push esi
// 009c9a6f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c9a73  50                   push eax
// 009c9a74  83ec10               sub esp, 0x10
// 009c9a77  8bc4                 mov eax, esp
// 009c9a79  8930                 mov dword ptr [eax], esi
// 009c9a7b  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c9a7f  897004               mov dword ptr [eax + 4], esi
// 009c9a82  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9a86  83c1fc               add ecx, -4
// 009c9a89  897008               mov dword ptr [eax + 8], esi
// 009c9a8c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c9a90  89700c               mov dword ptr [eax + 0xc], esi
// 009c9a93  ffd2                 call edx
// 009c9a95  5e                   pop esi
// 009c9a96  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accState@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
