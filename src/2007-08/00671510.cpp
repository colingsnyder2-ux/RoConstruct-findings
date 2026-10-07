// roc 2007-08 00671510  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671510
//
// 00671510  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671514  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671518  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067151b  8b520c               mov edx, dword ptr [edx + 0xc]
// 0067151e  56                   push esi
// 0067151f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671523  50                   push eax
// 00671524  83ec10               sub esp, 0x10
// 00671527  8bc4                 mov eax, esp
// 00671529  8930                 mov dword ptr [eax], esi
// 0067152b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0067152f  897004               mov dword ptr [eax + 4], esi
// 00671532  8b742428             mov esi, dword ptr [esp + 0x28]
// 00671536  83c1fc               add ecx, -4
// 00671539  897008               mov dword ptr [eax + 8], esi
// 0067153c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00671540  89700c               mov dword ptr [eax + 0xc], esi
// 00671543  ffd2                 call edx
// 00671545  5e                   pop esi
// 00671546  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accChild@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
