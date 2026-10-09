// roc 2007-03 00588830  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588830
//
// 00588830  64a100000000         mov eax, dword ptr fs:[0]
// 00588836  6aff                 push -1
// 00588838  68be757500           push 0x7575be
// 0058883d  50                   push eax
// 0058883e  b801000000           mov eax, 1
// 00588843  64892500000000       mov dword ptr fs:[0], esp
// 0058884a  840598de8b00         test byte ptr [0x8bde98], al
// 00588850  7530                 jne 0x588882
// 00588852  090598de8b00         or dword ptr [0x8bde98], eax
// 00588858  6810ac7b00           push 0x7bac10
// 0058885d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588865  e8f612e9ff           call 0x419b60
// 0058886a  50                   push eax
// 0058886b  b910de8b00           mov ecx, 0x8bde10
// 00588870  e86b85feff           call 0x570de0
// 00588875  6880a57700           push 0x77a580
// 0058887a  e834690900           call 0x61f1b3
// 0058887f  83c404               add esp, 4
// 00588882  8b0c24               mov ecx, dword ptr [esp]
// 00588885  b810de8b00           mov eax, 0x8bde10
// 0058888a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588891  83c40c               add esp, 0xc
// 00588894  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
