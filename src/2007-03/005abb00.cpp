// roc 2007-03 005abb00  unit: seg_005a0000  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abb00
//
// 005abb00  83ec10               sub esp, 0x10
// 005abb03  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005abb06  394108               cmp dword ptr [ecx + 8], eax
// 005abb09  55                   push ebp
// 005abb0a  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 005abb10  56                   push esi
// 005abb11  8d7104               lea esi, [ecx + 4]
// 005abb14  894c240c             mov dword ptr [esp + 0xc], ecx
// 005abb18  89442408             mov dword ptr [esp + 8], eax
// 005abb1c  7602                 jbe 0x5abb20
// 005abb1e  ffd5                 call ebp
// 005abb20  53                   push ebx
// 005abb21  8b5e08               mov ebx, dword ptr [esi + 8]
// 005abb24  395e04               cmp dword ptr [esi + 4], ebx
// 005abb27  57                   push edi
// 005abb28  7602                 jbe 0x5abb2c
// 005abb2a  ffd5                 call ebp
// 005abb2c  8b7e04               mov edi, dword ptr [esi + 4]
// 005abb2f  3b7e08               cmp edi, dword ptr [esi + 8]
// 005abb32  7602                 jbe 0x5abb36
// 005abb34  ffd5                 call ebp
// 005abb36  3bfb                 cmp edi, ebx
// 005abb38  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005abb3c  8bc6                 mov eax, esi
// 005abb3e  897c241c             mov dword ptr [esp + 0x1c], edi
// 005abb42  740b                 je 0x5abb4f
// 005abb44  392f                 cmp dword ptr [edi], ebp
// 005abb46  7407                 je 0x5abb4f
// 005abb48  83c704               add edi, 4
// 005abb4b  3bfb                 cmp edi, ebx
// 005abb4d  75f5                 jne 0x5abb44
// 005abb4f  85c0                 test eax, eax
// 005abb51  7404                 je 0x5abb57
// 005abb53  3bc6                 cmp eax, esi
// 005abb55  7406                 je 0x5abb5d
// 005abb57  ff1544e97700         call dword ptr [0x77e944]
// 005abb5d  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005abb61  5f                   pop edi
// 005abb62  5b                   pop ebx
// 005abb63  7518                 jne 0x5abb7d
// 005abb65  8d44241c             lea eax, [esp + 0x1c]
// 005abb69  50                   push eax
// 005abb6a  8bce                 mov ecx, esi
// 005abb6c  e8cf96fdff           call 0x585240
// 005abb71  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005abb75  8b11                 mov edx, dword ptr [ecx]
// 005abb77  8b4204               mov eax, dword ptr [edx + 4]
// 005abb7a  55                   push ebp
// 005abb7b  ffd0                 call eax
// 005abb7d  5e                   pop esi
// 005abb7e  5d                   pop ebp
// 005abb7f  83c410               add esp, 0x10
// 005abb82  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?addListener@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@QBEXPAV?$Listener@VRunService@RBX@@VHeartbeat@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
