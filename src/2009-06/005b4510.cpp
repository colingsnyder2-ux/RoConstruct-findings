// roc 2009-06 005b4510  unit: seg_005b0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4510
//
// 005b4510  55                   push ebp
// 005b4511  8bec                 mov ebp, esp
// 005b4513  51                   push ecx
// 005b4514  894dfc               mov dword ptr [ebp - 4], ecx
// 005b4517  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b451a  e801170000           call 0x5b5c20
// 005b451f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4522  894118               mov dword ptr [ecx + 0x18], eax
// 005b4525  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b4528  8b4218               mov eax, dword ptr [edx + 0x18]
// 005b452b  50                   push eax
// 005b452c  e8af0e0000           call 0x5b53e0
// 005b4531  83c404               add esp, 4
// 005b4534  c60001               mov byte ptr [eax], 1
// 005b4537  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b453a  e861cb0000           call 0x5c10a0
// 005b453f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4542  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005b4545  8910                 mov dword ptr [eax], edx
// 005b4547  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b454a  e831cb0000           call 0x5c1080
// 005b454f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4552  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005b4555  8910                 mov dword ptr [eax], edx
// 005b4557  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b455a  e811dd0000           call 0x5c2270
// 005b455f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4562  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005b4565  8910                 mov dword ptr [eax], edx
// 005b4567  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b456a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005b4571  8be5                 mov esp, ebp
// 005b4573  5d                   pop ebp
// 005b4574  c3                   ret 
// copied from an identical function in another client (function ?_Init@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp