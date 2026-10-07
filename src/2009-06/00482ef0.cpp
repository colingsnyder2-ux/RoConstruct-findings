// roc 2009-06 00482ef0  unit: Ogre::RbxSpatialHashedSceneNode::?1??_findVisibleObjects::NodeVisiter  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00482ef0
//
// 00482ef0  8b442408             mov eax, dword ptr [esp + 8]
// 00482ef4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00482ef8  8b11                 mov edx, dword ptr [ecx]
// 00482efa  53                   push ebx
// 00482efb  8b58f8               mov ebx, dword ptr [eax - 8]
// 00482efe  55                   push ebp
// 00482eff  8b68fc               mov ebp, dword ptr [eax - 4]
// 00482f02  56                   push esi
// 00482f03  8b70f0               mov esi, dword ptr [eax - 0x10]
// 00482f06  57                   push edi
// 00482f07  8b78f4               mov edi, dword ptr [eax - 0xc]
// 00482f0a  8950f0               mov dword ptr [eax - 0x10], edx
// 00482f0d  8b5104               mov edx, dword ptr [ecx + 4]
// 00482f10  8950f4               mov dword ptr [eax - 0xc], edx
// 00482f13  8b5108               mov edx, dword ptr [ecx + 8]
// 00482f16  8950f8               mov dword ptr [eax - 8], edx
// 00482f19  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00482f1c  8950fc               mov dword ptr [eax - 4], edx
// 00482f1f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00482f23  52                   push edx
// 00482f24  2bc1                 sub eax, ecx
// 00482f26  83ec10               sub esp, 0x10
// 00482f29  8bd4                 mov edx, esp
// 00482f2b  83e810               sub eax, 0x10
// 00482f2e  c1f804               sar eax, 4
// 00482f31  50                   push eax
// 00482f32  8932                 mov dword ptr [edx], esi
// 00482f34  897a04               mov dword ptr [edx + 4], edi
// 00482f37  6a00                 push 0
// 00482f39  895a08               mov dword ptr [edx + 8], ebx
// 00482f3c  51                   push ecx
// 00482f3d  896a0c               mov dword ptr [edx + 0xc], ebp
// 00482f40  e87bfcffff           call 0x482bc0
// 00482f45  83c420               add esp, 0x20
// 00482f48  5f                   pop edi
// 00482f49  5e                   pop esi
// 00482f4a  5d                   pop ebp
// 00482f4b  5b                   pop ebx
// 00482f4c  c3                   ret 
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ??$_Pop_heap_0@PAUGeometry@EdgeListBuilder@Ogre@@U123@UgeometryLess@23@@std@@YAXPAUGeometry@EdgeListBuilder@Ogre@@0UgeometryLess@23@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp
