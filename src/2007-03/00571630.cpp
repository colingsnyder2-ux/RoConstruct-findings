// roc 2007-03 00571630  unit: seg_00570000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00571630
//
// 00571630  64a100000000         mov eax, dword ptr fs:[0]
// 00571636  6aff                 push -1
// 00571638  68ee627500           push 0x7562ee
// 0057163d  50                   push eax
// 0057163e  b801000000           mov eax, 1
// 00571643  64892500000000       mov dword ptr fs:[0], esp
// 0057164a  8405d0c98b00         test byte ptr [0x8bc9d0], al
// 00571650  7530                 jne 0x571682
// 00571652  0905d0c98b00         or dword ptr [0x8bc9d0], eax
// 00571658  68d0e68900           push 0x89e6d0
// 0057165d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00571665  e856ffffff           call 0x5715c0
// 0057166a  50                   push eax
// 0057166b  b948c98b00           mov ecx, 0x8bc948
// 00571670  e86bf7ffff           call 0x570de0
// 00571675  68e09d7700           push 0x779de0
// 0057167a  e834db0a00           call 0x61f1b3
// 0057167f  83c404               add esp, 4
// 00571682  8b0c24               mov ecx, dword ptr [esp]
// 00571685  b848c98b00           mov eax, 0x8bc948
// 0057168a  64890d00000000       mov dword ptr fs:[0], ecx
// 00571691  83c40c               add esp, 0xc
// 00571694  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
