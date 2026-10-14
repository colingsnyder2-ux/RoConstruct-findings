// roc 2007-03 00566b90  unit: seg_00560000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00566b90
//
// 00566b90  6aff                 push -1
// 00566b92  68926f7500           push 0x756f92
// 00566b97  64a100000000         mov eax, dword ptr fs:[0]
// 00566b9d  50                   push eax
// 00566b9e  64892500000000       mov dword ptr fs:[0], esp
// 00566ba5  83ec44               sub esp, 0x44
// 00566ba8  68ac427800           push 0x7842ac
// 00566bad  8d4c2404             lea ecx, [esp + 4]
// 00566bb1  ff1578e77700         call dword ptr [0x77e778]
// 00566bb7  8d4c241c             lea ecx, [esp + 0x1c]
// 00566bbb  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00566bc3  ff1560e97700         call dword ptr [0x77e960]
// 00566bc9  8d0424               lea eax, [esp]
// 00566bcc  50                   push eax
// 00566bcd  8d4c242c             lea ecx, [esp + 0x2c]
// 00566bd1  c644245001           mov byte ptr [esp + 0x50], 1
// 00566bd6  c7442420383e7800     mov dword ptr [esp + 0x20], 0x783e38
// 00566bde  ff157ce77700         call dword ptr [0x77e77c]
// 00566be4  6870f78300           push 0x83f770
// 00566be9  8d4c2420             lea ecx, [esp + 0x20]
// 00566bed  51                   push ecx
// 00566bee  c644245400           mov byte ptr [esp + 0x54], 0
// 00566bf3  c7442424443e7800     mov dword ptr [esp + 0x24], 0x783e44
// 00566bfb  e82e840b00           call 0x61f02e
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?_Xlen@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
