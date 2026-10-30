// roc 2009-06 005bf920  unit: RBX::AggregatingSceneManager::Bucket  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf920
//
// 005bf920  55                   push ebp
// 005bf921  8bec                 mov ebp, esp
// 005bf923  83ec08               sub esp, 8
// 005bf926  894df8               mov dword ptr [ebp - 8], ecx
// 005bf929  8d4dff               lea ecx, [ebp - 1]
// 005bf92c  e8ff41ffff           call 0x5b3b30
// 005bf931  50                   push eax
// 005bf932  8d45fe               lea eax, [ebp - 2]
// 005bf935  50                   push eax
// 005bf936  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005bf939  e812110000           call 0x5c0a50
// 005bf93e  8b45f8               mov eax, dword ptr [ebp - 8]
// 005bf941  8be5                 mov esp, ebp
// 005bf943  5d                   pop ebp
// 005bf944  c3                   ret 
// copied from an identical function in another client (function ??0?$set@HU?$less@H@std@@V?$allocator@H@2@@std@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp