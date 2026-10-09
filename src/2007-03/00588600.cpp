// roc 2007-03 00588600  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588600
//
// 00588600  64a100000000         mov eax, dword ptr fs:[0]
// 00588606  6aff                 push -1
// 00588608  681e757500           push 0x75751e
// 0058860d  50                   push eax
// 0058860e  b801000000           mov eax, 1
// 00588613  64892500000000       mov dword ptr fs:[0], esp
// 0058861a  8405c8db8b00         test byte ptr [0x8bdbc8], al
// 00588620  7530                 jne 0x588652
// 00588622  0905c8db8b00         or dword ptr [0x8bdbc8], eax
// 00588628  6864207b00           push 0x7b2064
// 0058862d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588635  e82615e9ff           call 0x419b60
// 0058863a  50                   push eax
// 0058863b  b940db8b00           mov ecx, 0x8bdb40
// 00588640  e89b87feff           call 0x570de0
// 00588645  68d0a57700           push 0x77a5d0
// 0058864a  e8646b0900           call 0x61f1b3
// 0058864f  83c404               add esp, 4
// 00588652  8b0c24               mov ecx, dword ptr [esp]
// 00588655  b840db8b00           mov eax, 0x8bdb40
// 0058865a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588661  83c40c               add esp, 0xc
// 00588664  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
