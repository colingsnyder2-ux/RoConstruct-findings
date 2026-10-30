// from server: 100% by auto
// roc 2008-06 006e8720  unit: CXTPAccessible::XAccessible  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8720
//
// 006e8720  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e8724  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8728  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e872b  8b5244               mov edx, dword ptr [edx + 0x44]
// 006e872e  56                   push esi
// 006e872f  8b742410             mov esi, dword ptr [esp + 0x10]
// 006e8733  50                   push eax
// 006e8734  83ec10               sub esp, 0x10
// 006e8737  8bc4                 mov eax, esp
// 006e8739  8930                 mov dword ptr [eax], esi
// 006e873b  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e873f  897004               mov dword ptr [eax + 4], esi
// 006e8742  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e8746  897008               mov dword ptr [eax + 8], esi
// 006e8749  8b742430             mov esi, dword ptr [esp + 0x30]
// 006e874d  83c1fc               add ecx, -4
// 006e8750  89700c               mov dword ptr [eax + 0xc], esi
// 006e8753  8b442420             mov eax, dword ptr [esp + 0x20]
// 006e8757  50                   push eax
// 006e8758  ffd2                 call edx
// 006e875a  5e                   pop esi
// 006e875b  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?accNavigate@XAccessible@CXTPAccessible@@UAGJJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
