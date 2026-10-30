// from server: 100% by auto
// roc 2008-06 006e8490  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8490
//
// 006e8490  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e8494  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8498  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e849b  8b5218               mov edx, dword ptr [edx + 0x18]
// 006e849e  56                   push esi
// 006e849f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e84a3  50                   push eax
// 006e84a4  83ec10               sub esp, 0x10
// 006e84a7  8bc4                 mov eax, esp
// 006e84a9  8930                 mov dword ptr [eax], esi
// 006e84ab  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e84af  897004               mov dword ptr [eax + 4], esi
// 006e84b2  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e84b6  83c1fc               add ecx, -4
// 006e84b9  897008               mov dword ptr [eax + 8], esi
// 006e84bc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e84c0  89700c               mov dword ptr [eax + 0xc], esi
// 006e84c3  ffd2                 call edx
// 006e84c5  5e                   pop esi
// 006e84c6  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?get_accDescription@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
