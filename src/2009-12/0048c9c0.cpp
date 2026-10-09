// roc 2009-12 0048c9c0  unit: G3D::Shader  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0048c9c0
//
// 0048c9c0  83ec08               sub esp, 8
// 0048c9c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048c9c7  53                   push ebx
// 0048c9c8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0048c9cc  56                   push esi
// 0048c9cd  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048c9d1  57                   push edi
// 0048c9d2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0048c9d6  32c0                 xor al, al
// 0048c9d8  88442410             mov byte ptr [esp + 0x10], al
// 0048c9dc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048c9e0  8844240c             mov byte ptr [esp + 0xc], al
// 0048c9e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048c9e8  50                   push eax
// 0048c9e9  51                   push ecx
// 0048c9ea  52                   push edx
// 0048c9eb  56                   push esi
// 0048c9ec  57                   push edi
// 0048c9ed  53                   push ebx
// 0048c9ee  e81df3ffff           call 0x48bd10
// 0048c9f3  8bc7                 mov eax, edi
// 0048c9f5  2bc3                 sub eax, ebx
// 0048c9f7  83c418               add esp, 0x18
// 0048c9fa  c1f804               sar eax, 4
// 0048c9fd  c1e004               shl eax, 4
// 0048ca00  5f                   pop edi
// 0048ca01  03c6                 add eax, esi
// 0048ca03  5e                   pop esi
// 0048ca04  5b                   pop ebx
// 0048ca05  83c408               add esp, 8
// 0048ca08  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
