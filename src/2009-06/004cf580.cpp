// roc 2009-06 004cf580  unit: XVCrashReporter::XV?$mf1::V?$bind_t::?$thread_data  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cf580
//
// 004cf580  64a100000000         mov eax, dword ptr fs:[0]
// 004cf586  6aff                 push -1
// 004cf588  685eab8500           push 0x85ab5e
// 004cf58d  50                   push eax
// 004cf58e  b801000000           mov eax, 1
// 004cf593  64892500000000       mov dword ptr fs:[0], esp
// 004cf59a  8405d0e1a300         test byte ptr [0xa3e1d0], al
// 004cf5a0  7530                 jne 0x4cf5d2
// 004cf5a2  0905d0e1a300         or dword ptr [0xa3e1d0], eax
// 004cf5a8  68f8678c00           push 0x8c67f8
// 004cf5ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cf5b5  e836aff3ff           call 0x40a4f0
// 004cf5ba  50                   push eax
// 004cf5bb  b910e1a300           mov ecx, 0xa3e110
// 004cf5c0  e81ba21200           call 0x5f97e0
// 004cf5c5  6880598900           push 0x895980
// 004cf5ca  e82ca52400           call 0x719afb
// 004cf5cf  83c404               add esp, 4
// 004cf5d2  8b0c24               mov ecx, dword ptr [esp]
// 004cf5d5  b810e1a300           mov eax, 0xa3e110
// 004cf5da  64890d00000000       mov dword ptr fs:[0], ecx
// 004cf5e1  83c40c               add esp, 0xc
// 004cf5e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
