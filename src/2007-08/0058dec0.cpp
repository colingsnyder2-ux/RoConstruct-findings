// roc 2007-08 0058dec0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058dec0
//
// 0058dec0  64a100000000         mov eax, dword ptr fs:[0]
// 0058dec6  6aff                 push -1
// 0058dec8  689e677500           push 0x75679e
// 0058decd  50                   push eax
// 0058dece  b801000000           mov eax, 1
// 0058ded3  64892500000000       mov dword ptr fs:[0], esp
// 0058deda  840510398c00         test byte ptr [0x8c3910], al
// 0058dee0  7530                 jne 0x58df12
// 0058dee2  090510398c00         or dword ptr [0x8c3910], eax
// 0058dee8  68e8197b00           push 0x7b19e8
// 0058deed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058def5  e896a7e8ff           call 0x418690
// 0058defa  50                   push eax
// 0058defb  b988388c00           mov ecx, 0x8c3888
// 0058df00  e8fb2cfeff           call 0x570c00
// 0058df05  6880aa7700           push 0x77aa80
// 0058df0a  e8142e0a00           call 0x630d23
// 0058df0f  83c404               add esp, 4
// 0058df12  8b0c24               mov ecx, dword ptr [esp]
// 0058df15  b888388c00           mov eax, 0x8c3888
// 0058df1a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058df21  83c40c               add esp, 0xc
// 0058df24  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
