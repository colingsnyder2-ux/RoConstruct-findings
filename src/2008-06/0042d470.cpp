// roc 2008-06 0042d470  unit: boost::any::H::?$holder  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d470
//
// 0042d470  55                   push ebp
// 0042d471  8bec                 mov ebp, esp
// 0042d473  6aff                 push -1
// 0042d475  6860f87b00           push 0x7bf860
// 0042d47a  64a100000000         mov eax, dword ptr fs:[0]
// 0042d480  50                   push eax
// 0042d481  64892500000000       mov dword ptr fs:[0], esp
// 0042d488  83ec08               sub esp, 8
// 0042d48b  53                   push ebx
// 0042d48c  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0042d48f  56                   push esi
// 0042d490  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0042d493  57                   push edi
// 0042d494  8b7d08               mov edi, dword ptr [ebp + 8]
// 0042d497  8965f0               mov dword ptr [ebp - 0x10], esp
// 0042d49a  897dec               mov dword ptr [ebp - 0x14], edi
// 0042d49d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0042d4a4  85f6                 test esi, esi
// 0042d4a6  7638                 jbe 0x42d4e0
// 0042d4a8  53                   push ebx
// 0042d4a9  57                   push edi
// 0042d4aa  e811fbffff           call 0x42cfc0
// 0042d4af  83c408               add esp, 8
// 0042d4b2  4e                   dec esi
// 0042d4b3  83c708               add edi, 8
// 0042d4b6  897d08               mov dword ptr [ebp + 8], edi
// 0042d4b9  ebe9                 jmp 0x42d4a4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Uninit_fill_n@PAVValue@Reflection@RBX@@IV123@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@YAXPAVValue@Reflection@RBX@@IABV123@AAV?$allocator@VValue@Reflection@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
