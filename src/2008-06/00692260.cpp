// roc 2008-06 00692260  unit: Ogre::RbxSceneManager  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00692260
//
// 00692260  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00692263  8b4204               mov eax, dword ptr [edx + 4]
// 00692266  80780e00             cmp byte ptr [eax + 0xe], 0
// 0069226a  55                   push ebp
// 0069226b  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0069226f  56                   push esi
// 00692270  57                   push edi
// 00692271  8bfa                 mov edi, edx
// 00692273  8bf2                 mov esi, edx
// 00692275  752c                 jne 0x6922a3
// 00692277  8a5500               mov dl, byte ptr [ebp]
// 0069227a  53                   push ebx
// 0069227b  eb03                 jmp 0x692280
// 0069227d  8d4900               lea ecx, [ecx]
// 00692280  8a580c               mov bl, byte ptr [eax + 0xc]
// 00692283  3ada                 cmp bl, dl
// 00692285  7305                 jae 0x69228c
// 00692287  8b4008               mov eax, dword ptr [eax + 8]
// 0069228a  eb10                 jmp 0x69229c
// 0069228c  807e0e00             cmp byte ptr [esi + 0xe], 0
// 00692290  7406                 je 0x692298
// 00692292  3ad3                 cmp dl, bl
// 00692294  7302                 jae 0x692298
// 00692296  8bf0                 mov esi, eax
// 00692298  8bf8                 mov edi, eax
// 0069229a  8b00                 mov eax, dword ptr [eax]
// 0069229c  80780e00             cmp byte ptr [eax + 0xe], 0
// 006922a0  74de                 je 0x692280
// 006922a2  5b                   pop ebx
// 006922a3  807e0e00             cmp byte ptr [esi + 0xe], 0
// 006922a7  7408                 je 0x6922b1
// 006922a9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006922ac  8b4004               mov eax, dword ptr [eax + 4]
// 006922af  eb02                 jmp 0x6922b3
// 006922b1  8b06                 mov eax, dword ptr [esi]
// 006922b3  80780e00             cmp byte ptr [eax + 0xe], 0
// 006922b7  751b                 jne 0x6922d4
// 006922b9  8a5500               mov dl, byte ptr [ebp]
// 006922bc  8d642400             lea esp, [esp]
// 006922c0  3a500c               cmp dl, byte ptr [eax + 0xc]
// 006922c3  7306                 jae 0x6922cb
// 006922c5  8bf0                 mov esi, eax
// 006922c7  8b00                 mov eax, dword ptr [eax]
// 006922c9  eb03                 jmp 0x6922ce
// 006922cb  8b4008               mov eax, dword ptr [eax + 8]
// 006922ce  80780e00             cmp byte ptr [eax + 0xe], 0
// 006922d2  74ec                 je 0x6922c0
// 006922d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 006922d8  8b09                 mov ecx, dword ptr [ecx]
// 006922da  897804               mov dword ptr [eax + 4], edi
// 006922dd  5f                   pop edi
// 006922de  89700c               mov dword ptr [eax + 0xc], esi
// 006922e1  5e                   pop esi
// 006922e2  8908                 mov dword ptr [eax], ecx
// 006922e4  894808               mov dword ptr [eax + 8], ecx
// 006922e7  5d                   pop ebp
// 006922e8  c20800               ret 8
// library ogre-1.6.4/OgreSceneManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tset_traits@EU?$less@E@std@@V?$allocator@E@2@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@EU?$less@E@std@@V?$allocator@E@2@$0A@@std@@@std@@V123@@2@ABE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
