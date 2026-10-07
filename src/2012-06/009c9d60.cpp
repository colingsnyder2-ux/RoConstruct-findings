// roc 2012-06 009c9d60  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9d60
//
// 009c9d60  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c9d64  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9d68  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c9d6b  8b5254               mov edx, dword ptr [edx + 0x54]
// 009c9d6e  56                   push esi
// 009c9d6f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c9d73  50                   push eax
// 009c9d74  83ec10               sub esp, 0x10
// 009c9d77  8bc4                 mov eax, esp
// 009c9d79  8930                 mov dword ptr [eax], esi
// 009c9d7b  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c9d7f  897004               mov dword ptr [eax + 4], esi
// 009c9d82  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9d86  83c1fc               add ecx, -4
// 009c9d89  897008               mov dword ptr [eax + 8], esi
// 009c9d8c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c9d90  89700c               mov dword ptr [eax + 0xc], esi
// 009c9d93  ffd2                 call edx
// 009c9d95  5e                   pop esi
// 009c9d96  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?put_accValue@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
