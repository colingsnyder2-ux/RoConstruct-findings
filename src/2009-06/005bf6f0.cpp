// roc 2009-06 005bf6f0  unit: RBX::AggregatingSceneManager::Bucket  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf6f0
//
// 005bf6f0  55                   push ebp
// 005bf6f1  8bec                 mov ebp, esp
// 005bf6f3  83ec08               sub esp, 8
// 005bf6f6  894df8               mov dword ptr [ebp - 8], ecx
// 005bf6f9  8d4dff               lea ecx, [ebp - 1]
// 005bf6fc  e82f44ffff           call 0x5b3b30
// 005bf701  50                   push eax
// 005bf702  8d45fe               lea eax, [ebp - 2]
// 005bf705  50                   push eax
// 005bf706  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005bf709  e8920b0000           call 0x5c02a0
// 005bf70e  8b45f8               mov eax, dword ptr [ebp - 8]
// 005bf711  8be5                 mov esp, ebp
// 005bf713  5d                   pop ebp
// 005bf714  c3                   ret 
// copied from an identical function in another client (function ??0?$set@HU?$less@H@std@@V?$allocator@H@2@@std@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp