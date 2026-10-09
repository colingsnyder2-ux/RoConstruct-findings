// roc 2007-03 005887c0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005887c0
//
// 005887c0  64a100000000         mov eax, dword ptr fs:[0]
// 005887c6  6aff                 push -1
// 005887c8  689e757500           push 0x75759e
// 005887cd  50                   push eax
// 005887ce  b801000000           mov eax, 1
// 005887d3  64892500000000       mov dword ptr fs:[0], esp
// 005887da  840508de8b00         test byte ptr [0x8bde08], al
// 005887e0  7530                 jne 0x588812
// 005887e2  090508de8b00         or dword ptr [0x8bde08], eax
// 005887e8  6828457b00           push 0x7b4528
// 005887ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005887f5  e86613e9ff           call 0x419b60
// 005887fa  50                   push eax
// 005887fb  b980dd8b00           mov ecx, 0x8bdd80
// 00588800  e8db85feff           call 0x570de0
// 00588805  6890a57700           push 0x77a590
// 0058880a  e8a4690900           call 0x61f1b3
// 0058880f  83c404               add esp, 4
// 00588812  8b0c24               mov ecx, dword ptr [esp]
// 00588815  b880dd8b00           mov eax, 0x8bdd80
// 0058881a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588821  83c40c               add esp, 0xc
// 00588824  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
