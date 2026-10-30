// roc 2011-06 0058baf0  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058baf0
//
// 0058baf0  55                   push ebp
// 0058baf1  8bec                 mov ebp, esp
// 0058baf3  6aff                 push -1
// 0058baf5  68221b9d00           push 0x9d1b22
// 0058bafa  64a100000000         mov eax, dword ptr fs:[0]
// 0058bb00  50                   push eax
// 0058bb01  64892500000000       mov dword ptr fs:[0], esp
// 0058bb08  83ec44               sub esp, 0x44
// 0058bb0b  68b0dfa500           push 0xa5dfb0
// 0058bb10  8d4db0               lea ecx, [ebp - 0x50]
// 0058bb13  ff15c404a400         call dword ptr [0xa404c4]
// 0058bb19  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0058bb20  8d4dcc               lea ecx, [ebp - 0x34]
// 0058bb23  ff15600aa400         call dword ptr [0xa40a60]
// 0058bb29  c645fc01             mov byte ptr [ebp - 4], 1
// 0058bb2d  c745ccc0b5a500       mov dword ptr [ebp - 0x34], 0xa5b5c0
// 0058bb34  8d45b0               lea eax, [ebp - 0x50]
// 0058bb37  50                   push eax
// 0058bb38  8d4dd8               lea ecx, [ebp - 0x28]
// 0058bb3b  ff15c804a400         call dword ptr [0xa404c8]
// 0058bb41  c645fc00             mov byte ptr [ebp - 4], 0
// 0058bb45  c745ccccb5a500       mov dword ptr [ebp - 0x34], 0xa5b5cc
// 0058bb4c  687073b800           push 0xb87370
// 0058bb51  8d4dcc               lea ecx, [ebp - 0x34]
// 0058bb54  51                   push ecx
// 0058bb55  e852f52700           call 0x80b0ac
// 0058bb5a  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0058bb61  8d4db0               lea ecx, [ebp - 0x50]
// 0058bb64  ff15d004a400         call dword ptr [0xa404d0]
// 0058bb6a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0058bb6d  64890d00000000       mov dword ptr fs:[0], ecx
// 0058bb74  8be5                 mov esp, ebp
// 0058bb76  5d                   pop ebp
// 0058bb77  c3                   ret 
// copied from an identical function in another client (function ?_Xlen@?$vector@VParameterDef@Ogre@@V?$allocator@VParameterDef@Ogre@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp