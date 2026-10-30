// roc 2009-06 005b2d30  unit: RBX::RenderNew::TextureProxy  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b2d30
//
// 005b2d30  55                   push ebp
// 005b2d31  8bec                 mov ebp, esp
// 005b2d33  83ec08               sub esp, 8
// 005b2d36  894df8               mov dword ptr [ebp - 8], ecx
// 005b2d39  8d4dff               lea ecx, [ebp - 1]
// 005b2d3c  e8ef0d0000           call 0x5b3b30
// 005b2d41  50                   push eax
// 005b2d42  8d45fe               lea eax, [ebp - 2]
// 005b2d45  50                   push eax
// 005b2d46  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b2d49  e862090000           call 0x5b36b0
// 005b2d4e  8b45f8               mov eax, dword ptr [ebp - 8]
// 005b2d51  8be5                 mov esp, ebp
// 005b2d53  5d                   pop ebp
// 005b2d54  c3                   ret 
// copied from an identical function in another client (function ??0?$set@HU?$less@H@std@@V?$allocator@H@2@@std@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp