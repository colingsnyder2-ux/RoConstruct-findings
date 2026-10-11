// roc 2012-06 0062f170  unit: G3D::Line  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062f170
//
// 0062f170  6aff                 push -1
// 0062f172  684269aa00           push 0xaa6942
// 0062f177  64a100000000         mov eax, dword ptr fs:[0]
// 0062f17d  50                   push eax
// 0062f17e  64892500000000       mov dword ptr fs:[0], esp
// 0062f185  83ec44               sub esp, 0x44
// 0062f188  68703ab800           push 0xb83a70
// 0062f18d  8d4c2404             lea ecx, [esp + 4]
// 0062f191  ff154826b200         call dword ptr [0xb22648]
// 0062f197  8d4c241c             lea ecx, [esp + 0x1c]
// 0062f19b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0062f1a3  ff15dc29b200         call dword ptr [0xb229dc]
// 0062f1a9  8d0424               lea eax, [esp]
// 0062f1ac  50                   push eax
// 0062f1ad  8d4c242c             lea ecx, [esp + 0x2c]
// 0062f1b1  c644245001           mov byte ptr [esp + 0x50], 1
// 0062f1b6  c7442420a02eb400     mov dword ptr [esp + 0x20], 0xb42ea0
// 0062f1be  ff154426b200         call dword ptr [0xb22644]
// 0062f1c4  680462cd00           push 0xcd6204
// 0062f1c9  8d4c2420             lea ecx, [esp + 0x20]
// 0062f1cd  51                   push ecx
// 0062f1ce  c644245400           mov byte ptr [esp + 0x54], 0
// 0062f1d3  c7442424ac2eb400     mov dword ptr [esp + 0x24], 0xb42eac
// 0062f1db  e8643f3500           call 0x983144
// library openrbx-client/App\v8world\Contact.cpp (function ?_Xlen@?$vector@_NV?$allocator@_N@std@@@std@@IBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Contact.cpp
