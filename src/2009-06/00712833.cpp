// roc 2009-06 00712833  unit: W4_D3DFORMAT::?$EnumDesc  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00712833
//
// 00712833  6a00                 push 0
// 00712835  6a00                 push 0
// 00712837  e80e720000           call 0x719a4a
// 0071283c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0071283f  8bcb                 mov ecx, ebx
// 00712841  2bc8                 sub ecx, eax
// 00712843  c1f902               sar ecx, 2
// 00712846  3bcf                 cmp ecx, edi
// 00712848  736f                 jae 0x7128b9
// 0071284a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0071284d  8b0a                 mov ecx, dword ptr [edx]
// 0071284f  894d10               mov dword ptr [ebp + 0x10], ecx
// 00712852  8d0cbd00000000       lea ecx, [edi*4]
// 00712859  894d14               mov dword ptr [ebp + 0x14], ecx
// 0071285c  03c8                 add ecx, eax
// 0071285e  51                   push ecx
// 0071285f  53                   push ebx
// 00712860  50                   push eax
// 00712861  8bce                 mov ecx, esi
// 00712863  e8d82bf9ff           call 0x6a5440
// 00712868  8b4610               mov eax, dword ptr [esi + 0x10]
// 0071286b  8bc8                 mov ecx, eax
// 0071286d  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 00712870  8d5510               lea edx, [ebp + 0x10]
// 00712873  c1f902               sar ecx, 2
// 00712876  52                   push edx
// 00712877  2bf9                 sub edi, ecx
// 00712879  57                   push edi
// 0071287a  50                   push eax
// 0071287b  8bce                 mov ecx, esi
// 0071287d  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00712884  e8f7dfd2ff           call 0x440880
// 00712889  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0071288c  014610               add dword ptr [esi + 0x10], eax
// 0071288f  8b7610               mov esi, dword ptr [esi + 0x10]
// 00712892  8d5510               lea edx, [ebp + 0x10]
// 00712895  52                   push edx
// 00712896  2bf0                 sub esi, eax
// 00712898  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0071289b  56                   push esi
// 0071289c  50                   push eax
// 0071289d  e85e55fdff           call 0x6e7e00
// 007128a2  83c40c               add esp, 0xc
// 007128a5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007128a8  64890d00000000       mov dword ptr fs:[0], ecx
// 007128af  59                   pop ecx
// 007128b0  5f                   pop edi
// 007128b1  5e                   pop esi
// 007128b2  5b                   pop ebx
// 007128b3  8be5                 mov esp, ebp
// 007128b5  5d                   pop ebp
// 007128b6  c21000               ret 0x10
// 007128b9  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 007128bc  8b11                 mov edx, dword ptr [ecx]
// 007128be  8d04bd00000000       lea eax, [edi*4]
// 007128c5  53                   push ebx
// 007128c6  8bfb                 mov edi, ebx
// 007128c8  2bf8                 sub edi, eax
// 007128ca  53                   push ebx
// 007128cb  57                   push edi
// 007128cc  8bce                 mov ecx, esi
// 007128ce  895510               mov dword ptr [ebp + 0x10], edx
// 007128d1  894514               mov dword ptr [ebp + 0x14], eax
// 007128d4  e8672bf9ff           call 0x6a5440
// 007128d9  53                   push ebx
// 007128da  894610               mov dword ptr [esi + 0x10], eax
// 007128dd  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007128e0  57                   push edi
// 007128e1  50                   push eax
// 007128e2  e8d9ddd2ff           call 0x4406c0
// 007128e7  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007128ea  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007128ed  8d4d10               lea ecx, [ebp + 0x10]
// 007128f0  51                   push ecx
// 007128f1  03d0                 add edx, eax
// 007128f3  52                   push edx
// 007128f4  50                   push eax
// 007128f5  e80655fdff           call 0x6e7e00
// 007128fa  83c418               add esp, 0x18
// 007128fd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00712900  64890d00000000       mov dword ptr fs:[0], ecx
// 00712907  59                   pop ecx
// 00712908  5f                   pop edi
// 00712909  5e                   pop esi
// 0071290a  5b                   pop ebx
// 0071290b  8be5                 mov esp, ebp
// 0071290d  5d                   pop ebp
// 0071290e  c21000               ret 0x10
// library ogre-1.7.0/OgreScriptTranslator.cpp (function __catch$?_Insert_n@?$vector@W4PixelFormat@Ogre@@V?$allocator@W4PixelFormat@Ogre@@@std@@@std@@IAEXV?$_Vector_const_iterator@W4PixelFormat@Ogre@@V?$allocator@W4PixelFormat@Ogre@@@std@@@2@IABW4PixelFormat@Ogre@@@Z$2)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
