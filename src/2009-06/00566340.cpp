// from server: 100% by auto
// roc 2009-06 00566340  unit: RBX::RbxG3D::RenderScene  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566340
//
// 00566340  8b442408             mov eax, dword ptr [esp + 8]
// 00566344  53                   push ebx
// 00566345  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00566349  56                   push esi
// 0056634a  57                   push edi
// 0056634b  8b7804               mov edi, dword ptr [eax + 4]
// 0056634e  8b00                 mov eax, dword ptr [eax]
// 00566350  50                   push eax
// 00566351  57                   push edi
// 00566352  6a04                 push 4
// 00566354  53                   push ebx
// 00566355  8bf1                 mov esi, ecx
// 00566357  e804c6f3ff           call 0x4a2960
// 0056635c  8bce                 mov ecx, esi
// 0056635e  e8ddadf3ff           call 0x4a1140
// 00566363  57                   push edi
// 00566364  53                   push ebx
// 00566365  8bce                 mov ecx, esi
// 00566367  e80492f3ff           call 0x49f570
// 0056636c  5f                   pop edi
// 0056636d  5e                   pop esi
// 0056636e  5b                   pop ebx
// 0056636f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??$sendIndices@H@RenderDevice@G3D@@QAEXW4Primitive@01@ABV?$Array@H@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
