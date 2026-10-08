// roc 2010-06 008d2cb0  unit: Ogre::VisualEngine  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d2cb0
//
// 008d2cb0  83ec08               sub esp, 8
// 008d2cb3  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d2cb7  53                   push ebx
// 008d2cb8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008d2cbc  56                   push esi
// 008d2cbd  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008d2cc1  57                   push edi
// 008d2cc2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008d2cc6  32c0                 xor al, al
// 008d2cc8  88442410             mov byte ptr [esp + 0x10], al
// 008d2ccc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d2cd0  8844240c             mov byte ptr [esp + 0xc], al
// 008d2cd4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d2cd8  50                   push eax
// 008d2cd9  51                   push ecx
// 008d2cda  52                   push edx
// 008d2cdb  56                   push esi
// 008d2cdc  57                   push edi
// 008d2cdd  53                   push ebx
// 008d2cde  e81df3ffff           call 0x8d2000
// 008d2ce3  8bc7                 mov eax, edi
// 008d2ce5  2bc3                 sub eax, ebx
// 008d2ce7  83c418               add esp, 0x18
// 008d2cea  c1f804               sar eax, 4
// 008d2ced  c1e004               shl eax, 4
// 008d2cf0  5f                   pop edi
// 008d2cf1  03c6                 add eax, esi
// 008d2cf3  5e                   pop esi
// 008d2cf4  5b                   pop ebx
// 008d2cf5  83c408               add esp, 8
// 008d2cf8  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
