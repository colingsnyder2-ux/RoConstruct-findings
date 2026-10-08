// roc 2007-08 0053d870  unit: RBX::VLocalScript::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d870
//
// 0053d870  64a100000000         mov eax, dword ptr fs:[0]
// 0053d876  6aff                 push -1
// 0053d878  686e117500           push 0x75116e
// 0053d87d  50                   push eax
// 0053d87e  b801000000           mov eax, 1
// 0053d883  64892500000000       mov dword ptr fs:[0], esp
// 0053d88a  840520138c00         test byte ptr [0x8c1320], al
// 0053d890  7530                 jne 0x53d8c2
// 0053d892  090520138c00         or dword ptr [0x8c1320], eax
// 0053d898  6868a18900           push 0x89a168
// 0053d89d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0053d8a5  e8e6adedff           call 0x418690
// 0053d8aa  50                   push eax
// 0053d8ab  b998128c00           mov ecx, 0x8c1298
// 0053d8b0  e84b330300           call 0x570c00
// 0053d8b5  6870957700           push 0x779570
// 0053d8ba  e864340f00           call 0x630d23
// 0053d8bf  83c404               add esp, 4
// 0053d8c2  8b0c24               mov ecx, dword ptr [esp]
// 0053d8c5  b898128c00           mov eax, 0x8c1298
// 0053d8ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0053d8d1  83c40c               add esp, 0xc
// 0053d8d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
