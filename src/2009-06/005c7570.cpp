// roc 2009-06 005c7570  unit: seg_005c0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7570
//
// 005c7570  55                   push ebp
// 005c7571  8bec                 mov ebp, esp
// 005c7573  83ec0c               sub esp, 0xc
// 005c7576  894df4               mov dword ptr [ebp - 0xc], ecx
// 005c7579  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c757c  8b08                 mov ecx, dword ptr [eax]
// 005c757e  8b5004               mov edx, dword ptr [eax + 4]
// 005c7581  894df8               mov dword ptr [ebp - 8], ecx
// 005c7584  8955fc               mov dword ptr [ebp - 4], edx
// 005c7587  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c758a  50                   push eax
// 005c758b  8d4df8               lea ecx, [ebp - 8]
// 005c758e  e87d030000           call 0x5c7910
// 005c7593  8b08                 mov ecx, dword ptr [eax]
// 005c7595  8b5004               mov edx, dword ptr [eax + 4]
// 005c7598  8b4508               mov eax, dword ptr [ebp + 8]
// 005c759b  8908                 mov dword ptr [eax], ecx
// 005c759d  895004               mov dword ptr [eax + 4], edx
// 005c75a0  8b4508               mov eax, dword ptr [ebp + 8]
// 005c75a3  8be5                 mov esp, ebp
// 005c75a5  5d                   pop ebp
// 005c75a6  c20800               ret 8
// copied from an identical function in another client (function ??H?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QBE?AV01@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp