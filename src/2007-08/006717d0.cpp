// from server: 100% by auto
// roc 2007-08 006717d0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006717d0
//
// 006717d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006717d4  8b51fc               mov edx, dword ptr [ecx - 4]
// 006717d7  8b523c               mov edx, dword ptr [edx + 0x3c]
// 006717da  56                   push esi
// 006717db  8b742410             mov esi, dword ptr [esp + 0x10]
// 006717df  83ec10               sub esp, 0x10
// 006717e2  8bc4                 mov eax, esp
// 006717e4  8930                 mov dword ptr [eax], esi
// 006717e6  8b742424             mov esi, dword ptr [esp + 0x24]
// 006717ea  897004               mov dword ptr [eax + 4], esi
// 006717ed  8b742428             mov esi, dword ptr [esp + 0x28]
// 006717f1  897008               mov dword ptr [eax + 8], esi
// 006717f4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006717f8  83c1fc               add ecx, -4
// 006717fb  89700c               mov dword ptr [eax + 0xc], esi
// 006717fe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00671802  50                   push eax
// 00671803  ffd2                 call edx
// 00671805  5e                   pop esi
// 00671806  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?accSelect@XAccessible@CXTPAccessible@@UAGJJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
