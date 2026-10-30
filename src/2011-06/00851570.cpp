// from server: 100% by auto
// roc 2011-06 00851570  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851570
//
// 00851570  8b442418             mov eax, dword ptr [esp + 0x18]
// 00851574  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851578  8b51fc               mov edx, dword ptr [ecx - 4]
// 0085157b  8b521c               mov edx, dword ptr [edx + 0x1c]
// 0085157e  56                   push esi
// 0085157f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851583  50                   push eax
// 00851584  83ec10               sub esp, 0x10
// 00851587  8bc4                 mov eax, esp
// 00851589  8930                 mov dword ptr [eax], esi
// 0085158b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0085158f  897004               mov dword ptr [eax + 4], esi
// 00851592  8b742428             mov esi, dword ptr [esp + 0x28]
// 00851596  83c1fc               add ecx, -4
// 00851599  897008               mov dword ptr [eax + 8], esi
// 0085159c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008515a0  89700c               mov dword ptr [eax + 0xc], esi
// 008515a3  ffd2                 call edx
// 008515a5  5e                   pop esi
// 008515a6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accRole@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
