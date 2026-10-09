// roc 2007-03 00588670  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588670
//
// 00588670  64a100000000         mov eax, dword ptr fs:[0]
// 00588676  6aff                 push -1
// 00588678  683e757500           push 0x75753e
// 0058867d  50                   push eax
// 0058867e  b801000000           mov eax, 1
// 00588683  64892500000000       mov dword ptr fs:[0], esp
// 0058868a  840558dc8b00         test byte ptr [0x8bdc58], al
// 00588690  7530                 jne 0x5886c2
// 00588692  090558dc8b00         or dword ptr [0x8bdc58], eax
// 00588698  6870207b00           push 0x7b2070
// 0058869d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005886a5  e8b614e9ff           call 0x419b60
// 005886aa  50                   push eax
// 005886ab  b9d0db8b00           mov ecx, 0x8bdbd0
// 005886b0  e82b87feff           call 0x570de0
// 005886b5  68c0a57700           push 0x77a5c0
// 005886ba  e8f46a0900           call 0x61f1b3
// 005886bf  83c404               add esp, 4
// 005886c2  8b0c24               mov ecx, dword ptr [esp]
// 005886c5  b8d0db8b00           mov eax, 0x8bdbd0
// 005886ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005886d1  83c40c               add esp, 0xc
// 005886d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
