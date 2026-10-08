// roc 2007-08 0056c2c0  unit: RBX::VStandardOut::?$Notifier  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c2c0
//
// 0056c2c0  6aff                 push -1
// 0056c2c2  68c3477500           push 0x7547c3
// 0056c2c7  64a100000000         mov eax, dword ptr fs:[0]
// 0056c2cd  50                   push eax
// 0056c2ce  64892500000000       mov dword ptr fs:[0], esp
// 0056c2d5  51                   push ecx
// 0056c2d6  56                   push esi
// 0056c2d7  8bf1                 mov esi, ecx
// 0056c2d9  33c0                 xor eax, eax
// 0056c2db  894618               mov dword ptr [esi + 0x18], eax
// 0056c2de  89742404             mov dword ptr [esp + 4], esi
// 0056c2e2  89461c               mov dword ptr [esi + 0x1c], eax
// 0056c2e5  894608               mov dword ptr [esi + 8], eax
// 0056c2e8  89460c               mov dword ptr [esi + 0xc], eax
// 0056c2eb  894610               mov dword ptr [esi + 0x10], eax
// 0056c2ee  89442410             mov dword ptr [esp + 0x10], eax
// 0056c2f2  894614               mov dword ptr [esi + 0x14], eax
// 0056c2f5  8d4e20               lea ecx, [esi + 0x20]
// 0056c2f8  c644241001           mov byte ptr [esp + 0x10], 1
// 0056c2fd  c706e09e7a00         mov dword ptr [esi], 0x7a9ee0
// 0056c303  e8f8931b00           call 0x725700
// 0056c308  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056c30c  8bc6                 mov eax, esi
// 0056c30e  5e                   pop esi
// 0056c30f  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c316  83c410               add esp, 0x10
// 0056c319  c3                   ret 
// library rbxgs/util\standardout.cpp (function ??0StandardOut@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
