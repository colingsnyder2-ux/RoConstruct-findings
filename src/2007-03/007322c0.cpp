// roc 2007-03 007322c0  unit: seg_00730000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007322c0
//
// 007322c0  6aff                 push -1
// 007322c2  68d8cf7600           push 0x76cfd8
// 007322c7  64a100000000         mov eax, dword ptr fs:[0]
// 007322cd  50                   push eax
// 007322ce  83ec1c               sub esp, 0x1c
// 007322d1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 007322d6  33c4                 xor eax, esp
// 007322d8  50                   push eax
// 007322d9  8d442420             lea eax, [esp + 0x20]
// 007322dd  64a300000000         mov dword ptr fs:[0], eax
// 007322e3  8b442434             mov eax, dword ptr [esp + 0x34]
// 007322e7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007322eb  50                   push eax
// 007322ec  51                   push ecx
// 007322ed  8d54240c             lea edx, [esp + 0xc]
// 007322f1  52                   push edx
// 007322f2  e85919deff           call 0x513c50
// 007322f7  d944244c             fld dword ptr [esp + 0x4c]
// 007322fb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007322ff  d95c2408             fstp dword ptr [esp + 8]
// 00732303  8b542444             mov edx, dword ptr [esp + 0x44]
// 00732307  83c408               add esp, 8
// 0073230a  51                   push ecx
// 0073230b  52                   push edx
// 0073230c  50                   push eax
// 0073230d  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00732315  e8b6f6ffff           call 0x7319d0
// 0073231a  83c410               add esp, 0x10
// 0073231d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00732321  64890d00000000       mov dword ptr fs:[0], ecx
// 00732328  59                   pop ecx
// 00732329  83c428               add esp, 0x28
// 0073232c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?arrow@Draw@G3D@@SAXABVVector3@2@0PAVRenderDevice@2@ABVColor4@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
