// roc 2009-06 005bfb70  unit: RBX::AggregatingSceneManager::Bucket  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bfb70
//
// 005bfb70  55                   push ebp
// 005bfb71  8bec                 mov ebp, esp
// 005bfb73  83ec30               sub esp, 0x30
// 005bfb76  894dd0               mov dword ptr [ebp - 0x30], ecx
// 005bfb79  8b4508               mov eax, dword ptr [ebp + 8]
// 005bfb7c  50                   push eax
// 005bfb7d  8d4dec               lea ecx, [ebp - 0x14]
// 005bfb80  51                   push ecx
// 005bfb81  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 005bfb84  e8e70f0000           call 0x5c0b70
// 005bfb89  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005bfb90  8d55fc               lea edx, [ebp - 4]
// 005bfb93  52                   push edx
// 005bfb94  8b45f8               mov eax, dword ptr [ebp - 8]
// 005bfb97  50                   push eax
// 005bfb98  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005bfb9b  51                   push ecx
// 005bfb9c  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 005bfb9f  52                   push edx
// 005bfba0  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 005bfba3  50                   push eax
// 005bfba4  e8b75e0000           call 0x5c5a60
// 005bfba9  83c414               add esp, 0x14
// 005bfbac  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005bfbaf  894de4               mov dword ptr [ebp - 0x1c], ecx
// 005bfbb2  8b55f8               mov edx, dword ptr [ebp - 8]
// 005bfbb5  8955e8               mov dword ptr [ebp - 0x18], edx
// 005bfbb8  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 005bfbbb  8945dc               mov dword ptr [ebp - 0x24], eax
// 005bfbbe  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 005bfbc1  894de0               mov dword ptr [ebp - 0x20], ecx
// 005bfbc4  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 005bfbc7  52                   push edx
// 005bfbc8  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 005bfbcb  50                   push eax
// 005bfbcc  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 005bfbcf  51                   push ecx
// 005bfbd0  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 005bfbd3  52                   push edx
// 005bfbd4  8d45d4               lea eax, [ebp - 0x2c]
// 005bfbd7  50                   push eax
// 005bfbd8  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 005bfbdb  e8e00e0000           call 0x5c0ac0
// 005bfbe0  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bfbe3  8be5                 mov esp, ebp
// 005bfbe5  5d                   pop ebp
// 005bfbe6  c20400               ret 4
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAEIABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp