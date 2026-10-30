// from server: 100% by auto
// roc 2007-08 00671710  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671710
//
// 00671710  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671714  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671718  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067171b  8b522c               mov edx, dword ptr [edx + 0x2c]
// 0067171e  56                   push esi
// 0067171f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671723  50                   push eax
// 00671724  83ec10               sub esp, 0x10
// 00671727  8bc4                 mov eax, esp
// 00671729  8930                 mov dword ptr [eax], esi
// 0067172b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0067172f  897004               mov dword ptr [eax + 4], esi
// 00671732  8b742428             mov esi, dword ptr [esp + 0x28]
// 00671736  83c1fc               add ecx, -4
// 00671739  897008               mov dword ptr [eax + 8], esi
// 0067173c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00671740  89700c               mov dword ptr [eax + 0xc], esi
// 00671743  ffd2                 call edx
// 00671745  5e                   pop esi
// 00671746  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accKeyboardShortcut@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
