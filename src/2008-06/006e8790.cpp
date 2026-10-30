// from server: 100% by auto
// roc 2008-06 006e8790  unit: CXTPAccessible::XAccessible  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8790
//
// 006e8790  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8794  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e8797  56                   push esi
// 006e8798  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e879c  83ec10               sub esp, 0x10
// 006e879f  8bc4                 mov eax, esp
// 006e87a1  8930                 mov dword ptr [eax], esi
// 006e87a3  8b742420             mov esi, dword ptr [esp + 0x20]
// 006e87a7  897004               mov dword ptr [eax + 4], esi
// 006e87aa  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e87ae  897008               mov dword ptr [eax + 8], esi
// 006e87b1  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e87b5  83c1fc               add ecx, -4
// 006e87b8  89700c               mov dword ptr [eax + 0xc], esi
// 006e87bb  8b424c               mov eax, dword ptr [edx + 0x4c]
// 006e87be  ffd0                 call eax
// 006e87c0  5e                   pop esi
// 006e87c1  c21400               ret 0x14
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?accDoDefaultAction@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
