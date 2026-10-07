// roc 2007-08 00671910  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671910
//
// 00671910  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671914  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671918  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067191b  8b5250               mov edx, dword ptr [edx + 0x50]
// 0067191e  56                   push esi
// 0067191f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671923  50                   push eax
// 00671924  83ec10               sub esp, 0x10
// 00671927  8bc4                 mov eax, esp
// 00671929  8930                 mov dword ptr [eax], esi
// 0067192b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0067192f  897004               mov dword ptr [eax + 4], esi
// 00671932  8b742428             mov esi, dword ptr [esp + 0x28]
// 00671936  83c1fc               add ecx, -4
// 00671939  897008               mov dword ptr [eax + 8], esi
// 0067193c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00671940  89700c               mov dword ptr [eax + 0xc], esi
// 00671943  ffd2                 call edx
// 00671945  5e                   pop esi
// 00671946  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?put_accName@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
