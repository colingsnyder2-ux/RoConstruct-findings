// roc 2008-06 006e84d0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e84d0
//
// 006e84d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e84d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e84d8  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e84db  8b521c               mov edx, dword ptr [edx + 0x1c]
// 006e84de  56                   push esi
// 006e84df  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e84e3  50                   push eax
// 006e84e4  83ec10               sub esp, 0x10
// 006e84e7  8bc4                 mov eax, esp
// 006e84e9  8930                 mov dword ptr [eax], esi
// 006e84eb  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e84ef  897004               mov dword ptr [eax + 4], esi
// 006e84f2  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e84f6  83c1fc               add ecx, -4
// 006e84f9  897008               mov dword ptr [eax + 8], esi
// 006e84fc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e8500  89700c               mov dword ptr [eax + 0xc], esi
// 006e8503  ffd2                 call edx
// 006e8505  5e                   pop esi
// 006e8506  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accRole@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
