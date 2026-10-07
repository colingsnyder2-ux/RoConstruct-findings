// roc 2007-08 00671610  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671610
//
// 00671610  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671614  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671618  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067161b  8b521c               mov edx, dword ptr [edx + 0x1c]
// 0067161e  56                   push esi
// 0067161f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671623  50                   push eax
// 00671624  83ec10               sub esp, 0x10
// 00671627  8bc4                 mov eax, esp
// 00671629  8930                 mov dword ptr [eax], esi
// 0067162b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0067162f  897004               mov dword ptr [eax + 4], esi
// 00671632  8b742428             mov esi, dword ptr [esp + 0x28]
// 00671636  83c1fc               add ecx, -4
// 00671639  897008               mov dword ptr [eax + 8], esi
// 0067163c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00671640  89700c               mov dword ptr [eax + 0xc], esi
// 00671643  ffd2                 call edx
// 00671645  5e                   pop esi
// 00671646  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accRole@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
