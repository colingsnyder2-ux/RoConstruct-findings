// from server: 100% by auto
// roc 2007-08 00671550  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671550
//
// 00671550  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671554  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671558  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067155b  8b5210               mov edx, dword ptr [edx + 0x10]
// 0067155e  56                   push esi
// 0067155f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671563  50                   push eax
// 00671564  83ec10               sub esp, 0x10
// 00671567  8bc4                 mov eax, esp
// 00671569  8930                 mov dword ptr [eax], esi
// 0067156b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0067156f  897004               mov dword ptr [eax + 4], esi
// 00671572  8b742428             mov esi, dword ptr [esp + 0x28]
// 00671576  83c1fc               add ecx, -4
// 00671579  897008               mov dword ptr [eax + 8], esi
// 0067157c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00671580  89700c               mov dword ptr [eax + 0xc], esi
// 00671583  ffd2                 call edx
// 00671585  5e                   pop esi
// 00671586  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accName@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
