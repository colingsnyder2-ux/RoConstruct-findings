// from server: 100% by auto
// roc 2012-06 009c9ce0  unit: CXTPAccessible::XAccessible  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9ce0
//
// 009c9ce0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9ce4  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c9ce7  56                   push esi
// 009c9ce8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c9cec  83ec10               sub esp, 0x10
// 009c9cef  8bc4                 mov eax, esp
// 009c9cf1  8930                 mov dword ptr [eax], esi
// 009c9cf3  8b742420             mov esi, dword ptr [esp + 0x20]
// 009c9cf7  897004               mov dword ptr [eax + 4], esi
// 009c9cfa  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c9cfe  897008               mov dword ptr [eax + 8], esi
// 009c9d01  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9d05  83c1fc               add ecx, -4
// 009c9d08  89700c               mov dword ptr [eax + 0xc], esi
// 009c9d0b  8b424c               mov eax, dword ptr [edx + 0x4c]
// 009c9d0e  ffd0                 call eax
// 009c9d10  5e                   pop esi
// 009c9d11  c21400               ret 0x14
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?accDoDefaultAction@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
