// roc 2009-06 005bfbf0  unit: RBX::AggregatingSceneManager::Bucket  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bfbf0
//
// 005bfbf0  55                   push ebp
// 005bfbf1  8bec                 mov ebp, esp
// 005bfbf3  51                   push ecx
// 005bfbf4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bfbf7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bfbfa  e8a1140000           call 0x5c10a0
// 005bfbff  8b00                 mov eax, dword ptr [eax]
// 005bfc01  50                   push eax
// 005bfc02  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bfc05  e8860f0000           call 0x5c0b90
// 005bfc0a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bfc0d  e88e140000           call 0x5c10a0
// 005bfc12  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bfc15  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005bfc18  8910                 mov dword ptr [eax], edx
// 005bfc1a  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bfc1d  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005bfc24  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bfc27  e854140000           call 0x5c1080
// 005bfc2c  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bfc2f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005bfc32  8910                 mov dword ptr [eax], edx
// 005bfc34  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bfc37  e834260000           call 0x5c2270
// 005bfc3c  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bfc3f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005bfc42  8910                 mov dword ptr [eax], edx
// 005bfc44  8be5                 mov esp, ebp
// 005bfc46  5d                   pop ebp
// 005bfc47  c3                   ret 
// copied from an identical function in another client (function ?clear@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp