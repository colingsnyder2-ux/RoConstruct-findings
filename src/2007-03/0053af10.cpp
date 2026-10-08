// roc 2007-03 0053af10  unit: seg_00530000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053af10
//
// 0053af10  6aff                 push -1
// 0053af12  686bc37500           push 0x75c36b
// 0053af17  64a100000000         mov eax, dword ptr fs:[0]
// 0053af1d  50                   push eax
// 0053af1e  64892500000000       mov dword ptr fs:[0], esp
// 0053af25  51                   push ecx
// 0053af26  56                   push esi
// 0053af27  6a14                 push 0x14
// 0053af29  8bf1                 mov esi, ecx
// 0053af2b  e8d8310e00           call 0x61e108
// 0053af30  83c404               add esp, 4
// 0053af33  89442404             mov dword ptr [esp + 4], eax
// 0053af37  85c0                 test eax, eax
// 0053af39  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053af41  741b                 je 0x53af5e
// 0053af43  83c604               add esi, 4
// 0053af46  56                   push esi
// 0053af47  8bc8                 mov ecx, eax
// 0053af49  e862ffffff           call 0x53aeb0
// 0053af4e  5e                   pop esi
// 0053af4f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053af53  64890d00000000       mov dword ptr fs:[0], ecx
// 0053af5a  83c410               add esp, 0x10
// 0053af5d  c3                   ret 
// 0053af5e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053af62  33c0                 xor eax, eax
// 0053af64  5e                   pop esi
// 0053af65  64890d00000000       mov dword ptr fs:[0], ecx
// 0053af6c  83c410               add esp, 0x10
// 0053af6f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
