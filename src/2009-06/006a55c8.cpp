// roc 2009-06 006a55c8  unit: RBX::VMouse::?$EventDesc  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a55c8
//
// 006a55c8  6a00                 push 0
// 006a55ca  6a00                 push 0
// 006a55cc  e879440700           call 0x719a4a
// 006a55d1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006a55d4  8bcb                 mov ecx, ebx
// 006a55d6  2bc8                 sub ecx, eax
// 006a55d8  c1f902               sar ecx, 2
// 006a55db  3bcf                 cmp ecx, edi
// 006a55dd  736e                 jae 0x6a564d
// 006a55df  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006a55e2  8b0a                 mov ecx, dword ptr [edx]
// 006a55e4  894d10               mov dword ptr [ebp + 0x10], ecx
// 006a55e7  8d0cbd00000000       lea ecx, [edi*4]
// 006a55ee  894d14               mov dword ptr [ebp + 0x14], ecx
// 006a55f1  03c8                 add ecx, eax
// 006a55f3  51                   push ecx
// 006a55f4  53                   push ebx
// 006a55f5  50                   push eax
// 006a55f6  8bce                 mov ecx, esi
// 006a55f8  e843feffff           call 0x6a5440
// 006a55fd  8b4610               mov eax, dword ptr [esi + 0x10]
// 006a5600  8bc8                 mov ecx, eax
// 006a5602  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 006a5605  8d5510               lea edx, [ebp + 0x10]
// 006a5608  c1f902               sar ecx, 2
// 006a560b  52                   push edx
// 006a560c  2bf9                 sub edi, ecx
// 006a560e  57                   push edi
// 006a560f  50                   push eax
// 006a5610  8bce                 mov ecx, esi
// 006a5612  c745fc02000000       mov dword ptr [ebp - 4], 2
// 006a5619  e862b2d9ff           call 0x440880
// 006a561e  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006a5621  014610               add dword ptr [esi + 0x10], eax
// 006a5624  8b7610               mov esi, dword ptr [esi + 0x10]
// 006a5627  8d5510               lea edx, [ebp + 0x10]
// 006a562a  52                   push edx
// 006a562b  2bf0                 sub esi, eax
// 006a562d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006a5630  56                   push esi
// 006a5631  50                   push eax
// 006a5632  e8c9270400           call 0x6e7e00
// 006a5637  83c40c               add esp, 0xc
// 006a563a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006a563d  64890d00000000       mov dword ptr fs:[0], ecx
// 006a5644  5f                   pop edi
// 006a5645  5e                   pop esi
// 006a5646  5b                   pop ebx
// 006a5647  8be5                 mov esp, ebp
// 006a5649  5d                   pop ebp
// 006a564a  c21000               ret 0x10
// 006a564d  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 006a5650  8b11                 mov edx, dword ptr [ecx]
// 006a5652  8d04bd00000000       lea eax, [edi*4]
// 006a5659  53                   push ebx
// 006a565a  8bfb                 mov edi, ebx
// 006a565c  2bf8                 sub edi, eax
// 006a565e  53                   push ebx
// 006a565f  57                   push edi
// 006a5660  8bce                 mov ecx, esi
// 006a5662  895510               mov dword ptr [ebp + 0x10], edx
// 006a5665  894514               mov dword ptr [ebp + 0x14], eax
// 006a5668  e8d3fdffff           call 0x6a5440
// 006a566d  53                   push ebx
// 006a566e  894610               mov dword ptr [esi + 0x10], eax
// 006a5671  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006a5674  57                   push edi
// 006a5675  50                   push eax
// 006a5676  e845b0d9ff           call 0x4406c0
// 006a567b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006a567e  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006a5681  8d4d10               lea ecx, [ebp + 0x10]
// 006a5684  51                   push ecx
// 006a5685  03d0                 add edx, eax
// 006a5687  52                   push edx
// 006a5688  50                   push eax
// 006a5689  e872270400           call 0x6e7e00
// 006a568e  83c418               add esp, 0x18
// 006a5691  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006a5694  5f                   pop edi
// 006a5695  5e                   pop esi
// 006a5696  64890d00000000       mov dword ptr fs:[0], ecx
// 006a569d  5b                   pop ebx
// 006a569e  8be5                 mov esp, ebp
// 006a56a0  5d                   pop ebp
// 006a56a1  c21000               ret 0x10
// library rbxgs/v8datamodel\BrickColor.cpp (function __catch$?_Insert_n@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@2@IABVBrickColor@RBX@@@Z$2)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
