// from server: 100% by auto
// roc 2011-06 008517c0  unit: CXTPAccessible::XAccessible  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008517c0
//
// 008517c0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008517c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008517c8  8b51fc               mov edx, dword ptr [ecx - 4]
// 008517cb  8b5244               mov edx, dword ptr [edx + 0x44]
// 008517ce  56                   push esi
// 008517cf  8b742410             mov esi, dword ptr [esp + 0x10]
// 008517d3  50                   push eax
// 008517d4  83ec10               sub esp, 0x10
// 008517d7  8bc4                 mov eax, esp
// 008517d9  8930                 mov dword ptr [eax], esi
// 008517db  8b742428             mov esi, dword ptr [esp + 0x28]
// 008517df  897004               mov dword ptr [eax + 4], esi
// 008517e2  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008517e6  897008               mov dword ptr [eax + 8], esi
// 008517e9  8b742430             mov esi, dword ptr [esp + 0x30]
// 008517ed  83c1fc               add ecx, -4
// 008517f0  89700c               mov dword ptr [eax + 0xc], esi
// 008517f3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008517f7  50                   push eax
// 008517f8  ffd2                 call edx
// 008517fa  5e                   pop esi
// 008517fb  c21c00               ret 0x1c
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?accNavigate@XAccessible@CXTPAccessible@@UAGJJUtagVARIANT@@PAU3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
