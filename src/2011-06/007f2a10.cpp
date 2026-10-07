// roc 2011-06 007f2a10  unit: RBX::AdvLuaDragTool  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2a10
//
// 007f2a10  8b442404             mov eax, dword ptr [esp + 4]
// 007f2a14  8b4818               mov ecx, dword ptr [eax + 0x18]
// 007f2a17  8b542408             mov edx, dword ptr [esp + 8]
// 007f2a1b  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f2a1e  52                   push edx
// 007f2a1f  8d4820               lea ecx, [eax + 0x20]
// 007f2a22  51                   push ecx
// 007f2a23  50                   push eax
// 007f2a24  e827f8ffff           call 0x7f2250
// 007f2a29  83c40c               add esp, 0xc
// 007f2a2c  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchtohere)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
