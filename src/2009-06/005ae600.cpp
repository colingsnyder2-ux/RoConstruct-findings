// roc 2009-06 005ae600  unit: RBX::Mesh  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ae600
//
// 005ae600  55                   push ebp
// 005ae601  8bec                 mov ebp, esp
// 005ae603  83ec0c               sub esp, 0xc
// 005ae606  894df4               mov dword ptr [ebp - 0xc], ecx
// 005ae609  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005ae60c  8b08                 mov ecx, dword ptr [eax]
// 005ae60e  8b5004               mov edx, dword ptr [eax + 4]
// 005ae611  894df8               mov dword ptr [ebp - 8], ecx
// 005ae614  8955fc               mov dword ptr [ebp - 4], edx
// 005ae617  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005ae61a  e8612e0100           call 0x5c1480
// 005ae61f  8b4508               mov eax, dword ptr [ebp + 8]
// 005ae622  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005ae625  8908                 mov dword ptr [eax], ecx
// 005ae627  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ae62a  895004               mov dword ptr [eax + 4], edx
// 005ae62d  8b4508               mov eax, dword ptr [ebp + 8]
// 005ae630  8be5                 mov esp, ebp
// 005ae632  5d                   pop ebp
// 005ae633  c20800               ret 8
// copied from an identical function in another client (function ??Eiterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AV012@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp