// from server: 100% by auto
// roc 2010-06 0077afb0  unit: RBX::PartDropTool  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077afb0
//
// 0077afb0  8b442404             mov eax, dword ptr [esp + 4]
// 0077afb4  8b4010               mov eax, dword ptr [eax + 0x10]
// 0077afb7  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0077afba  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077afbe  8911                 mov dword ptr [ecx], edx
// 0077afc0  8a54240c             mov dl, byte ptr [esp + 0xc]
// 0077afc4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0077afc7  8a4014               mov al, byte ptr [eax + 0x14]
// 0077afca  2403                 and al, 3
// 0077afcc  884105               mov byte ptr [ecx + 5], al
// 0077afcf  885104               mov byte ptr [ecx + 4], dl
// 0077afd2  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_link)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
