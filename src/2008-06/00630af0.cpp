// roc 2008-06 00630af0  unit: RBX::BodyMover  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630af0
//
// 00630af0  64a100000000         mov eax, dword ptr fs:[0]
// 00630af6  6aff                 push -1
// 00630af8  682e9c7d00           push 0x7d9c2e
// 00630afd  50                   push eax
// 00630afe  b801000000           mov eax, 1
// 00630b03  64892500000000       mov dword ptr fs:[0], esp
// 00630b0a  840540c29700         test byte ptr [0x97c240], al
// 00630b10  7530                 jne 0x630b42
// 00630b12  090540c29700         or dword ptr [0x97c240], eax
// 00630b18  68f8c69500           push 0x95c6f8
// 00630b1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00630b25  e856a2ddff           call 0x40ad80
// 00630b2a  50                   push eax
// 00630b2b  b980c19700           mov ecx, 0x97c180
// 00630b30  e8bbfdf3ff           call 0x5708f0
// 00630b35  6840088000           push 0x800840
// 00630b3a  e8700c0700           call 0x6a17af
// 00630b3f  83c404               add esp, 4
// 00630b42  8b0c24               mov ecx, dword ptr [esp]
// 00630b45  b880c19700           mov eax, 0x97c180
// 00630b4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00630b51  83c40c               add esp, 0xc
// 00630b54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
