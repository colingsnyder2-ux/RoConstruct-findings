// roc 2009-06 00486ee2  unit: Ogre::RbxMeshPartAdapter  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00486ee2
//
// 00486ee2  6a00                 push 0
// 00486ee4  6a00                 push 0
// 00486ee6  e85f2b2900           call 0x719a4a
// 00486eeb  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00486eee  8bc3                 mov eax, ebx
// 00486ef0  2bc1                 sub eax, ecx
// 00486ef2  c1f804               sar eax, 4
// 00486ef5  3bc7                 cmp eax, edi
// 00486ef7  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00486efa  d900                 fld dword ptr [eax]
// 00486efc  d95ddc               fstp dword ptr [ebp - 0x24]
// 00486eff  d94004               fld dword ptr [eax + 4]
// 00486f02  d95de0               fstp dword ptr [ebp - 0x20]
// 00486f05  d94008               fld dword ptr [eax + 8]
// 00486f08  d95de4               fstp dword ptr [ebp - 0x1c]
// 00486f0b  d9400c               fld dword ptr [eax + 0xc]
// 00486f0e  d95de8               fstp dword ptr [ebp - 0x18]
// 00486f11  7364                 jae 0x486f77
// 00486f13  8bc7                 mov eax, edi
// 00486f15  c1e004               shl eax, 4
// 00486f18  894514               mov dword ptr [ebp + 0x14], eax
// 00486f1b  03c1                 add eax, ecx
// 00486f1d  50                   push eax
// 00486f1e  53                   push ebx
// 00486f1f  51                   push ecx
// 00486f20  8bce                 mov ecx, esi
// 00486f22  e829f9ffff           call 0x486850
// 00486f27  8b4610               mov eax, dword ptr [esi + 0x10]
// 00486f2a  8bd0                 mov edx, eax
// 00486f2c  2b550c               sub edx, dword ptr [ebp + 0xc]
// 00486f2f  8d4ddc               lea ecx, [ebp - 0x24]
// 00486f32  51                   push ecx
// 00486f33  c1fa04               sar edx, 4
// 00486f36  2bfa                 sub edi, edx
// 00486f38  57                   push edi
// 00486f39  50                   push eax
// 00486f3a  8bce                 mov ecx, esi
// 00486f3c  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00486f43  e868f8ffff           call 0x4867b0
// 00486f48  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00486f4b  014610               add dword ptr [esi + 0x10], eax
// 00486f4e  8b7610               mov esi, dword ptr [esi + 0x10]
// 00486f51  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00486f54  8d4ddc               lea ecx, [ebp - 0x24]
// 00486f57  51                   push ecx
// 00486f58  2bf0                 sub esi, eax
// 00486f5a  56                   push esi
// 00486f5b  52                   push edx
// 00486f5c  e88ff4ffff           call 0x4863f0
// 00486f61  83c40c               add esp, 0xc
// 00486f64  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00486f67  64890d00000000       mov dword ptr fs:[0], ecx
// 00486f6e  5f                   pop edi
// 00486f6f  5e                   pop esi
// 00486f70  5b                   pop ebx
// 00486f71  8be5                 mov esp, ebp
// 00486f73  5d                   pop ebp
// 00486f74  c21000               ret 0x10
// 00486f77  c1e704               shl edi, 4
// 00486f7a  8bc7                 mov eax, edi
// 00486f7c  53                   push ebx
// 00486f7d  8bfb                 mov edi, ebx
// 00486f7f  2bf8                 sub edi, eax
// 00486f81  53                   push ebx
// 00486f82  57                   push edi
// 00486f83  8bce                 mov ecx, esi
// 00486f85  894514               mov dword ptr [ebp + 0x14], eax
// 00486f88  e8c3f8ffff           call 0x486850
// 00486f8d  53                   push ebx
// 00486f8e  894610               mov dword ptr [esi + 0x10], eax
// 00486f91  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00486f94  57                   push edi
// 00486f95  50                   push eax
// 00486f96  e8a5f7ffff           call 0x486740
// 00486f9b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00486f9e  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00486fa1  8d4ddc               lea ecx, [ebp - 0x24]
// 00486fa4  51                   push ecx
// 00486fa5  03d0                 add edx, eax
// 00486fa7  52                   push edx
// 00486fa8  50                   push eax
// 00486fa9  e842f4ffff           call 0x4863f0
// 00486fae  83c418               add esp, 0x18
// 00486fb1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00486fb4  5f                   pop edi
// 00486fb5  5e                   pop esi
// 00486fb6  64890d00000000       mov dword ptr fs:[0], ecx
// 00486fbd  5b                   pop ebx
// 00486fbe  8be5                 mov esp, ebp
// 00486fc0  5d                   pop ebp
// 00486fc1  c21000               ret 0x10
// library ogre-1.6.4/OgreBillboardSet.cpp (function __catch$?_Insert_n@?$vector@U?$TRect@M@Ogre@@V?$allocator@U?$TRect@M@Ogre@@@std@@@std@@IAEXV?$_Vector_const_iterator@U?$TRect@M@Ogre@@V?$allocator@U?$TRect@M@Ogre@@@std@@@2@IABU?$TRect@M@Ogre@@@Z$2)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreBillboardSet.cpp
