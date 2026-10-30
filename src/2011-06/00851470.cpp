// from server: 100% by auto
// roc 2011-06 00851470  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851470
//
// 00851470  8b442418             mov eax, dword ptr [esp + 0x18]
// 00851474  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851478  8b51fc               mov edx, dword ptr [ecx - 4]
// 0085147b  8b520c               mov edx, dword ptr [edx + 0xc]
// 0085147e  56                   push esi
// 0085147f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851483  50                   push eax
// 00851484  83ec10               sub esp, 0x10
// 00851487  8bc4                 mov eax, esp
// 00851489  8930                 mov dword ptr [eax], esi
// 0085148b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0085148f  897004               mov dword ptr [eax + 4], esi
// 00851492  8b742428             mov esi, dword ptr [esp + 0x28]
// 00851496  83c1fc               add ecx, -4
// 00851499  897008               mov dword ptr [eax + 8], esi
// 0085149c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008514a0  89700c               mov dword ptr [eax + 0xc], esi
// 008514a3  ffd2                 call edx
// 008514a5  5e                   pop esi
// 008514a6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accChild@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
