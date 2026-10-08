// from server: 100% by auto
// roc 2012-06 00854410  unit: RBX::LuaStatsItem  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854410
//
// 00854410  8b442408             mov eax, dword ptr [esp + 8]
// 00854414  56                   push esi
// 00854415  8b742410             mov esi, dword ptr [esp + 0x10]
// 00854419  83c0fe               add eax, -2
// 0085441c  57                   push edi
// 0085441d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00854421  83f803               cmp eax, 3
// 00854424  7749                 ja 0x85446f
// 00854426  ff248578448500       jmp dword ptr [eax*4 + 0x854478]
// 0085442d  6a11                 push 0x11
// 0085442f  68cc37bd00           push 0xbd37cc
// 00854434  57                   push edi
// 00854435  e8f61e0e00           call 0x936330
// 0085443a  83c40c               add esp, 0xc
// 0085443d  8906                 mov dword ptr [esi], eax
// 0085443f  c7460804000000       mov dword ptr [esi + 8], 4
// 00854446  83c610               add esi, 0x10
// 00854449  897708               mov dword ptr [edi + 8], esi
// 0085444c  5f                   pop edi
// 0085444d  5e                   pop esi
// 0085444e  c3                   ret 
// 0085444f  6a17                 push 0x17
// 00854451  68e038bd00           push 0xbd38e0
// 00854456  ebdc                 jmp 0x854434
// 00854458  8b4708               mov eax, dword ptr [edi + 8]
// 0085445b  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 0085445e  83e810               sub eax, 0x10
// 00854461  890e                 mov dword ptr [esi], ecx
// 00854463  8b5004               mov edx, dword ptr [eax + 4]
// 00854466  895604               mov dword ptr [esi + 4], edx
// 00854469  8b4008               mov eax, dword ptr [eax + 8]
// 0085446c  894608               mov dword ptr [esi + 8], eax
// 0085446f  83c610               add esi, 0x10
// 00854472  897708               mov dword ptr [edi + 8], esi
// 00854475  5f                   pop edi
// 00854476  5e                   pop esi
// 00854477  c3                   ret 
// 00854478  58                   pop eax
// 00854479  44                   inc esp
// 0085447a  8500                 test dword ptr [eax], eax
// 0085447c  58                   pop eax
// 0085447d  44                   inc esp
// 0085447e  8500                 test dword ptr [eax], eax
// 00854480  2d4485004f           sub eax, 0x4f008544
// 00854485  44                   inc esp
// 00854486  8500                 test dword ptr [eax], eax
// library lua-5.1.4/ldo.c (function _luaD_seterrorobj)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
