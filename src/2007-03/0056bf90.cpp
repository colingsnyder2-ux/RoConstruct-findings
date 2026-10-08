// roc 2007-03 0056bf90  unit: seg_00560000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056bf90
//
// 0056bf90  6aff                 push -1
// 0056bf92  68335c7500           push 0x755c33
// 0056bf97  64a100000000         mov eax, dword ptr fs:[0]
// 0056bf9d  50                   push eax
// 0056bf9e  64892500000000       mov dword ptr fs:[0], esp
// 0056bfa5  51                   push ecx
// 0056bfa6  56                   push esi
// 0056bfa7  8bf1                 mov esi, ecx
// 0056bfa9  33c0                 xor eax, eax
// 0056bfab  894618               mov dword ptr [esi + 0x18], eax
// 0056bfae  89742404             mov dword ptr [esp + 4], esi
// 0056bfb2  89461c               mov dword ptr [esi + 0x1c], eax
// 0056bfb5  894608               mov dword ptr [esi + 8], eax
// 0056bfb8  89460c               mov dword ptr [esi + 0xc], eax
// 0056bfbb  894610               mov dword ptr [esi + 0x10], eax
// 0056bfbe  89442410             mov dword ptr [esp + 0x10], eax
// 0056bfc2  894614               mov dword ptr [esi + 0x14], eax
// 0056bfc5  8d4e20               lea ecx, [esi + 0x20]
// 0056bfc8  c644241001           mov byte ptr [esp + 0x10], 1
// 0056bfcd  c706d8b57a00         mov dword ptr [esi], 0x7ab5d8
// 0056bfd3  e858aa1b00           call 0x726a30
// 0056bfd8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056bfdc  8bc6                 mov eax, esi
// 0056bfde  5e                   pop esi
// 0056bfdf  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bfe6  83c410               add esp, 0x10
// 0056bfe9  c3                   ret 
// library rbxgs/util\standardout.cpp (function ??0StandardOut@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
