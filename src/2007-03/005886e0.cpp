// roc 2007-03 005886e0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005886e0
//
// 005886e0  64a100000000         mov eax, dword ptr fs:[0]
// 005886e6  6aff                 push -1
// 005886e8  685e757500           push 0x75755e
// 005886ed  50                   push eax
// 005886ee  b801000000           mov eax, 1
// 005886f3  64892500000000       mov dword ptr fs:[0], esp
// 005886fa  8405e8dc8b00         test byte ptr [0x8bdce8], al
// 00588700  7530                 jne 0x588732
// 00588702  0905e8dc8b00         or dword ptr [0x8bdce8], eax
// 00588708  6830347b00           push 0x7b3430
// 0058870d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588715  e84614e9ff           call 0x419b60
// 0058871a  50                   push eax
// 0058871b  b960dc8b00           mov ecx, 0x8bdc60
// 00588720  e8bb86feff           call 0x570de0
// 00588725  68b0a57700           push 0x77a5b0
// 0058872a  e8846a0900           call 0x61f1b3
// 0058872f  83c404               add esp, 4
// 00588732  8b0c24               mov ecx, dword ptr [esp]
// 00588735  b860dc8b00           mov eax, 0x8bdc60
// 0058873a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588741  83c40c               add esp, 0xc
// 00588744  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
