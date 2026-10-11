// roc 2009-12 004421e0  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004421e0
//
// 004421e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004421e4  83ec0c               sub esp, 0xc
// 004421e7  85c9                 test ecx, ecx
// 004421e9  7712                 ja 0x4421fd
// 004421eb  33c9                 xor ecx, ecx
// 004421ed  c1e104               shl ecx, 4
// 004421f0  51                   push ecx
// 004421f1  e86a163b00           call 0x7f3860
// 004421f6  83c404               add esp, 4
// 004421f9  83c40c               add esp, 0xc
// 004421fc  c3                   ret 
// 004421fd  83c8ff               or eax, 0xffffffff
// 00442200  33d2                 xor edx, edx
// 00442202  f7f1                 div ecx
// 00442204  83f810               cmp eax, 0x10
// 00442207  73e4                 jae 0x4421ed
// 00442209  8d442410             lea eax, [esp + 0x10]
// 0044220d  50                   push eax
// 0044220e  8d4c2404             lea ecx, [esp + 4]
// 00442212  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044221a  ff1548b79800         call dword ptr [0x98b748]
// 00442220  6838efa800           push 0xa8ef38
// 00442225  8d4c2404             lea ecx, [esp + 4]
// 00442229  51                   push ecx
// 0044222a  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 00442232  e841263b00           call 0x7f4878
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$_Allocate@UIDREFItem@MergeBinder@RBX@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@IPAU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
