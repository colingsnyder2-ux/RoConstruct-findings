// roc 2007-08 005316a0  unit: RBX::VModelInstance::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005316a0
//
// 005316a0  64a100000000         mov eax, dword ptr fs:[0]
// 005316a6  6aff                 push -1
// 005316a8  687e077500           push 0x75077e
// 005316ad  50                   push eax
// 005316ae  b801000000           mov eax, 1
// 005316b3  64892500000000       mov dword ptr fs:[0], esp
// 005316ba  840570108c00         test byte ptr [0x8c1070], al
// 005316c0  7530                 jne 0x5316f2
// 005316c2  090570108c00         or dword ptr [0x8c1070], eax
// 005316c8  68e08e8900           push 0x898ee0
// 005316cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005316d5  e856ffffff           call 0x531630
// 005316da  50                   push eax
// 005316db  b9e80f8c00           mov ecx, 0x8c0fe8
// 005316e0  e81bf50300           call 0x570c00
// 005316e5  6800947700           push 0x779400
// 005316ea  e834f60f00           call 0x630d23
// 005316ef  83c404               add esp, 4
// 005316f2  8b0c24               mov ecx, dword ptr [esp]
// 005316f5  b8e80f8c00           mov eax, 0x8c0fe8
// 005316fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00531701  83c40c               add esp, 0xc
// 00531704  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
