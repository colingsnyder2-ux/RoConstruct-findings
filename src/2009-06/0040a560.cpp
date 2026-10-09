// roc 2009-06 0040a560  unit: RBX::Reflection::ClassDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040a560
//
// 0040a560  64a100000000         mov eax, dword ptr fs:[0]
// 0040a566  6aff                 push -1
// 0040a568  688ed08400           push 0x84d08e
// 0040a56d  50                   push eax
// 0040a56e  b801000000           mov eax, 1
// 0040a573  64892500000000       mov dword ptr fs:[0], esp
// 0040a57a  8405889aa300         test byte ptr [0xa39a88], al
// 0040a580  7530                 jne 0x40a5b2
// 0040a582  0905889aa300         or dword ptr [0xa39a88], eax
// 0040a588  6820d28a00           push 0x8ad220
// 0040a58d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040a595  e856ffffff           call 0x40a4f0
// 0040a59a  50                   push eax
// 0040a59b  b9c899a300           mov ecx, 0xa399c8
// 0040a5a0  e83bf21e00           call 0x5f97e0
// 0040a5a5  68d03b8900           push 0x893bd0
// 0040a5aa  e84cf53000           call 0x719afb
// 0040a5af  83c404               add esp, 4
// 0040a5b2  8b0c24               mov ecx, dword ptr [esp]
// 0040a5b5  b8c899a300           mov eax, 0xa399c8
// 0040a5ba  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a5c1  83c40c               add esp, 0xc
// 0040a5c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
