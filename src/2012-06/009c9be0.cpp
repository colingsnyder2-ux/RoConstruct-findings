// roc 2012-06 009c9be0  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9be0
//
// 009c9be0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9be4  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c9be7  8b523c               mov edx, dword ptr [edx + 0x3c]
// 009c9bea  56                   push esi
// 009c9beb  8b742410             mov esi, dword ptr [esp + 0x10]
// 009c9bef  83ec10               sub esp, 0x10
// 009c9bf2  8bc4                 mov eax, esp
// 009c9bf4  8930                 mov dword ptr [eax], esi
// 009c9bf6  8b742424             mov esi, dword ptr [esp + 0x24]
// 009c9bfa  897004               mov dword ptr [eax + 4], esi
// 009c9bfd  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9c01  897008               mov dword ptr [eax + 8], esi
// 009c9c04  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c9c08  83c1fc               add ecx, -4
// 009c9c0b  89700c               mov dword ptr [eax + 0xc], esi
// 009c9c0e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009c9c12  50                   push eax
// 009c9c13  ffd2                 call edx
// 009c9c15  5e                   pop esi
// 009c9c16  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?accSelect@XAccessible@CXTPAccessible@@UAGJJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
