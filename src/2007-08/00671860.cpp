// roc 2007-08 00671860  unit: CXTPAccessible::XAccessible  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671860
//
// 00671860  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00671864  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671868  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067186b  8b5244               mov edx, dword ptr [edx + 0x44]
// 0067186e  56                   push esi
// 0067186f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00671873  50                   push eax
// 00671874  83ec10               sub esp, 0x10
// 00671877  8bc4                 mov eax, esp
// 00671879  8930                 mov dword ptr [eax], esi
// 0067187b  8b742428             mov esi, dword ptr [esp + 0x28]
// 0067187f  897004               mov dword ptr [eax + 4], esi
// 00671882  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00671886  897008               mov dword ptr [eax + 8], esi
// 00671889  8b742430             mov esi, dword ptr [esp + 0x30]
// 0067188d  83c1fc               add ecx, -4
// 00671890  89700c               mov dword ptr [eax + 0xc], esi
// 00671893  8b442420             mov eax, dword ptr [esp + 0x20]
// 00671897  50                   push eax
// 00671898  ffd2                 call edx
// 0067189a  5e                   pop esi
// 0067189b  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?accNavigate@XAccessible@CXTPAccessible@@UAGJJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
