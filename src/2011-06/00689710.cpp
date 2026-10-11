// roc 2011-06 00689710  unit: RBX::KeyframeSequence  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689710
//
// 00689710  6aff                 push -1
// 00689712  68221b9d00           push 0x9d1b22
// 00689717  64a100000000         mov eax, dword ptr fs:[0]
// 0068971d  50                   push eax
// 0068971e  64892500000000       mov dword ptr fs:[0], esp
// 00689725  83ec44               sub esp, 0x44
// 00689728  68b0dfa500           push 0xa5dfb0
// 0068972d  8d4c2404             lea ecx, [esp + 4]
// 00689731  ff15c404a400         call dword ptr [0xa404c4]
// 00689737  8d4c241c             lea ecx, [esp + 0x1c]
// 0068973b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00689743  ff15600aa400         call dword ptr [0xa40a60]
// 00689749  8d0424               lea eax, [esp]
// 0068974c  50                   push eax
// 0068974d  8d4c242c             lea ecx, [esp + 0x2c]
// 00689751  c644245001           mov byte ptr [esp + 0x50], 1
// 00689756  c7442420c0b5a500     mov dword ptr [esp + 0x20], 0xa5b5c0
// 0068975e  ff15c804a400         call dword ptr [0xa404c8]
// 00689764  687073b800           push 0xb87370
// 00689769  8d4c2420             lea ecx, [esp + 0x20]
// 0068976d  51                   push ecx
// 0068976e  c644245400           mov byte ptr [esp + 0x54], 0
// 00689773  c7442424ccb5a500     mov dword ptr [esp + 0x24], 0xa5b5cc
// 0068977b  e82c191800           call 0x80b0ac
// library openrbx-client/App\reflection\reflection_function.cpp (function ?_Xlen@?$vector@PAVFunctionDescriptor@Reflection@RBX@@V?$allocator@PAVFunctionDescriptor@Reflection@RBX@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_function.cpp
