// roc 2007-08 0072fb50  unit: seg_00720000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072fb50
//
// 0072fb50  6aff                 push -1
// 0072fb52  6878bd7600           push 0x76bd78
// 0072fb57  64a100000000         mov eax, dword ptr fs:[0]
// 0072fb5d  50                   push eax
// 0072fb5e  83ec1c               sub esp, 0x1c
// 0072fb61  a188518b00           mov eax, dword ptr [0x8b5188]
// 0072fb66  33c4                 xor eax, esp
// 0072fb68  50                   push eax
// 0072fb69  8d442420             lea eax, [esp + 0x20]
// 0072fb6d  64a300000000         mov dword ptr fs:[0], eax
// 0072fb73  8b442434             mov eax, dword ptr [esp + 0x34]
// 0072fb77  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072fb7b  50                   push eax
// 0072fb7c  51                   push ecx
// 0072fb7d  8d54240c             lea edx, [esp + 0xc]
// 0072fb81  52                   push edx
// 0072fb82  e809dddeff           call 0x51d890
// 0072fb87  d944244c             fld dword ptr [esp + 0x4c]
// 0072fb8b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072fb8f  d95c2408             fstp dword ptr [esp + 8]
// 0072fb93  8b542444             mov edx, dword ptr [esp + 0x44]
// 0072fb97  83c408               add esp, 8
// 0072fb9a  51                   push ecx
// 0072fb9b  52                   push edx
// 0072fb9c  50                   push eax
// 0072fb9d  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0072fba5  e8b6f6ffff           call 0x72f260
// 0072fbaa  83c410               add esp, 0x10
// 0072fbad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0072fbb1  64890d00000000       mov dword ptr fs:[0], ecx
// 0072fbb8  59                   pop ecx
// 0072fbb9  83c428               add esp, 0x28
// 0072fbbc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?arrow@Draw@G3D@@SAXABVVector3@2@0PAVRenderDevice@2@ABVColor4@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
