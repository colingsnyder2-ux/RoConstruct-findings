// roc 2009-06 004cf660  unit: XVCrashReporter::XV?$mf1::V?$bind_t::?$thread_data  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cf660
//
// 004cf660  64a100000000         mov eax, dword ptr fs:[0]
// 004cf666  6aff                 push -1
// 004cf668  689eab8500           push 0x85ab9e
// 004cf66d  50                   push eax
// 004cf66e  b801000000           mov eax, 1
// 004cf673  64892500000000       mov dword ptr fs:[0], esp
// 004cf67a  840560e3a300         test byte ptr [0xa3e360], al
// 004cf680  7530                 jne 0x4cf6b2
// 004cf682  090560e3a300         or dword ptr [0xa3e360], eax
// 004cf688  68807e8c00           push 0x8c7e80
// 004cf68d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cf695  e8f6adf3ff           call 0x40a490
// 004cf69a  50                   push eax
// 004cf69b  b9a0e2a300           mov ecx, 0xa3e2a0
// 004cf6a0  e83ba11200           call 0x5f97e0
// 004cf6a5  6860598900           push 0x895960
// 004cf6aa  e84ca42400           call 0x719afb
// 004cf6af  83c404               add esp, 4
// 004cf6b2  8b0c24               mov ecx, dword ptr [esp]
// 004cf6b5  b8a0e2a300           mov eax, 0xa3e2a0
// 004cf6ba  64890d00000000       mov dword ptr fs:[0], ecx
// 004cf6c1  83c40c               add esp, 0xc
// 004cf6c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
