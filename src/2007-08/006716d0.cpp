// from server: 100% by auto
// roc 2007-08 006716d0  unit: CXTPAccessible::XAccessible  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006716d0
//
// 006716d0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006716d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006716d8  8b51fc               mov edx, dword ptr [ecx - 4]
// 006716db  8b5228               mov edx, dword ptr [edx + 0x28]
// 006716de  56                   push esi
// 006716df  8b742410             mov esi, dword ptr [esp + 0x10]
// 006716e3  50                   push eax
// 006716e4  83ec10               sub esp, 0x10
// 006716e7  8bc4                 mov eax, esp
// 006716e9  8930                 mov dword ptr [eax], esi
// 006716eb  8b742428             mov esi, dword ptr [esp + 0x28]
// 006716ef  897004               mov dword ptr [eax + 4], esi
// 006716f2  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006716f6  897008               mov dword ptr [eax + 8], esi
// 006716f9  8b742430             mov esi, dword ptr [esp + 0x30]
// 006716fd  83c1fc               add ecx, -4
// 00671700  89700c               mov dword ptr [eax + 0xc], esi
// 00671703  8b442420             mov eax, dword ptr [esp + 0x20]
// 00671707  50                   push eax
// 00671708  ffd2                 call edx
// 0067170a  5e                   pop esi
// 0067170b  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accHelpTopic@XAccessible@CXTPAccessible@@UAGJPAPA_WUtagVARIANT@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
