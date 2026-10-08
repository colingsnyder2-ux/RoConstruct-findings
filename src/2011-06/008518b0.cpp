// from server: 100% by auto
// roc 2011-06 008518b0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008518b0
//
// 008518b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008518b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008518b8  8b51fc               mov edx, dword ptr [ecx - 4]
// 008518bb  8b5254               mov edx, dword ptr [edx + 0x54]
// 008518be  56                   push esi
// 008518bf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008518c3  50                   push eax
// 008518c4  83ec10               sub esp, 0x10
// 008518c7  8bc4                 mov eax, esp
// 008518c9  8930                 mov dword ptr [eax], esi
// 008518cb  8b742424             mov esi, dword ptr [esp + 0x24]
// 008518cf  897004               mov dword ptr [eax + 4], esi
// 008518d2  8b742428             mov esi, dword ptr [esp + 0x28]
// 008518d6  83c1fc               add ecx, -4
// 008518d9  897008               mov dword ptr [eax + 8], esi
// 008518dc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008518e0  89700c               mov dword ptr [eax + 0xc], esi
// 008518e3  ffd2                 call edx
// 008518e5  5e                   pop esi
// 008518e6  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?put_accValue@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
