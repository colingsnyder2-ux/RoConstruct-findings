// roc 2011-06 00851830  unit: CXTPAccessible::XAccessible  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851830
//
// 00851830  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851834  8b51fc               mov edx, dword ptr [ecx - 4]
// 00851837  56                   push esi
// 00851838  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0085183c  83ec10               sub esp, 0x10
// 0085183f  8bc4                 mov eax, esp
// 00851841  8930                 mov dword ptr [eax], esi
// 00851843  8b742420             mov esi, dword ptr [esp + 0x20]
// 00851847  897004               mov dword ptr [eax + 4], esi
// 0085184a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0085184e  897008               mov dword ptr [eax + 8], esi
// 00851851  8b742428             mov esi, dword ptr [esp + 0x28]
// 00851855  83c1fc               add ecx, -4
// 00851858  89700c               mov dword ptr [eax + 0xc], esi
// 0085185b  8b424c               mov eax, dword ptr [edx + 0x4c]
// 0085185e  ffd0                 call eax
// 00851860  5e                   pop esi
// 00851861  c21400               ret 0x14
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?accDoDefaultAction@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
