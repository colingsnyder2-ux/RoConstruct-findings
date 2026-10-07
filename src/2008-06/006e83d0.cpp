// roc 2008-06 006e83d0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e83d0
//
// 006e83d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e83d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e83d8  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e83db  8b520c               mov edx, dword ptr [edx + 0xc]
// 006e83de  56                   push esi
// 006e83df  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e83e3  50                   push eax
// 006e83e4  83ec10               sub esp, 0x10
// 006e83e7  8bc4                 mov eax, esp
// 006e83e9  8930                 mov dword ptr [eax], esi
// 006e83eb  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e83ef  897004               mov dword ptr [eax + 4], esi
// 006e83f2  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e83f6  83c1fc               add ecx, -4
// 006e83f9  897008               mov dword ptr [eax + 8], esi
// 006e83fc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e8400  89700c               mov dword ptr [eax + 0xc], esi
// 006e8403  ffd2                 call edx
// 006e8405  5e                   pop esi
// 006e8406  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accChild@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
