// roc 2007-08 005dc410  unit: VCRenderSettings::?$EnumPropDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc410
//
// 005dc410  64a100000000         mov eax, dword ptr fs:[0]
// 005dc416  6aff                 push -1
// 005dc418  685ea77500           push 0x75a75e
// 005dc41d  50                   push eax
// 005dc41e  b801000000           mov eax, 1
// 005dc423  64892500000000       mov dword ptr fs:[0], esp
// 005dc42a  8405006d8c00         test byte ptr [0x8c6d00], al
// 005dc430  7530                 jne 0x5dc462
// 005dc432  0905006d8c00         or dword ptr [0x8c6d00], eax
// 005dc438  6840bf7b00           push 0x7bbf40
// 005dc43d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005dc445  e8c622fbff           call 0x58e710
// 005dc44a  50                   push eax
// 005dc44b  b9786c8c00           mov ecx, 0x8c6c78
// 005dc450  e8ab47f9ff           call 0x570c00
// 005dc455  68c0be7700           push 0x77bec0
// 005dc45a  e8c4480500           call 0x630d23
// 005dc45f  83c404               add esp, 4
// 005dc462  8b0c24               mov ecx, dword ptr [esp]
// 005dc465  b8786c8c00           mov eax, 0x8c6c78
// 005dc46a  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc471  83c40c               add esp, 0xc
// 005dc474  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
