// from server: 100% by auto
// roc 2008-06 006e8590  unit: CXTPAccessible::XAccessible  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8590
//
// 006e8590  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e8594  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8598  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e859b  8b5228               mov edx, dword ptr [edx + 0x28]
// 006e859e  56                   push esi
// 006e859f  8b742410             mov esi, dword ptr [esp + 0x10]
// 006e85a3  50                   push eax
// 006e85a4  83ec10               sub esp, 0x10
// 006e85a7  8bc4                 mov eax, esp
// 006e85a9  8930                 mov dword ptr [eax], esi
// 006e85ab  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e85af  897004               mov dword ptr [eax + 4], esi
// 006e85b2  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e85b6  897008               mov dword ptr [eax + 8], esi
// 006e85b9  8b742430             mov esi, dword ptr [esp + 0x30]
// 006e85bd  83c1fc               add ecx, -4
// 006e85c0  89700c               mov dword ptr [eax + 0xc], esi
// 006e85c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 006e85c7  50                   push eax
// 006e85c8  ffd2                 call edx
// 006e85ca  5e                   pop esi
// 006e85cb  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accHelpTopic@XAccessible@CXTPAccessible@@UAGJPAPA_WUtagVARIANT@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
