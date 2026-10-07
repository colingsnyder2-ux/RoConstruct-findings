// roc 2012-06 009c9a20  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9a20
//
// 009c9a20  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c9a24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9a28  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c9a2b  8b521c               mov edx, dword ptr [edx + 0x1c]
// 009c9a2e  56                   push esi
// 009c9a2f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c9a33  50                   push eax
// 009c9a34  83ec10               sub esp, 0x10
// 009c9a37  8bc4                 mov eax, esp
// 009c9a39  8930                 mov dword ptr [eax], esi
// 009c9a3b  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c9a3f  897004               mov dword ptr [eax + 4], esi
// 009c9a42  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9a46  83c1fc               add ecx, -4
// 009c9a49  897008               mov dword ptr [eax + 8], esi
// 009c9a4c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c9a50  89700c               mov dword ptr [eax + 0xc], esi
// 009c9a53  ffd2                 call edx
// 009c9a55  5e                   pop esi
// 009c9a56  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accRole@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
