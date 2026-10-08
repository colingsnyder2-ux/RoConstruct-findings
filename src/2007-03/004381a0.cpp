// roc 2007-03 004381a0  unit: seg_00430000  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004381a0
//
// 004381a0  83ec10               sub esp, 0x10
// 004381a3  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004381a6  394108               cmp dword ptr [ecx + 8], eax
// 004381a9  55                   push ebp
// 004381aa  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 004381b0  56                   push esi
// 004381b1  8d7104               lea esi, [ecx + 4]
// 004381b4  894c240c             mov dword ptr [esp + 0xc], ecx
// 004381b8  89442408             mov dword ptr [esp + 8], eax
// 004381bc  7602                 jbe 0x4381c0
// 004381be  ffd5                 call ebp
// 004381c0  53                   push ebx
// 004381c1  8b5e08               mov ebx, dword ptr [esi + 8]
// 004381c4  395e04               cmp dword ptr [esi + 4], ebx
// 004381c7  57                   push edi
// 004381c8  7602                 jbe 0x4381cc
// 004381ca  ffd5                 call ebp
// 004381cc  8b7e04               mov edi, dword ptr [esi + 4]
// 004381cf  3b7e08               cmp edi, dword ptr [esi + 8]
// 004381d2  7602                 jbe 0x4381d6
// 004381d4  ffd5                 call ebp
// 004381d6  3bfb                 cmp edi, ebx
// 004381d8  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004381dc  8bc6                 mov eax, esi
// 004381de  897c241c             mov dword ptr [esp + 0x1c], edi
// 004381e2  740b                 je 0x4381ef
// 004381e4  392f                 cmp dword ptr [edi], ebp
// 004381e6  7407                 je 0x4381ef
// 004381e8  83c704               add edi, 4
// 004381eb  3bfb                 cmp edi, ebx
// 004381ed  75f5                 jne 0x4381e4
// 004381ef  85c0                 test eax, eax
// 004381f1  7404                 je 0x4381f7
// 004381f3  3bc6                 cmp eax, esi
// 004381f5  7406                 je 0x4381fd
// 004381f7  ff1544e97700         call dword ptr [0x77e944]
// 004381fd  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00438201  5f                   pop edi
// 00438202  5b                   pop ebx
// 00438203  7518                 jne 0x43821d
// 00438205  8d44241c             lea eax, [esp + 0x1c]
// 00438209  50                   push eax
// 0043820a  8bce                 mov ecx, esi
// 0043820c  e81ff21c00           call 0x607430
// 00438211  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00438215  8b11                 mov edx, dword ptr [ecx]
// 00438217  8b4204               mov eax, dword ptr [edx + 4]
// 0043821a  55                   push ebp
// 0043821b  ffd0                 call eax
// 0043821d  5e                   pop esi
// 0043821e  5d                   pop ebp
// 0043821f  83c410               add esp, 0x10
// 00438222  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?addListener@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@QBEXPAV?$Listener@VRunService@RBX@@VHeartbeat@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
