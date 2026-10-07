// roc 2012-06 00933400  unit: RBX::BallCellContact  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00933400
//
// 00933400  8b442404             mov eax, dword ptr [esp + 4]
// 00933404  8b4010               mov eax, dword ptr [eax + 0x10]
// 00933407  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0093340a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0093340e  8911                 mov dword ptr [ecx], edx
// 00933410  8a54240c             mov dl, byte ptr [esp + 0xc]
// 00933414  89481c               mov dword ptr [eax + 0x1c], ecx
// 00933417  8a4014               mov al, byte ptr [eax + 0x14]
// 0093341a  2403                 and al, 3
// 0093341c  884105               mov byte ptr [ecx + 5], al
// 0093341f  885104               mov byte ptr [ecx + 4], dl
// 00933422  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_link)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
