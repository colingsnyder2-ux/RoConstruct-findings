// roc 2009-06 004cf5f0  unit: XVCrashReporter::XV?$mf1::V?$bind_t::?$thread_data  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cf5f0
//
// 004cf5f0  64a100000000         mov eax, dword ptr fs:[0]
// 004cf5f6  6aff                 push -1
// 004cf5f8  687eab8500           push 0x85ab7e
// 004cf5fd  50                   push eax
// 004cf5fe  b801000000           mov eax, 1
// 004cf603  64892500000000       mov dword ptr fs:[0], esp
// 004cf60a  840598e2a300         test byte ptr [0xa3e298], al
// 004cf610  7530                 jne 0x4cf642
// 004cf612  090598e2a300         or dword ptr [0xa3e298], eax
// 004cf618  68b06c8c00           push 0x8c6cb0
// 004cf61d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cf625  e8c6aef3ff           call 0x40a4f0
// 004cf62a  50                   push eax
// 004cf62b  b9d8e1a300           mov ecx, 0xa3e1d8
// 004cf630  e8aba11200           call 0x5f97e0
// 004cf635  6870598900           push 0x895970
// 004cf63a  e8bca42400           call 0x719afb
// 004cf63f  83c404               add esp, 4
// 004cf642  8b0c24               mov ecx, dword ptr [esp]
// 004cf645  b8d8e1a300           mov eax, 0xa3e1d8
// 004cf64a  64890d00000000       mov dword ptr fs:[0], ecx
// 004cf651  83c40c               add esp, 0xc
// 004cf654  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
