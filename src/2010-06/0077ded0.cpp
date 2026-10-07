// roc 2010-06 0077ded0  unit: RBX::PartDropTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ded0
//
// 0077ded0  56                   push esi
// 0077ded1  8b742408             mov esi, dword ptr [esp + 8]
// 0077ded5  57                   push edi
// 0077ded6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0077deda  83ffe5               cmp edi, -0x1b
// 0077dedd  7609                 jbe 0x77dee8
// 0077dedf  56                   push esi
// 0077dee0  e8fb0a0000           call 0x77e9e0
// 0077dee5  83c404               add esp, 4
// 0077dee8  8d4718               lea eax, [edi + 0x18]
// 0077deeb  50                   push eax
// 0077deec  6a00                 push 0
// 0077deee  6a00                 push 0
// 0077def0  56                   push esi
// 0077def1  e80a0b0000           call 0x77ea00
// 0077def6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0077def9  8a5114               mov dl, byte ptr [ecx + 0x14]
// 0077defc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0077df00  897810               mov dword ptr [eax + 0x10], edi
// 0077df03  80e203               and dl, 3
// 0077df06  885005               mov byte ptr [eax + 5], dl
// 0077df09  c6400407             mov byte ptr [eax + 4], 7
// 0077df0d  c7400800000000       mov dword ptr [eax + 8], 0
// 0077df14  89480c               mov dword ptr [eax + 0xc], ecx
// 0077df17  8b5610               mov edx, dword ptr [esi + 0x10]
// 0077df1a  8b4a70               mov ecx, dword ptr [edx + 0x70]
// 0077df1d  8b11                 mov edx, dword ptr [ecx]
// 0077df1f  8910                 mov dword ptr [eax], edx
// 0077df21  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0077df24  8b5170               mov edx, dword ptr [ecx + 0x70]
// 0077df27  83c410               add esp, 0x10
// 0077df2a  5f                   pop edi
// 0077df2b  8902                 mov dword ptr [edx], eax
// 0077df2d  5e                   pop esi
// 0077df2e  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_newudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
