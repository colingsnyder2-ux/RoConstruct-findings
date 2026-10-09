// roc 2009-06 004cf6d0  unit: XVCrashReporter::XV?$mf1::V?$bind_t::?$thread_data  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cf6d0
//
// 004cf6d0  64a100000000         mov eax, dword ptr fs:[0]
// 004cf6d6  6aff                 push -1
// 004cf6d8  68beab8500           push 0x85abbe
// 004cf6dd  50                   push eax
// 004cf6de  b801000000           mov eax, 1
// 004cf6e3  64892500000000       mov dword ptr fs:[0], esp
// 004cf6ea  840528e4a300         test byte ptr [0xa3e428], al
// 004cf6f0  7530                 jne 0x4cf722
// 004cf6f2  090528e4a300         or dword ptr [0xa3e428], eax
// 004cf6f8  6864309f00           push 0x9f3064
// 004cf6fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cf705  e8e6adf3ff           call 0x40a4f0
// 004cf70a  50                   push eax
// 004cf70b  b968e3a300           mov ecx, 0xa3e368
// 004cf710  e8cba01200           call 0x5f97e0
// 004cf715  6850598900           push 0x895950
// 004cf71a  e8dca32400           call 0x719afb
// 004cf71f  83c404               add esp, 4
// 004cf722  8b0c24               mov ecx, dword ptr [esp]
// 004cf725  b868e3a300           mov eax, 0xa3e368
// 004cf72a  64890d00000000       mov dword ptr fs:[0], ecx
// 004cf731  83c40c               add esp, 0xc
// 004cf734  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
