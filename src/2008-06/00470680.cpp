// from server: 100% by auto
// roc 2008-06 00470680  unit: RBX::LDraw2Lua::LuaWriter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00470680
//
// 00470680  51                   push ecx
// 00470681  53                   push ebx
// 00470682  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00470686  55                   push ebp
// 00470687  56                   push esi
// 00470688  57                   push edi
// 00470689  8bf1                 mov esi, ecx
// 0047068b  8b4608               mov eax, dword ptr [esi + 8]
// 0047068e  8d3c9d00000000       lea edi, [ebx*4]
// 00470695  6a10                 push 0x10
// 00470697  57                   push edi
// 00470698  89442418             mov dword ptr [esp + 0x18], eax
// 0047069c  e8df7e0900           call 0x508580
// 004706a1  57                   push edi
// 004706a2  6a00                 push 0
// 004706a4  50                   push eax
// 004706a5  894608               mov dword ptr [esi + 8], eax
// 004706a8  e883830900           call 0x508a30
// 004706ad  33ed                 xor ebp, ebp
// 004706af  83c414               add esp, 0x14
// 004706b2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004706b5  7e2f                 jle 0x4706e6
// 004706b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004706bb  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004706be  85c9                 test ecx, ecx
// 004706c0  741e                 je 0x4706e0
// 004706c2  8b01                 mov eax, dword ptr [ecx]
// 004706c4  33d2                 xor edx, edx
// 004706c6  f7f3                 div ebx
// 004706c8  8b4608               mov eax, dword ptr [esi + 8]
// 004706cb  8b7924               mov edi, dword ptr [ecx + 0x24]
// 004706ce  8b0490               mov eax, dword ptr [eax + edx*4]
// 004706d1  894124               mov dword ptr [ecx + 0x24], eax
// 004706d4  8b4608               mov eax, dword ptr [esi + 8]
// 004706d7  890c90               mov dword ptr [eax + edx*4], ecx
// 004706da  8bcf                 mov ecx, edi
// 004706dc  85ff                 test edi, edi
// 004706de  75e2                 jne 0x4706c2
// 004706e0  45                   inc ebp
// 004706e1  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004706e4  7cd1                 jl 0x4706b7
// 004706e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004706ea  51                   push ecx
// 004706eb  e830760900           call 0x507d20
// 004706f0  83c404               add esp, 4
// 004706f3  5f                   pop edi
// 004706f4  895e0c               mov dword ptr [esi + 0xc], ebx
// 004706f7  5e                   pop esi
// 004706f8  5d                   pop ebp
// 004706f9  5b                   pop ebx
// 004706fa  59                   pop ecx
// 004706fb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
