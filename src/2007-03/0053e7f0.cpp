// roc 2007-03 0053e7f0  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053e7f0
//
// 0053e7f0  64a100000000         mov eax, dword ptr fs:[0]
// 0053e7f6  6aff                 push -1
// 0053e7f8  680e207500           push 0x75200e
// 0053e7fd  50                   push eax
// 0053e7fe  b801000000           mov eax, 1
// 0053e803  64892500000000       mov dword ptr fs:[0], esp
// 0053e80a  8405f0b78b00         test byte ptr [0x8bb7f0], al
// 0053e810  7530                 jne 0x53e842
// 0053e812  0905f0b78b00         or dword ptr [0x8bb7f0], eax
// 0053e818  686c858900           push 0x89856c
// 0053e81d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0053e825  e846fdffff           call 0x53e570
// 0053e82a  50                   push eax
// 0053e82b  b968b78b00           mov ecx, 0x8bb768
// 0053e830  e8ab250300           call 0x570de0
// 0053e835  6830957700           push 0x779530
// 0053e83a  e874090e00           call 0x61f1b3
// 0053e83f  83c404               add esp, 4
// 0053e842  8b0c24               mov ecx, dword ptr [esp]
// 0053e845  b868b78b00           mov eax, 0x8bb768
// 0053e84a  64890d00000000       mov dword ptr fs:[0], ecx
// 0053e851  83c40c               add esp, 0xc
// 0053e854  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
