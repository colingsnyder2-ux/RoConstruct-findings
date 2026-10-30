// from server: 100% by auto
// roc 2007-08 006715d0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006715d0
//
// 006715d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006715d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006715d8  8b51fc               mov edx, dword ptr [ecx - 4]
// 006715db  8b5218               mov edx, dword ptr [edx + 0x18]
// 006715de  56                   push esi
// 006715df  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006715e3  50                   push eax
// 006715e4  83ec10               sub esp, 0x10
// 006715e7  8bc4                 mov eax, esp
// 006715e9  8930                 mov dword ptr [eax], esi
// 006715eb  8b742424             mov esi, dword ptr [esp + 0x24]
// 006715ef  897004               mov dword ptr [eax + 4], esi
// 006715f2  8b742428             mov esi, dword ptr [esp + 0x28]
// 006715f6  83c1fc               add ecx, -4
// 006715f9  897008               mov dword ptr [eax + 8], esi
// 006715fc  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00671600  89700c               mov dword ptr [eax + 0xc], esi
// 00671603  ffd2                 call edx
// 00671605  5e                   pop esi
// 00671606  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?get_accDescription@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
