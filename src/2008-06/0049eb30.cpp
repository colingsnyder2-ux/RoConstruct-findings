// roc 2008-06 0049eb30  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049eb30
//
// 0049eb30  64a100000000         mov eax, dword ptr fs:[0]
// 0049eb36  6aff                 push -1
// 0049eb38  686e767c00           push 0x7c766e
// 0049eb3d  50                   push eax
// 0049eb3e  b801000000           mov eax, 1
// 0049eb43  64892500000000       mov dword ptr fs:[0], esp
// 0049eb4a  840528099700         test byte ptr [0x970928], al
// 0049eb50  7530                 jne 0x49eb82
// 0049eb52  090528099700         or dword ptr [0x970928], eax
// 0049eb58  68888c9300           push 0x938c88
// 0049eb5d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049eb65  e8a6feffff           call 0x49ea10
// 0049eb6a  50                   push eax
// 0049eb6b  b968089700           mov ecx, 0x970868
// 0049eb70  e87b1d0d00           call 0x5708f0
// 0049eb75  6860ba7f00           push 0x7fba60
// 0049eb7a  e8302c2000           call 0x6a17af
// 0049eb7f  83c404               add esp, 4
// 0049eb82  8b0c24               mov ecx, dword ptr [esp]
// 0049eb85  b868089700           mov eax, 0x970868
// 0049eb8a  64890d00000000       mov dword ptr fs:[0], ecx
// 0049eb91  83c40c               add esp, 0xc
// 0049eb94  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
