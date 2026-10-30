// from server: 100% by auto
// roc 2011-06 007d72f0  unit: RBX::EquationDisplay  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d72f0
//
// 007d72f0  8b442404             mov eax, dword ptr [esp + 4]
// 007d72f4  8b4010               mov eax, dword ptr [eax + 0x10]
// 007d72f7  8b501c               mov edx, dword ptr [eax + 0x1c]
// 007d72fa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007d72fe  8911                 mov dword ptr [ecx], edx
// 007d7300  8a54240c             mov dl, byte ptr [esp + 0xc]
// 007d7304  89481c               mov dword ptr [eax + 0x1c], ecx
// 007d7307  8a4014               mov al, byte ptr [eax + 0x14]
// 007d730a  2403                 and al, 3
// 007d730c  884105               mov byte ptr [ecx + 5], al
// 007d730f  885104               mov byte ptr [ecx + 4], dl
// 007d7312  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_link)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
