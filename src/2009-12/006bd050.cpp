// roc 2009-12 006bd050  unit: CPropGrid::UpdateItemsJob  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bd050
//
// 006bd050  6aff                 push -1
// 006bd052  6812699500           push 0x956912
// 006bd057  64a100000000         mov eax, dword ptr fs:[0]
// 006bd05d  50                   push eax
// 006bd05e  64892500000000       mov dword ptr fs:[0], esp
// 006bd065  83ec44               sub esp, 0x44
// 006bd068  6864259a00           push 0x9a2564
// 006bd06d  8d4c2404             lea ecx, [esp + 4]
// 006bd071  ff15f4b69800         call dword ptr [0x98b6f4]
// 006bd077  8d4c241c             lea ecx, [esp + 0x1c]
// 006bd07b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 006bd083  ff1554b79800         call dword ptr [0x98b754]
// 006bd089  8d0424               lea eax, [esp]
// 006bd08c  50                   push eax
// 006bd08d  8d4c242c             lea ecx, [esp + 0x2c]
// 006bd091  c644245001           mov byte ptr [esp + 0x50], 1
// 006bd096  c744242084f49900     mov dword ptr [esp + 0x20], 0x99f484
// 006bd09e  ff15f0b69800         call dword ptr [0x98b6f0]
// 006bd0a4  68e4efa800           push 0xa8efe4
// 006bd0a9  8d4c2420             lea ecx, [esp + 0x20]
// 006bd0ad  51                   push ecx
// 006bd0ae  c644245400           mov byte ptr [esp + 0x54], 0
// 006bd0b3  c744242490f49900     mov dword ptr [esp + 0x24], 0x99f490
// 006bd0bb  e8b8771300           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?_Xlen@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
