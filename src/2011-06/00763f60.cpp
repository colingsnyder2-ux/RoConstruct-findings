// roc 2011-06 00763f60  unit: seg_00760000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763f60
//
// 00763f60  8b542408             mov edx, dword ptr [esp + 8]
// 00763f64  83ec08               sub esp, 8
// 00763f67  8bc2                 mov eax, edx
// 00763f69  56                   push esi
// 00763f6a  8d7001               lea esi, [eax + 1]
// 00763f6d  8d4900               lea ecx, [ecx]
// 00763f70  8a08                 mov cl, byte ptr [eax]
// 00763f72  40                   inc eax
// 00763f73  84c9                 test cl, cl
// 00763f75  75f9                 jne 0x763f70
// 00763f77  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00763f7b  2bc6                 sub eax, esi
// 00763f7d  52                   push edx
// 00763f7e  8944240c             mov dword ptr [esp + 0xc], eax
// 00763f82  8d442408             lea eax, [esp + 8]
// 00763f86  50                   push eax
// 00763f87  68103f7600           push 0x763f10
// 00763f8c  51                   push ecx
// 00763f8d  89542414             mov dword ptr [esp + 0x14], edx
// 00763f91  e8baf1ffff           call 0x763150
// 00763f96  83c410               add esp, 0x10
// 00763f99  5e                   pop esi
// 00763f9a  83c408               add esp, 8
// 00763f9d  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
