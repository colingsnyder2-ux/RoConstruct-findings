// from server: 100% by auto
// roc 2011-06 00851870  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851870
//
// 00851870  8b442418             mov eax, dword ptr [esp + 0x18]
// 00851874  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851878  8b51fc               mov edx, dword ptr [ecx - 4]
// 0085187b  8b5250               mov edx, dword ptr [edx + 0x50]
// 0085187e  56                   push esi
// 0085187f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851883  50                   push eax
// 00851884  83ec10               sub esp, 0x10
// 00851887  8bc4                 mov eax, esp
// 00851889  8930                 mov dword ptr [eax], esi
// 0085188b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0085188f  897004               mov dword ptr [eax + 4], esi
// 00851892  8b742428             mov esi, dword ptr [esp + 0x28]
// 00851896  83c1fc               add ecx, -4
// 00851899  897008               mov dword ptr [eax + 8], esi
// 0085189c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008518a0  89700c               mov dword ptr [eax + 0xc], esi
// 008518a3  ffd2                 call edx
// 008518a5  5e                   pop esi
// 008518a6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?put_accName@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
