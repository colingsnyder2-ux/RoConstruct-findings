// roc 2008-06 005661b0  unit: RBX::VTeam::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005661b0
//
// 005661b0  64a100000000         mov eax, dword ptr fs:[0]
// 005661b6  6aff                 push -1
// 005661b8  682ef47c00           push 0x7cf42e
// 005661bd  50                   push eax
// 005661be  b801000000           mov eax, 1
// 005661c3  64892500000000       mov dword ptr fs:[0], esp
// 005661ca  8405a8489700         test byte ptr [0x9748a8], al
// 005661d0  7530                 jne 0x566202
// 005661d2  0905a8489700         or dword ptr [0x9748a8], eax
// 005661d8  68e8e88200           push 0x82e8e8
// 005661dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005661e5  e8964beaff           call 0x40ad80
// 005661ea  50                   push eax
// 005661eb  b9e8479700           mov ecx, 0x9747e8
// 005661f0  e8fba60000           call 0x5708f0
// 005661f5  6850d07f00           push 0x7fd050
// 005661fa  e8b0b51300           call 0x6a17af
// 005661ff  83c404               add esp, 4
// 00566202  8b0c24               mov ecx, dword ptr [esp]
// 00566205  b8e8479700           mov eax, 0x9747e8
// 0056620a  64890d00000000       mov dword ptr fs:[0], ecx
// 00566211  83c40c               add esp, 0xc
// 00566214  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
