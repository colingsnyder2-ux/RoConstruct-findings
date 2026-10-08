// roc 2007-08 00570e30  unit: RBX::Reflection::ClassDescriptor  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570e30
//
// 00570e30  6aff                 push -1
// 00570e32  68c84d7500           push 0x754dc8
// 00570e37  64a100000000         mov eax, dword ptr fs:[0]
// 00570e3d  50                   push eax
// 00570e3e  64892500000000       mov dword ptr fs:[0], esp
// 00570e45  51                   push ecx
// 00570e46  56                   push esi
// 00570e47  8bf1                 mov esi, ecx
// 00570e49  89742404             mov dword ptr [esp + 4], esi
// 00570e4d  e8ae481b00           call 0x725700
// 00570e52  8d4e08               lea ecx, [esi + 8]
// 00570e55  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00570e5d  e88e591b00           call 0x7267f0
// 00570e62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00570e66  c6462000             mov byte ptr [esi + 0x20], 0
// 00570e6a  8bc6                 mov eax, esi
// 00570e6c  5e                   pop esi
// 00570e6d  64890d00000000       mov dword ptr fs:[0], ecx
// 00570e74  83c410               add esp, 0x10
// 00570e77  c3                   ret 
// library rbxgs/util\boost.cpp (function ??0data@worker_thread@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
