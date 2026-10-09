// roc 2009-12 00913280  unit: Ogre::RbxMeshLoader  size: 574 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00913280
//
// 00913280  64a100000000         mov eax, dword ptr fs:[0]
// 00913286  6aff                 push -1
// 00913288  6862709600           push 0x967062
// 0091328d  50                   push eax
// 0091328e  64892500000000       mov dword ptr fs:[0], esp
// 00913295  83ec4c               sub esp, 0x4c
// 00913298  56                   push esi
// 00913299  8d442408             lea eax, [esp + 8]
// 0091329d  8bf1                 mov esi, ecx
// 0091329f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009132a3  50                   push eax
// 009132a4  e85777bbff           call 0x4caa00
// 009132a9  8b06                 mov eax, dword ptr [esi]
// 009132ab  85c0                 test eax, eax
// 009132ad  7438                 je 0x9132e7
// 009132af  f30f2a5064           cvtsi2ss xmm2, dword ptr [eax + 0x64]
// 009132b4  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 009132ba  f30f5c442408         subss xmm0, dword ptr [esp + 8]
// 009132c0  f30f2a5868           cvtsi2ss xmm3, dword ptr [eax + 0x68]
// 009132c5  f30f104c2414         movss xmm1, dword ptr [esp + 0x14]
// 009132cb  f30f5c4c240c         subss xmm1, dword ptr [esp + 0xc]
// 009132d1  0f2ec2               ucomiss xmm0, xmm2
// 009132d4  9f                   lahf 
// 009132d5  f6c444               test ah, 0x44
// 009132d8  7a0d                 jp 0x9132e7
// 009132da  0f2ecb               ucomiss xmm1, xmm3
// 009132dd  9f                   lahf 
// 009132de  f6c444               test ah, 0x44
// 009132e1  0f8bc5010000         jnp 0x9134ac
// 009132e7  55                   push ebp
// 009132e8  682c3da200           push 0xa23d2c
// 009132ed  8d4c2420             lea ecx, [esp + 0x20]
// 009132f1  ff15f4b69800         call dword ptr [0x98b6f4]
// 009132f7  d9e8                 fld1 
// 009132f9  f30f10442418         movss xmm0, dword ptr [esp + 0x18]
// 009132ff  f30f5c442410         subss xmm0, dword ptr [esp + 0x10]
// 00913305  f30f104c2414         movss xmm1, dword ptr [esp + 0x14]
// 0091330b  f30f5c4c240c         subss xmm1, dword ptr [esp + 0xc]
// 00913311  51                   push ecx
// 00913312  8b0dc0dbb700         mov ecx, dword ptr [0xb7dbc0]
// 00913318  d91c24               fstp dword ptr [esp]
// 0091331b  6a00                 push 0
// 0091331d  6a06                 push 6
// 0091331f  6a02                 push 2
// 00913321  6a00                 push 0
// 00913323  51                   push ecx
// 00913324  8d542434             lea edx, [esp + 0x34]
// 00913328  52                   push edx
// 00913329  f30f2cc0             cvttss2si eax, xmm0
// 0091332d  50                   push eax
// 0091332e  f30f2cc9             cvttss2si ecx, xmm1
// 00913332  51                   push ecx
// 00913333  8d942488000000       lea edx, [esp + 0x88]
// 0091333a  52                   push edx
// 0091333b  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 00913346  e84556bbff           call 0x4c8990
// 0091334b  83c428               add esp, 0x28
// 0091334e  8b00                 mov eax, dword ptr [eax]
// 00913350  50                   push eax
// 00913351  8bce                 mov ecx, esi
// 00913353  c644246001           mov byte ptr [esp + 0x60], 1
// 00913358  e81388b3ff           call 0x44bb70
// 0091335d  8b442464             mov eax, dword ptr [esp + 0x64]
// 00913361  8b2d08b29800         mov ebp, dword ptr [0x98b208]
// 00913367  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0091336c  85c0                 test eax, eax
// 0091336e  742b                 je 0x91339b
// 00913370  83c004               add eax, 4
// 00913373  50                   push eax
// 00913374  ffd5                 call ebp
// 00913376  85c0                 test eax, eax
// 00913378  7519                 jne 0x913393
// 0091337a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0091337e  e89d7cb3ff           call 0x44b020
// 00913383  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00913387  85c9                 test ecx, ecx
// 00913389  7408                 je 0x913393
// 0091338b  8b11                 mov edx, dword ptr [ecx]
// 0091338d  8b02                 mov eax, dword ptr [edx]
// 0091338f  6a01                 push 1
// 00913391  ffd0                 call eax
// 00913393  c744246400000000     mov dword ptr [esp + 0x64], 0
// 0091339b  8d4c241c             lea ecx, [esp + 0x1c]
// 0091339f  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 009133a7  ff15e4b69800         call dword ptr [0x98b6e4]
// 009133ad  68143da200           push 0xa23d14
// 009133b2  8d4c243c             lea ecx, [esp + 0x3c]
// 009133b6  ff15f4b69800         call dword ptr [0x98b6f4]
// 009133bc  d9e8                 fld1 
// 009133be  f30f104c2418         movss xmm1, dword ptr [esp + 0x18]
// 009133c4  f30f5c4c2410         subss xmm1, dword ptr [esp + 0x10]
// 009133ca  f30f10442414         movss xmm0, dword ptr [esp + 0x14]
// 009133d0  f30f5c44240c         subss xmm0, dword ptr [esp + 0xc]
// 009133d6  f30f5905789c9d00     mulss xmm0, dword ptr [0x9d9c78]
// 009133de  51                   push ecx
// 009133df  8b0dc0dbb700         mov ecx, dword ptr [0xb7dbc0]
// 009133e5  d91c24               fstp dword ptr [esp]
// 009133e8  6a00                 push 0
// 009133ea  6a06                 push 6
// 009133ec  6a02                 push 2
// 009133ee  6a00                 push 0
// 009133f0  51                   push ecx
// 009133f1  8d542450             lea edx, [esp + 0x50]
// 009133f5  52                   push edx
// 009133f6  f30f2cc1             cvttss2si eax, xmm1
// 009133fa  50                   push eax
// 009133fb  f30f2cc8             cvttss2si ecx, xmm0
// 009133ff  51                   push ecx
// 00913400  8d54242c             lea edx, [esp + 0x2c]
// 00913404  52                   push edx
// 00913405  c784248400000002000000 mov dword ptr [esp + 0x84], 2
// 00913410  e87b55bbff           call 0x4c8990
// 00913415  83c428               add esp, 0x28
// 00913418  8b00                 mov eax, dword ptr [eax]
// 0091341a  8d4e10               lea ecx, [esi + 0x10]
// 0091341d  50                   push eax
// 0091341e  c644246003           mov byte ptr [esp + 0x60], 3
// 00913423  e84887b3ff           call 0x44bb70
// 00913428  8b442408             mov eax, dword ptr [esp + 8]
// 0091342c  c644245c02           mov byte ptr [esp + 0x5c], 2
// 00913431  85c0                 test eax, eax
// 00913433  742b                 je 0x913460
// 00913435  83c004               add eax, 4
// 00913438  50                   push eax
// 00913439  ffd5                 call ebp
// 0091343b  85c0                 test eax, eax
// 0091343d  7519                 jne 0x913458
// 0091343f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00913443  e8d87bb3ff           call 0x44b020
// 00913448  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0091344c  85c9                 test ecx, ecx
// 0091344e  7408                 je 0x913458
// 00913450  8b11                 mov edx, dword ptr [ecx]
// 00913452  8b02                 mov eax, dword ptr [edx]
// 00913454  6a01                 push 1
// 00913456  ffd0                 call eax
// 00913458  c744240800000000     mov dword ptr [esp + 8], 0
// 00913460  8d4c2438             lea ecx, [esp + 0x38]
// 00913464  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0091346c  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913472  f30f104c2418         movss xmm1, dword ptr [esp + 0x18]
// 00913478  f30f5c4c2410         subss xmm1, dword ptr [esp + 0x10]
// 0091347e  f30f1005789c9d00     movss xmm0, dword ptr [0x9d9c78]
// 00913486  f30f59c8             mulss xmm1, xmm0
// 0091348a  f30f2cc9             cvttss2si ecx, xmm1
// 0091348e  f30f104c2414         movss xmm1, dword ptr [esp + 0x14]
// 00913494  f30f5c4c240c         subss xmm1, dword ptr [esp + 0xc]
// 0091349a  51                   push ecx
// 0091349b  f30f59c8             mulss xmm1, xmm0
// 0091349f  f30f2cd1             cvttss2si edx, xmm1
// 009134a3  52                   push edx
// 009134a4  8bce                 mov ecx, esi
// 009134a6  e835fcffff           call 0x9130e0
// 009134ab  5d                   pop ebp
// 009134ac  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009134b0  5e                   pop esi
// 009134b1  64890d00000000       mov dword ptr fs:[0], ecx
// 009134b8  83c458               add esp, 0x58
// 009134bb  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?resizeImages@ToneMap@G3D@@AAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
