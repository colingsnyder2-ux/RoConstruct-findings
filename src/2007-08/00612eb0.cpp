// from server: 100% by auto
// roc 2007-08 00612eb0  unit: seg_00610000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612eb0
//
// 00612eb0  56                   push esi
// 00612eb1  8b742408             mov esi, dword ptr [esp + 8]
// 00612eb5  57                   push edi
// 00612eb6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00612eba  83ffe5               cmp edi, -0x1b
// 00612ebd  7609                 jbe 0x612ec8
// 00612ebf  56                   push esi
// 00612ec0  e80b0b0000           call 0x6139d0
// 00612ec5  83c404               add esp, 4
// 00612ec8  8d4718               lea eax, [edi + 0x18]
// 00612ecb  50                   push eax
// 00612ecc  6a00                 push 0
// 00612ece  6a00                 push 0
// 00612ed0  56                   push esi
// 00612ed1  e81a0b0000           call 0x6139f0
// 00612ed6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00612ed9  8a5114               mov dl, byte ptr [ecx + 0x14]
// 00612edc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00612ee0  897810               mov dword ptr [eax + 0x10], edi
// 00612ee3  80e203               and dl, 3
// 00612ee6  885005               mov byte ptr [eax + 5], dl
// 00612ee9  c6400407             mov byte ptr [eax + 4], 7
// 00612eed  c7400800000000       mov dword ptr [eax + 8], 0
// 00612ef4  89480c               mov dword ptr [eax + 0xc], ecx
// 00612ef7  8b5610               mov edx, dword ptr [esi + 0x10]
// 00612efa  8b4a70               mov ecx, dword ptr [edx + 0x70]
// 00612efd  8b11                 mov edx, dword ptr [ecx]
// 00612eff  8910                 mov dword ptr [eax], edx
// 00612f01  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00612f04  8b5170               mov edx, dword ptr [ecx + 0x70]
// 00612f07  83c410               add esp, 0x10
// 00612f0a  5f                   pop edi
// 00612f0b  8902                 mov dword ptr [edx], eax
// 00612f0d  5e                   pop esi
// 00612f0e  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_newudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
