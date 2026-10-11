// roc 2011-06 00543260  unit: G3D::Sphere  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00543260
//
// 00543260  6aff                 push -1
// 00543262  68221b9d00           push 0x9d1b22
// 00543267  64a100000000         mov eax, dword ptr fs:[0]
// 0054326d  50                   push eax
// 0054326e  64892500000000       mov dword ptr fs:[0], esp
// 00543275  83ec44               sub esp, 0x44
// 00543278  6870fca700           push 0xa7fc70
// 0054327d  8d4c2404             lea ecx, [esp + 4]
// 00543281  ff15c404a400         call dword ptr [0xa404c4]
// 00543287  8d4c241c             lea ecx, [esp + 0x1c]
// 0054328b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00543293  ff15600aa400         call dword ptr [0xa40a60]
// 00543299  8d0424               lea eax, [esp]
// 0054329c  50                   push eax
// 0054329d  8d4c242c             lea ecx, [esp + 0x2c]
// 005432a1  c644245001           mov byte ptr [esp + 0x50], 1
// 005432a6  c7442420c0b5a500     mov dword ptr [esp + 0x20], 0xa5b5c0
// 005432ae  ff15c804a400         call dword ptr [0xa404c8]
// 005432b4  687073b800           push 0xb87370
// 005432b9  8d4c2420             lea ecx, [esp + 0x20]
// 005432bd  51                   push ecx
// 005432be  c644245400           mov byte ptr [esp + 0x54], 0
// 005432c3  c7442424ccb5a500     mov dword ptr [esp + 0x24], 0xa5b5cc
// 005432cb  e8dc7d2c00           call 0x80b0ac
// library openrbx-client/App\v8world\Contact.cpp (function ?_Xlen@?$vector@_NV?$allocator@_N@std@@@std@@IBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Contact.cpp
