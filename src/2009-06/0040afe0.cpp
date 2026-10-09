// roc 2009-06 0040afe0  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040afe0
//
// 0040afe0  64a100000000         mov eax, dword ptr fs:[0]
// 0040afe6  6aff                 push -1
// 0040afe8  687ed18400           push 0x84d17e
// 0040afed  50                   push eax
// 0040afee  b801000000           mov eax, 1
// 0040aff3  64892500000000       mov dword ptr fs:[0], esp
// 0040affa  8405f89ca300         test byte ptr [0xa39cf8], al
// 0040b000  7530                 jne 0x40b032
// 0040b002  0905f89ca300         or dword ptr [0xa39cf8], eax
// 0040b008  68f8269e00           push 0x9e26f8
// 0040b00d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040b015  e856ffffff           call 0x40af70
// 0040b01a  50                   push eax
// 0040b01b  b9389ca300           mov ecx, 0xa39c38
// 0040b020  e8bbe71e00           call 0x5f97e0
// 0040b025  68b03b8900           push 0x893bb0
// 0040b02a  e8ccea3000           call 0x719afb
// 0040b02f  83c404               add esp, 4
// 0040b032  8b0c24               mov ecx, dword ptr [esp]
// 0040b035  b8389ca300           mov eax, 0xa39c38
// 0040b03a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b041  83c40c               add esp, 0xc
// 0040b044  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
