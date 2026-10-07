// roc 2010-06 00722cf0  unit: RBX::UniversalTool  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722cf0
//
// 00722cf0  8b542408             mov edx, dword ptr [esp + 8]
// 00722cf4  83ec08               sub esp, 8
// 00722cf7  8bc2                 mov eax, edx
// 00722cf9  56                   push esi
// 00722cfa  8d7001               lea esi, [eax + 1]
// 00722cfd  8d4900               lea ecx, [ecx]
// 00722d00  8a08                 mov cl, byte ptr [eax]
// 00722d02  40                   inc eax
// 00722d03  84c9                 test cl, cl
// 00722d05  75f9                 jne 0x722d00
// 00722d07  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00722d0b  2bc6                 sub eax, esi
// 00722d0d  52                   push edx
// 00722d0e  8944240c             mov dword ptr [esp + 0xc], eax
// 00722d12  8d442408             lea eax, [esp + 8]
// 00722d16  50                   push eax
// 00722d17  68a02c7200           push 0x722ca0
// 00722d1c  51                   push ecx
// 00722d1d  89542414             mov dword ptr [esp + 0x14], edx
// 00722d21  e81af0ffff           call 0x721d40
// 00722d26  83c410               add esp, 0x10
// 00722d29  5e                   pop esi
// 00722d2a  83c408               add esp, 8
// 00722d2d  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
