// roc 2007-03 004f7220  unit: seg_004f0000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f7220
//
// 004f7220  6aff                 push -1
// 004f7222  6869b67400           push 0x74b669
// 004f7227  64a100000000         mov eax, dword ptr fs:[0]
// 004f722d  50                   push eax
// 004f722e  83ec1c               sub esp, 0x1c
// 004f7231  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f7236  33c4                 xor eax, esp
// 004f7238  50                   push eax
// 004f7239  8d442420             lea eax, [esp + 0x20]
// 004f723d  64a300000000         mov dword ptr fs:[0], eax
// 004f7243  8b442434             mov eax, dword ptr [esp + 0x34]
// 004f7247  50                   push eax
// 004f7248  8d4c2408             lea ecx, [esp + 8]
// 004f724c  ff1578e77700         call dword ptr [0x77e778]
// 004f7252  8d4c2404             lea ecx, [esp + 4]
// 004f7256  51                   push ecx
// 004f7257  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004f725f  e83ce8ffff           call 0x4f5aa0
// 004f7264  8bc8                 mov ecx, eax
// 004f7266  e845e1ffff           call 0x4f53b0
// 004f726b  8d4c2404             lea ecx, [esp + 4]
// 004f726f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004f7277  ff158ce77700         call dword ptr [0x77e78c]
// 004f727d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f7281  64890d00000000       mov dword ptr fs:[0], ecx
// 004f7288  59                   pop ecx
// 004f7289  83c428               add esp, 0x28
// 004f728c  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_warning@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
