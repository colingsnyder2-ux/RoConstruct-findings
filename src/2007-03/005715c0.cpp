// roc 2007-03 005715c0  unit: seg_00570000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005715c0
//
// 005715c0  64a100000000         mov eax, dword ptr fs:[0]
// 005715c6  6aff                 push -1
// 005715c8  68ce627500           push 0x7562ce
// 005715cd  50                   push eax
// 005715ce  b801000000           mov eax, 1
// 005715d3  64892500000000       mov dword ptr fs:[0], esp
// 005715da  840540c98b00         test byte ptr [0x8bc940], al
// 005715e0  7530                 jne 0x571612
// 005715e2  090540c98b00         or dword ptr [0x8bc940], eax
// 005715e8  68c8e68900           push 0x89e6c8
// 005715ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005715f5  e856ffffff           call 0x571550
// 005715fa  50                   push eax
// 005715fb  b9b8c88b00           mov ecx, 0x8bc8b8
// 00571600  e8dbf7ffff           call 0x570de0
// 00571605  68f09d7700           push 0x779df0
// 0057160a  e8a4db0a00           call 0x61f1b3
// 0057160f  83c404               add esp, 4
// 00571612  8b0c24               mov ecx, dword ptr [esp]
// 00571615  b8b8c88b00           mov eax, 0x8bc8b8
// 0057161a  64890d00000000       mov dword ptr fs:[0], ecx
// 00571621  83c40c               add esp, 0xc
// 00571624  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
