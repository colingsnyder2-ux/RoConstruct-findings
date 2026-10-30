// roc 2009-06 005c0930  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c0930
//
// 005c0930  55                   push ebp
// 005c0931  8bec                 mov ebp, esp
// 005c0933  51                   push ecx
// 005c0934  894dfc               mov dword ptr [ebp - 4], ecx
// 005c0937  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c093a  50                   push eax
// 005c093b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c093e  51                   push ecx
// 005c093f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c0942  e899180000           call 0x5c21e0
// 005c0947  50                   push eax
// 005c0948  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c094b  e8a00b0000           call 0x5c14f0
// 005c0950  8b4508               mov eax, dword ptr [ebp + 8]
// 005c0953  8be5                 mov esp, ebp
// 005c0955  5d                   pop ebp
// 005c0956  c20800               ret 8
// copied from an identical function in another client (function ?lower_bound@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AViterator@12@ABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp