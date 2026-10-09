// roc 2009-12 007edf33  unit: W4_D3DFORMAT::?$EnumDesc  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007edf33
//
// 007edf33  6a00                 push 0
// 007edf35  6a00                 push 0
// 007edf37  e83c690000           call 0x7f4878
// 007edf3c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007edf3f  8bcb                 mov ecx, ebx
// 007edf41  2bc8                 sub ecx, eax
// 007edf43  c1f902               sar ecx, 2
// 007edf46  3bcf                 cmp ecx, edi
// 007edf48  736f                 jae 0x7edfb9
// 007edf4a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007edf4d  8b0a                 mov ecx, dword ptr [edx]
// 007edf4f  894d10               mov dword ptr [ebp + 0x10], ecx
// 007edf52  8d0cbd00000000       lea ecx, [edi*4]
// 007edf59  894d14               mov dword ptr [ebp + 0x14], ecx
// 007edf5c  03c8                 add ecx, eax
// 007edf5e  51                   push ecx
// 007edf5f  53                   push ebx
// 007edf60  50                   push eax
// 007edf61  8bce                 mov ecx, esi
// 007edf63  e8d8fbf2ff           call 0x71db40
// 007edf68  8b4610               mov eax, dword ptr [esi + 0x10]
// 007edf6b  8bc8                 mov ecx, eax
// 007edf6d  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 007edf70  8d5510               lea edx, [ebp + 0x10]
// 007edf73  c1f902               sar ecx, 2
// 007edf76  52                   push edx
// 007edf77  2bf9                 sub edi, ecx
// 007edf79  57                   push edi
// 007edf7a  50                   push eax
// 007edf7b  8bce                 mov ecx, esi
// 007edf7d  c745fc02000000       mov dword ptr [ebp - 4], 2
// 007edf84  e8c748f8ff           call 0x772850
// 007edf89  8b4514               mov eax, dword ptr [ebp + 0x14]
// 007edf8c  014610               add dword ptr [esi + 0x10], eax
// 007edf8f  8b7610               mov esi, dword ptr [esi + 0x10]
// 007edf92  8d5510               lea edx, [ebp + 0x10]
// 007edf95  52                   push edx
// 007edf96  2bf0                 sub esi, eax
// 007edf98  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007edf9b  56                   push esi
// 007edf9c  50                   push eax
// 007edf9d  e8bedefdff           call 0x7cbe60
// 007edfa2  83c40c               add esp, 0xc
// 007edfa5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007edfa8  64890d00000000       mov dword ptr fs:[0], ecx
// 007edfaf  59                   pop ecx
// 007edfb0  5f                   pop edi
// 007edfb1  5e                   pop esi
// 007edfb2  5b                   pop ebx
// 007edfb3  8be5                 mov esp, ebp
// 007edfb5  5d                   pop ebp
// 007edfb6  c21000               ret 0x10
// 007edfb9  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 007edfbc  8b11                 mov edx, dword ptr [ecx]
// 007edfbe  8d04bd00000000       lea eax, [edi*4]
// 007edfc5  53                   push ebx
// 007edfc6  8bfb                 mov edi, ebx
// 007edfc8  2bf8                 sub edi, eax
// 007edfca  53                   push ebx
// 007edfcb  57                   push edi
// 007edfcc  8bce                 mov ecx, esi
// 007edfce  895510               mov dword ptr [ebp + 0x10], edx
// 007edfd1  894514               mov dword ptr [ebp + 0x14], eax
// 007edfd4  e867fbf2ff           call 0x71db40
// 007edfd9  53                   push ebx
// 007edfda  894610               mov dword ptr [esi + 0x10], eax
// 007edfdd  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007edfe0  57                   push edi
// 007edfe1  50                   push eax
// 007edfe2  e8f9f2ebff           call 0x6ad2e0
// 007edfe7  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007edfea  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007edfed  8d4d10               lea ecx, [ebp + 0x10]
// 007edff0  51                   push ecx
// 007edff1  03d0                 add edx, eax
// 007edff3  52                   push edx
// 007edff4  50                   push eax
// 007edff5  e866defdff           call 0x7cbe60
// 007edffa  83c418               add esp, 0x18
// 007edffd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007ee000  64890d00000000       mov dword ptr fs:[0], ecx
// 007ee007  59                   pop ecx
// 007ee008  5f                   pop edi
// 007ee009  5e                   pop esi
// 007ee00a  5b                   pop ebx
// 007ee00b  8be5                 mov esp, ebp
// 007ee00d  5d                   pop ebp
// 007ee00e  c21000               ret 0x10
// library ogre-1.7.0/OgreScriptTranslator.cpp (function __catch$?_Insert_n@?$vector@W4PixelFormat@Ogre@@V?$allocator@W4PixelFormat@Ogre@@@std@@@std@@IAEXV?$_Vector_const_iterator@W4PixelFormat@Ogre@@V?$allocator@W4PixelFormat@Ogre@@@std@@@2@IABW4PixelFormat@Ogre@@@Z$2)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
