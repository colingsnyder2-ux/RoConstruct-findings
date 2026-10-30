// from server: 100% by auto
// roc 2009-06 006ecc30  unit: RBX::PartDropTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ecc30
//
// 006ecc30  56                   push esi
// 006ecc31  8b742408             mov esi, dword ptr [esp + 8]
// 006ecc35  57                   push edi
// 006ecc36  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ecc3a  83ffe5               cmp edi, -0x1b
// 006ecc3d  7609                 jbe 0x6ecc48
// 006ecc3f  56                   push esi
// 006ecc40  e8fb0a0000           call 0x6ed740
// 006ecc45  83c404               add esp, 4
// 006ecc48  8d4718               lea eax, [edi + 0x18]
// 006ecc4b  50                   push eax
// 006ecc4c  6a00                 push 0
// 006ecc4e  6a00                 push 0
// 006ecc50  56                   push esi
// 006ecc51  e80a0b0000           call 0x6ed760
// 006ecc56  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006ecc59  8a5114               mov dl, byte ptr [ecx + 0x14]
// 006ecc5c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ecc60  897810               mov dword ptr [eax + 0x10], edi
// 006ecc63  80e203               and dl, 3
// 006ecc66  885005               mov byte ptr [eax + 5], dl
// 006ecc69  c6400407             mov byte ptr [eax + 4], 7
// 006ecc6d  c7400800000000       mov dword ptr [eax + 8], 0
// 006ecc74  89480c               mov dword ptr [eax + 0xc], ecx
// 006ecc77  8b5610               mov edx, dword ptr [esi + 0x10]
// 006ecc7a  8b4a70               mov ecx, dword ptr [edx + 0x70]
// 006ecc7d  8b11                 mov edx, dword ptr [ecx]
// 006ecc7f  8910                 mov dword ptr [eax], edx
// 006ecc81  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006ecc84  8b5170               mov edx, dword ptr [ecx + 0x70]
// 006ecc87  83c410               add esp, 0x10
// 006ecc8a  5f                   pop edi
// 006ecc8b  8902                 mov dword ptr [edx], eax
// 006ecc8d  5e                   pop esi
// 006ecc8e  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_newudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
