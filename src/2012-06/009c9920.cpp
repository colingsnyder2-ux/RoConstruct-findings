// roc 2012-06 009c9920  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9920
//
// 009c9920  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c9924  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9928  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c992b  8b520c               mov edx, dword ptr [edx + 0xc]
// 009c992e  56                   push esi
// 009c992f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c9933  50                   push eax
// 009c9934  83ec10               sub esp, 0x10
// 009c9937  8bc4                 mov eax, esp
// 009c9939  8930                 mov dword ptr [eax], esi
// 009c993b  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c993f  897004               mov dword ptr [eax + 4], esi
// 009c9942  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9946  83c1fc               add ecx, -4
// 009c9949  897008               mov dword ptr [eax + 8], esi
// 009c994c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c9950  89700c               mov dword ptr [eax + 0xc], esi
// 009c9953  ffd2                 call edx
// 009c9955  5e                   pop esi
// 009c9956  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accChild@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
