// roc 2010-06 007a2073  unit: W4_D3DFORMAT::?$EnumDesc  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a2073
//
// 007a2073  6a00                 push 0
// 007a2075  6a00                 push 0
// 007a2077  e836690000           call 0x7a89b2
// 007a207c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007a207f  8bcb                 mov ecx, ebx
// 007a2081  2bc8                 sub ecx, eax
// 007a2083  c1f902               sar ecx, 2
// 007a2086  3bcf                 cmp ecx, edi
// 007a2088  736f                 jae 0x7a20f9
// 007a208a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007a208d  8b0a                 mov ecx, dword ptr [edx]
// 007a208f  894d10               mov dword ptr [ebp + 0x10], ecx
// 007a2092  8d0cbd00000000       lea ecx, [edi*4]
// 007a2099  894d14               mov dword ptr [ebp + 0x14], ecx
// 007a209c  03c8                 add ecx, eax
// 007a209e  51                   push ecx
// 007a209f  53                   push ebx
// 007a20a0  50                   push eax
// 007a20a1  8bce                 mov ecx, esi
// 007a20a3  e84878f6ff           call 0x7098f0
// 007a20a8  8b4610               mov eax, dword ptr [esi + 0x10]
// 007a20ab  8bc8                 mov ecx, eax
// 007a20ad  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 007a20b0  8d5510               lea edx, [ebp + 0x10]
// 007a20b3  c1f902               sar ecx, 2
// 007a20b6  52                   push edx
// 007a20b7  2bf9                 sub edi, ecx
// 007a20b9  57                   push edi
// 007a20ba  50                   push eax
// 007a20bb  8bce                 mov ecx, esi
// 007a20bd  c745fc02000000       mov dword ptr [ebp - 4], 2
// 007a20c4  e8c74ef6ff           call 0x706f90
// 007a20c9  8b4514               mov eax, dword ptr [ebp + 0x14]
// 007a20cc  014610               add dword ptr [esi + 0x10], eax
// 007a20cf  8b7610               mov esi, dword ptr [esi + 0x10]
// 007a20d2  8d5510               lea edx, [ebp + 0x10]
// 007a20d5  52                   push edx
// 007a20d6  2bf0                 sub esi, eax
// 007a20d8  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007a20db  56                   push esi
// 007a20dc  50                   push eax
// 007a20dd  e8deddd6ff           call 0x50fec0
// 007a20e2  83c40c               add esp, 0xc
// 007a20e5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007a20e8  64890d00000000       mov dword ptr fs:[0], ecx
// 007a20ef  59                   pop ecx
// 007a20f0  5f                   pop edi
// 007a20f1  5e                   pop esi
// 007a20f2  5b                   pop ebx
// 007a20f3  8be5                 mov esp, ebp
// 007a20f5  5d                   pop ebp
// 007a20f6  c21000               ret 0x10
// 007a20f9  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 007a20fc  8b11                 mov edx, dword ptr [ecx]
// 007a20fe  8d04bd00000000       lea eax, [edi*4]
// 007a2105  53                   push ebx
// 007a2106  8bfb                 mov edi, ebx
// 007a2108  2bf8                 sub edi, eax
// 007a210a  53                   push ebx
// 007a210b  57                   push edi
// 007a210c  8bce                 mov ecx, esi
// 007a210e  895510               mov dword ptr [ebp + 0x10], edx
// 007a2111  894514               mov dword ptr [ebp + 0x14], eax
// 007a2114  e8d777f6ff           call 0x7098f0
// 007a2119  53                   push ebx
// 007a211a  894610               mov dword ptr [esi + 0x10], eax
// 007a211d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007a2120  57                   push edi
// 007a2121  50                   push eax
// 007a2122  e8f940caff           call 0x446220
// 007a2127  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007a212a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007a212d  8d4d10               lea ecx, [ebp + 0x10]
// 007a2130  51                   push ecx
// 007a2131  03d0                 add edx, eax
// 007a2133  52                   push edx
// 007a2134  50                   push eax
// 007a2135  e886ddd6ff           call 0x50fec0
// 007a213a  83c418               add esp, 0x18
// 007a213d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007a2140  64890d00000000       mov dword ptr fs:[0], ecx
// 007a2147  59                   pop ecx
// 007a2148  5f                   pop edi
// 007a2149  5e                   pop esi
// 007a214a  5b                   pop ebx
// 007a214b  8be5                 mov esp, ebp
// 007a214d  5d                   pop ebp
// 007a214e  c21000               ret 0x10
// library ogre-1.7.0/OgreScriptTranslator.cpp (function __catch$?_Insert_n@?$vector@W4PixelFormat@Ogre@@V?$allocator@W4PixelFormat@Ogre@@@std@@@std@@IAEXV?$_Vector_const_iterator@W4PixelFormat@Ogre@@V?$allocator@W4PixelFormat@Ogre@@@std@@@2@IABW4PixelFormat@Ogre@@@Z$2)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
