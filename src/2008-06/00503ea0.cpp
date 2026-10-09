// roc 2008-06 00503ea0  unit: RBX::Render::RenderScene  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00503ea0
//
// 00503ea0  6aff                 push -1
// 00503ea2  6834b67c00           push 0x7cb634
// 00503ea7  64a100000000         mov eax, dword ptr fs:[0]
// 00503ead  50                   push eax
// 00503eae  64892500000000       mov dword ptr fs:[0], esp
// 00503eb5  83ec4c               sub esp, 0x4c
// 00503eb8  56                   push esi
// 00503eb9  8bf1                 mov esi, ecx
// 00503ebb  8b4604               mov eax, dword ptr [esi + 4]
// 00503ebe  3b4608               cmp eax, dword ptr [esi + 8]
// 00503ec1  89742404             mov dword ptr [esp + 4], esi
// 00503ec5  7d3b                 jge 0x503f02
// 00503ec7  8b16                 mov edx, dword ptr [esi]
// 00503ec9  8bc8                 mov ecx, eax
// 00503ecb  c1e104               shl ecx, 4
// 00503ece  03c8                 add ecx, eax
// 00503ed0  8d0c8a               lea ecx, [edx + ecx*4]
// 00503ed3  894c2408             mov dword ptr [esp + 8], ecx
// 00503ed7  c744245800000000     mov dword ptr [esp + 0x58], 0
// 00503edf  85c9                 test ecx, ecx
// 00503ee1  740a                 je 0x503eed
// 00503ee3  8b442460             mov eax, dword ptr [esp + 0x60]
// 00503ee7  50                   push eax
// 00503ee8  e813e6ffff           call 0x502500
// 00503eed  ff4604               inc dword ptr [esi + 4]
// 00503ef0  5e                   pop esi
// 00503ef1  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00503ef5  64890d00000000       mov dword ptr fs:[0], ecx
// 00503efc  83c458               add esp, 0x58
// 00503eff  c20400               ret 4
// 00503f02  8b0e                 mov ecx, dword ptr [esi]
// 00503f04  57                   push edi
// 00503f05  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00503f09  3bf9                 cmp edi, ecx
// 00503f0b  7276                 jb 0x503f83
// 00503f0d  8bd0                 mov edx, eax
// 00503f0f  c1e204               shl edx, 4
// 00503f12  03d0                 add edx, eax
// 00503f14  8d0c91               lea ecx, [ecx + edx*4]
// 00503f17  3bf9                 cmp edi, ecx
// 00503f19  7368                 jae 0x503f83
// 00503f1b  57                   push edi
// 00503f1c  8d4c2414             lea ecx, [esp + 0x14]
// 00503f20  e8dbe5ffff           call 0x502500
// 00503f25  8d542410             lea edx, [esp + 0x10]
// 00503f29  52                   push edx
// 00503f2a  8bce                 mov ecx, esi
// 00503f2c  c744246001000000     mov dword ptr [esp + 0x60], 1
// 00503f34  e867ffffff           call 0x503ea0
// 00503f39  8b442450             mov eax, dword ptr [esp + 0x50]
// 00503f3d  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00503f45  85c0                 test eax, eax
// 00503f47  745b                 je 0x503fa4
// 00503f49  83c004               add eax, 4
// 00503f4c  50                   push eax
// 00503f4d  ff15ac218000         call dword ptr [0x8021ac]
// 00503f53  85c0                 test eax, eax
// 00503f55  754d                 jne 0x503fa4
// 00503f57  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00503f5b  e8306ef5ff           call 0x45ad90
// 00503f60  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00503f64  85c9                 test ecx, ecx
// 00503f66  743c                 je 0x503fa4
// 00503f68  8b01                 mov eax, dword ptr [ecx]
// 00503f6a  8b10                 mov edx, dword ptr [eax]
// 00503f6c  6a01                 push 1
// 00503f6e  ffd2                 call edx
// 00503f70  5f                   pop edi
// 00503f71  5e                   pop esi
// 00503f72  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00503f76  64890d00000000       mov dword ptr fs:[0], ecx
// 00503f7d  83c458               add esp, 0x58
// 00503f80  c20400               ret 4
// 00503f83  6a00                 push 0
// 00503f85  40                   inc eax
// 00503f86  50                   push eax
// 00503f87  8bce                 mov ecx, esi
// 00503f89  e852f6ffff           call 0x5035e0
// 00503f8e  8b4604               mov eax, dword ptr [esi + 4]
// 00503f91  8b16                 mov edx, dword ptr [esi]
// 00503f93  8bc8                 mov ecx, eax
// 00503f95  c1e104               shl ecx, 4
// 00503f98  03c8                 add ecx, eax
// 00503f9a  57                   push edi
// 00503f9b  8d4c8abc             lea ecx, [edx + ecx*4 - 0x44]
// 00503f9f  e8bce5ffff           call 0x502560
// 00503fa4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00503fa8  5f                   pop edi
// 00503fa9  5e                   pop esi
// 00503faa  64890d00000000       mov dword ptr fs:[0], ecx
// 00503fb1  83c458               add esp, 0x58
// 00503fb4  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?append@?$Array@VRenderSurface@Render@RBX@@@G3D@@QAEXABVRenderSurface@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
