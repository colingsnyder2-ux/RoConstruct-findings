// from server: 100% by auto
// roc 2009-06 006e9d10  unit: RBX::PartDropTool  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9d10
//
// 006e9d10  8b442404             mov eax, dword ptr [esp + 4]
// 006e9d14  8b4010               mov eax, dword ptr [eax + 0x10]
// 006e9d17  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006e9d1a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e9d1e  8911                 mov dword ptr [ecx], edx
// 006e9d20  8a54240c             mov dl, byte ptr [esp + 0xc]
// 006e9d24  89481c               mov dword ptr [eax + 0x1c], ecx
// 006e9d27  8a4014               mov al, byte ptr [eax + 0x14]
// 006e9d2a  2403                 and al, 3
// 006e9d2c  884105               mov byte ptr [ecx + 5], al
// 006e9d2f  885104               mov byte ptr [ecx + 4], dl
// 006e9d32  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_link)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
