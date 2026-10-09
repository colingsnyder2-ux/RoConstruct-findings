// roc 2007-03 005883d0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005883d0
//
// 005883d0  64a100000000         mov eax, dword ptr fs:[0]
// 005883d6  6aff                 push -1
// 005883d8  687e747500           push 0x75747e
// 005883dd  50                   push eax
// 005883de  b801000000           mov eax, 1
// 005883e3  64892500000000       mov dword ptr fs:[0], esp
// 005883ea  8405f8d88b00         test byte ptr [0x8bd8f8], al
// 005883f0  7530                 jne 0x588422
// 005883f2  0905f8d88b00         or dword ptr [0x8bd8f8], eax
// 005883f8  68e4508a00           push 0x8a50e4
// 005883fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588405  e85617e9ff           call 0x419b60
// 0058840a  50                   push eax
// 0058840b  b970d88b00           mov ecx, 0x8bd870
// 00588410  e8cb89feff           call 0x570de0
// 00588415  6820a67700           push 0x77a620
// 0058841a  e8946d0900           call 0x61f1b3
// 0058841f  83c404               add esp, 4
// 00588422  8b0c24               mov ecx, dword ptr [esp]
// 00588425  b870d88b00           mov eax, 0x8bd870
// 0058842a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588431  83c40c               add esp, 0xc
// 00588434  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
