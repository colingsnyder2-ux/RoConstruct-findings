// from server: 100% by auto
// roc 2008-06 0066c040  unit: RBX::GroupDragTool  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066c040
//
// 0066c040  8b442408             mov eax, dword ptr [esp + 8]
// 0066c044  83e806               sub eax, 6
// 0066c047  744b                 je 0x66c094
// 0066c049  83e807               sub eax, 7
// 0066c04c  7433                 je 0x66c081
// 0066c04e  83e801               sub eax, 1
// 0066c051  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066c055  7421                 je 0x66c078
// 0066c057  833805               cmp dword ptr [eax], 5
// 0066c05a  750d                 jne 0x66c069
// 0066c05c  83c9ff               or ecx, 0xffffffff
// 0066c05f  394810               cmp dword ptr [eax + 0x10], ecx
// 0066c062  7505                 jne 0x66c069
// 0066c064  394814               cmp dword ptr [eax + 0x14], ecx
// 0066c067  743d                 je 0x66c0a6
// 0066c069  50                   push eax
// 0066c06a  8b442408             mov eax, dword ptr [esp + 8]
// 0066c06e  50                   push eax
// 0066c06f  e8acf8ffff           call 0x66b920
// 0066c074  83c408               add esp, 8
// 0066c077  c3                   ret 
// 0066c078  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066c07c  e96ffcffff           jmp 0x66bcf0
// 0066c081  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066c085  8b542404             mov edx, dword ptr [esp + 4]
// 0066c089  51                   push ecx
// 0066c08a  52                   push edx
// 0066c08b  e8c0fbffff           call 0x66bc50
// 0066c090  83c408               add esp, 8
// 0066c093  c3                   ret 
// 0066c094  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066c098  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066c09c  50                   push eax
// 0066c09d  51                   push ecx
// 0066c09e  e88df7ffff           call 0x66b830
// 0066c0a3  83c408               add esp, 8
// 0066c0a6  c3                   ret 
// library lua-5.1.1/lcode.c (function _luaK_infix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lcode.c
