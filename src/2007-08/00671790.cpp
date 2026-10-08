// from server: 100% by auto
// roc 2007-08 00671790  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671790
//
// 00671790  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671794  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671798  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067179b  8b5238               mov edx, dword ptr [edx + 0x38]
// 0067179e  56                   push esi
// 0067179f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006717a3  50                   push eax
// 006717a4  83ec10               sub esp, 0x10
// 006717a7  8bc4                 mov eax, esp
// 006717a9  8930                 mov dword ptr [eax], esi
// 006717ab  8b742424             mov esi, dword ptr [esp + 0x24]
// 006717af  897004               mov dword ptr [eax + 4], esi
// 006717b2  8b742428             mov esi, dword ptr [esp + 0x28]
// 006717b6  83c1fc               add ecx, -4
// 006717b9  897008               mov dword ptr [eax + 8], esi
// 006717bc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006717c0  89700c               mov dword ptr [eax + 0xc], esi
// 006717c3  ffd2                 call edx
// 006717c5  5e                   pop esi
// 006717c6  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accDefaultAction@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
