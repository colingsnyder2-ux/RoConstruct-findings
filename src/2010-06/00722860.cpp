// from server: 100% by auto
// roc 2010-06 00722860  unit: RBX::UniversalTool  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722860
//
// 00722860  53                   push ebx
// 00722861  56                   push esi
// 00722862  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00722866  57                   push edi
// 00722867  8b7e08               mov edi, dword ptr [esi + 8]
// 0072286a  8d442410             lea eax, [esp + 0x10]
// 0072286e  50                   push eax
// 0072286f  6aff                 push -1
// 00722871  57                   push edi
// 00722872  e8d9eaffff           call 0x721350
// 00722877  8b0e                 mov ecx, dword ptr [esi]
// 00722879  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072287d  8bde                 mov ebx, esi
// 0072287f  2bd9                 sub ebx, ecx
// 00722881  81c30c020000         add ebx, 0x20c
// 00722887  83c40c               add esp, 0xc
// 0072288a  3bd3                 cmp edx, ebx
// 0072288c  771d                 ja 0x7228ab
// 0072288e  52                   push edx
// 0072288f  50                   push eax
// 00722890  51                   push ecx
// 00722891  e890650800           call 0x7a8e26
// 00722896  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072289a  010e                 add dword ptr [esi], ecx
// 0072289c  6afe                 push -2
// 0072289e  57                   push edi
// 0072289f  e8bce6ffff           call 0x720f60
// 007228a4  83c414               add esp, 0x14
// 007228a7  5f                   pop edi
// 007228a8  5e                   pop esi
// 007228a9  5b                   pop ebx
// 007228aa  c3                   ret 
// 007228ab  2bce                 sub ecx, esi
// 007228ad  83e90c               sub ecx, 0xc
// 007228b0  741e                 je 0x7228d0
// 007228b2  8b5608               mov edx, dword ptr [esi + 8]
// 007228b5  51                   push ecx
// 007228b6  8d5e0c               lea ebx, [esi + 0xc]
// 007228b9  53                   push ebx
// 007228ba  52                   push edx
// 007228bb  e890ecffff           call 0x721550
// 007228c0  ff4604               inc dword ptr [esi + 4]
// 007228c3  6afe                 push -2
// 007228c5  57                   push edi
// 007228c6  891e                 mov dword ptr [esi], ebx
// 007228c8  e833e7ffff           call 0x721000
// 007228cd  83c414               add esp, 0x14
// 007228d0  ff4604               inc dword ptr [esi + 4]
// 007228d3  56                   push esi
// 007228d4  e837feffff           call 0x722710
// 007228d9  83c404               add esp, 4
// 007228dc  5f                   pop edi
// 007228dd  5e                   pop esi
// 007228de  5b                   pop ebx
// 007228df  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addvalue)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
