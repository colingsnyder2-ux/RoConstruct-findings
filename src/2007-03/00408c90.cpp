// roc 2007-03 00408c90  unit: seg_00400000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408c90
//
// 00408c90  6aff                 push -1
// 00408c92  68a9287400           push 0x7428a9
// 00408c97  64a100000000         mov eax, dword ptr fs:[0]
// 00408c9d  50                   push eax
// 00408c9e  83ec44               sub esp, 0x44
// 00408ca1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00408ca6  33c4                 xor eax, esp
// 00408ca8  50                   push eax
// 00408ca9  8d442448             lea eax, [esp + 0x48]
// 00408cad  64a300000000         mov dword ptr fs:[0], eax
// 00408cb3  68ac427800           push 0x7842ac
// 00408cb8  8d4c2408             lea ecx, [esp + 8]
// 00408cbc  ff1578e77700         call dword ptr [0x77e778]
// 00408cc2  8d442404             lea eax, [esp + 4]
// 00408cc6  50                   push eax
// 00408cc7  8d4c2424             lea ecx, [esp + 0x24]
// 00408ccb  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00408cd3  e8c897ffff           call 0x4024a0
// 00408cd8  6870f78300           push 0x83f770
// 00408cdd  8d4c2424             lea ecx, [esp + 0x24]
// 00408ce1  51                   push ecx
// 00408ce2  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 00408cea  e83f632100           call 0x61f02e
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?_Xlen@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
