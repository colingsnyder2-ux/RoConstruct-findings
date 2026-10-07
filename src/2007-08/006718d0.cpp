// roc 2007-08 006718d0  unit: CXTPAccessible::XAccessible  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006718d0
//
// 006718d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006718d4  8b51fc               mov edx, dword ptr [ecx - 4]
// 006718d7  56                   push esi
// 006718d8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006718dc  83ec10               sub esp, 0x10
// 006718df  8bc4                 mov eax, esp
// 006718e1  8930                 mov dword ptr [eax], esi
// 006718e3  8b742420             mov esi, dword ptr [esp + 0x20]
// 006718e7  897004               mov dword ptr [eax + 4], esi
// 006718ea  8b742424             mov esi, dword ptr [esp + 0x24]
// 006718ee  897008               mov dword ptr [eax + 8], esi
// 006718f1  8b742428             mov esi, dword ptr [esp + 0x28]
// 006718f5  83c1fc               add ecx, -4
// 006718f8  89700c               mov dword ptr [eax + 0xc], esi
// 006718fb  8b424c               mov eax, dword ptr [edx + 0x4c]
// 006718fe  ffd0                 call eax
// 00671900  5e                   pop esi
// 00671901  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?accDoDefaultAction@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
