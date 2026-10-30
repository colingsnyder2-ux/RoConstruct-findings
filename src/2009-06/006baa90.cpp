// from server: 100% by auto
// roc 2009-06 006baa90  unit: RBX::UniversalTool  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006baa90
//
// 006baa90  8b542408             mov edx, dword ptr [esp + 8]
// 006baa94  83ec08               sub esp, 8
// 006baa97  8bc2                 mov eax, edx
// 006baa99  56                   push esi
// 006baa9a  8d7001               lea esi, [eax + 1]
// 006baa9d  8d4900               lea ecx, [ecx]
// 006baaa0  8a08                 mov cl, byte ptr [eax]
// 006baaa2  40                   inc eax
// 006baaa3  84c9                 test cl, cl
// 006baaa5  75f9                 jne 0x6baaa0
// 006baaa7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006baaab  2bc6                 sub eax, esi
// 006baaad  52                   push edx
// 006baaae  8944240c             mov dword ptr [esp + 0xc], eax
// 006baab2  8d442408             lea eax, [esp + 8]
// 006baab6  50                   push eax
// 006baab7  6840aa6b00           push 0x6baa40
// 006baabc  51                   push ecx
// 006baabd  89542414             mov dword ptr [esp + 0x14], edx
// 006baac1  e8aaf0ffff           call 0x6b9b70
// 006baac6  83c410               add esp, 0x10
// 006baac9  5e                   pop esi
// 006baaca  83c408               add esp, 8
// 006baacd  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
