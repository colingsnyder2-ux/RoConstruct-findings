// roc 2011-06 008515b0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008515b0
//
// 008515b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008515b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008515b8  8b51fc               mov edx, dword ptr [ecx - 4]
// 008515bb  8b5220               mov edx, dword ptr [edx + 0x20]
// 008515be  56                   push esi
// 008515bf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008515c3  50                   push eax
// 008515c4  83ec10               sub esp, 0x10
// 008515c7  8bc4                 mov eax, esp
// 008515c9  8930                 mov dword ptr [eax], esi
// 008515cb  8b742424             mov esi, dword ptr [esp + 0x24]
// 008515cf  897004               mov dword ptr [eax + 4], esi
// 008515d2  8b742428             mov esi, dword ptr [esp + 0x28]
// 008515d6  83c1fc               add ecx, -4
// 008515d9  897008               mov dword ptr [eax + 8], esi
// 008515dc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008515e0  89700c               mov dword ptr [eax + 0xc], esi
// 008515e3  ffd2                 call edx
// 008515e5  5e                   pop esi
// 008515e6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accState@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
