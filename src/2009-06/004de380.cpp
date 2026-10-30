// roc 2009-06 004de380  unit: RBX::Network::IdSerializer  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004de380
//
// 004de380  83ec08               sub esp, 8
// 004de383  53                   push ebx
// 004de384  55                   push ebp
// 004de385  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004de389  56                   push esi
// 004de38a  57                   push edi
// 004de38b  8bf9                 mov edi, ecx
// 004de38d  8b4718               mov eax, dword ptr [edi + 0x18]
// 004de390  8b7004               mov esi, dword ptr [eax + 4]
// 004de393  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004de397  897c2414             mov dword ptr [esp + 0x14], edi
// 004de39b  89442410             mov dword ptr [esp + 0x10], eax
// 004de39f  8bd8                 mov ebx, eax
// 004de3a1  753e                 jne 0x4de3e1
// 004de3a3  8d7e0c               lea edi, [esi + 0xc]
// 004de3a6  55                   push ebp
// 004de3a7  57                   push edi
// 004de3a8  ff15e0e48900         call dword ptr [0x89e4e0]
// 004de3ae  83c408               add esp, 8
// 004de3b1  84c0                 test al, al
// 004de3b3  7405                 je 0x4de3ba
// 004de3b5  8b7608               mov esi, dword ptr [esi + 8]
// 004de3b8  eb1d                 jmp 0x4de3d7
// 004de3ba  807b2d00             cmp byte ptr [ebx + 0x2d], 0
// 004de3be  7411                 je 0x4de3d1
// 004de3c0  57                   push edi
// 004de3c1  55                   push ebp
// 004de3c2  ff15e0e48900         call dword ptr [0x89e4e0]
// 004de3c8  83c408               add esp, 8
// 004de3cb  84c0                 test al, al
// 004de3cd  7402                 je 0x4de3d1
// 004de3cf  8bde                 mov ebx, esi
// 004de3d1  89742410             mov dword ptr [esp + 0x10], esi
// 004de3d5  8b36                 mov esi, dword ptr [esi]
// 004de3d7  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004de3db  74c6                 je 0x4de3a3
// 004de3dd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004de3e1  807b2d00             cmp byte ptr [ebx + 0x2d], 0
// 004de3e5  7408                 je 0x4de3ef
// 004de3e7  8b4718               mov eax, dword ptr [edi + 0x18]
// 004de3ea  8b7004               mov esi, dword ptr [eax + 4]
// 004de3ed  eb02                 jmp 0x4de3f1
// 004de3ef  8b33                 mov esi, dword ptr [ebx]
// 004de3f1  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004de3f5  7521                 jne 0x4de418
// 004de3f7  8d4e0c               lea ecx, [esi + 0xc]
// 004de3fa  51                   push ecx
// 004de3fb  55                   push ebp
// 004de3fc  ff15e0e48900         call dword ptr [0x89e4e0]
// 004de402  83c408               add esp, 8
// 004de405  84c0                 test al, al
// 004de407  7406                 je 0x4de40f
// 004de409  8bde                 mov ebx, esi
// 004de40b  8b36                 mov esi, dword ptr [esi]
// 004de40d  eb03                 jmp 0x4de412
// 004de40f  8b7608               mov esi, dword ptr [esi + 8]
// 004de412  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004de416  74df                 je 0x4de3f7
// 004de418  8b0f                 mov ecx, dword ptr [edi]
// 004de41a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004de41e  8b542410             mov edx, dword ptr [esp + 0x10]
// 004de422  5f                   pop edi
// 004de423  5e                   pop esi
// 004de424  5d                   pop ebp
// 004de425  89580c               mov dword ptr [eax + 0xc], ebx
// 004de428  8908                 mov dword ptr [eax], ecx
// 004de42a  895004               mov dword ptr [eax + 4], edx
// 004de42d  894808               mov dword ptr [eax + 8], ecx
// 004de430  5b                   pop ebx
// 004de431  83c408               add esp, 8
// 004de434  c20800               ret 8
// copied from an identical function in another client (function ?_Eqrange@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCodec@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCodec@Ogre@@@std@@@2@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCodec@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVCodec@Ogre@@@std@@@2@$0A@@std@@@std@@V123@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreCodec.cpp