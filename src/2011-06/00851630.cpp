// from server: 100% by auto
// roc 2011-06 00851630  unit: CXTPAccessible::XAccessible  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851630
//
// 00851630  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00851634  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851638  8b51fc               mov edx, dword ptr [ecx - 4]
// 0085163b  8b5228               mov edx, dword ptr [edx + 0x28]
// 0085163e  56                   push esi
// 0085163f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00851643  50                   push eax
// 00851644  83ec10               sub esp, 0x10
// 00851647  8bc4                 mov eax, esp
// 00851649  8930                 mov dword ptr [eax], esi
// 0085164b  8b742428             mov esi, dword ptr [esp + 0x28]
// 0085164f  897004               mov dword ptr [eax + 4], esi
// 00851652  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00851656  897008               mov dword ptr [eax + 8], esi
// 00851659  8b742430             mov esi, dword ptr [esp + 0x30]
// 0085165d  83c1fc               add ecx, -4
// 00851660  89700c               mov dword ptr [eax + 0xc], esi
// 00851663  8b442420             mov eax, dword ptr [esp + 0x20]
// 00851667  50                   push eax
// 00851668  ffd2                 call edx
// 0085166a  5e                   pop esi
// 0085166b  c21c00               ret 0x1c
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accHelpTopic@XAccessible@CXTPAccessible@@UAGJPAPA_WUtagVARIANT@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
