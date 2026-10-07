// roc 2008-06 006e8760  unit: CXTPAccessible::XAccessible  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8760
//
// 006e8760  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e8764  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8768  8b41fc               mov eax, dword ptr [ecx - 4]
// 006e876b  8b4048               mov eax, dword ptr [eax + 0x48]
// 006e876e  52                   push edx
// 006e876f  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e8773  83c1fc               add ecx, -4
// 006e8776  52                   push edx
// 006e8777  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e877b  52                   push edx
// 006e877c  ffd0                 call eax
// 006e877e  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?accHitTest@XAccessible@CXTPAccessible@@UAGJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
