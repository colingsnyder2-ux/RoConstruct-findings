// from server: 100% by auto
// roc 2008-06 006e8690  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8690
//
// 006e8690  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8694  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e8697  8b523c               mov edx, dword ptr [edx + 0x3c]
// 006e869a  56                   push esi
// 006e869b  8b742410             mov esi, dword ptr [esp + 0x10]
// 006e869f  83ec10               sub esp, 0x10
// 006e86a2  8bc4                 mov eax, esp
// 006e86a4  8930                 mov dword ptr [eax], esi
// 006e86a6  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e86aa  897004               mov dword ptr [eax + 4], esi
// 006e86ad  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e86b1  897008               mov dword ptr [eax + 8], esi
// 006e86b4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e86b8  83c1fc               add ecx, -4
// 006e86bb  89700c               mov dword ptr [eax + 0xc], esi
// 006e86be  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e86c2  50                   push eax
// 006e86c3  ffd2                 call edx
// 006e86c5  5e                   pop esi
// 006e86c6  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?accSelect@XAccessible@CXTPAccessible@@UAGJJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
