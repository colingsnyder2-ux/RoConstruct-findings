// roc 2009-06 004cf510  unit: XVCrashReporter::XV?$mf1::V?$bind_t::?$thread_data  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cf510
//
// 004cf510  64a100000000         mov eax, dword ptr fs:[0]
// 004cf516  6aff                 push -1
// 004cf518  683eab8500           push 0x85ab3e
// 004cf51d  50                   push eax
// 004cf51e  b801000000           mov eax, 1
// 004cf523  64892500000000       mov dword ptr fs:[0], esp
// 004cf52a  840508e1a300         test byte ptr [0xa3e108], al
// 004cf530  7530                 jne 0x4cf562
// 004cf532  090508e1a300         or dword ptr [0xa3e108], eax
// 004cf538  6890718d00           push 0x8d7190
// 004cf53d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cf545  e8a6aff3ff           call 0x40a4f0
// 004cf54a  50                   push eax
// 004cf54b  b948e0a300           mov ecx, 0xa3e048
// 004cf550  e88ba21200           call 0x5f97e0
// 004cf555  6890598900           push 0x895990
// 004cf55a  e89ca52400           call 0x719afb
// 004cf55f  83c404               add esp, 4
// 004cf562  8b0c24               mov ecx, dword ptr [esp]
// 004cf565  b848e0a300           mov eax, 0xa3e048
// 004cf56a  64890d00000000       mov dword ptr fs:[0], ecx
// 004cf571  83c40c               add esp, 0xc
// 004cf574  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
