// roc 2009-06 008423f0  unit: Ogre::RbxSceneNode  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008423f0
//
// 008423f0  6aff                 push -1
// 008423f2  6851378800           push 0x883751
// 008423f7  64a100000000         mov eax, dword ptr fs:[0]
// 008423fd  50                   push eax
// 008423fe  64892500000000       mov dword ptr fs:[0], esp
// 00842405  83ec28               sub esp, 0x28
// 00842408  53                   push ebx
// 00842409  55                   push ebp
// 0084240a  8be9                 mov ebp, ecx
// 0084240c  68330c0000           push 0xc33
// 00842411  896c2414             mov dword ptr [esp + 0x14], ebp
// 00842415  e8d6b4c6ff           call 0x4ad8f0
// 0084241a  83c404               add esp, 4
// 0084241d  84c0                 test al, al
// 0084241f  0f95c0               setne al
// 00842422  33db                 xor ebx, ebx
// 00842424  33c9                 xor ecx, ecx
// 00842426  3ac3                 cmp al, bl
// 00842428  0f95c1               setne cl
// 0084242b  884504               mov byte ptr [ebp + 4], al
// 0084242e  895c240c             mov dword ptr [esp + 0xc], ebx
// 00842432  41                   inc ecx
// 00842433  85c9                 test ecx, ecx
// 00842435  0f8e3c010000         jle 0x842577
// 0084243b  56                   push esi
// 0084243c  83c508               add ebp, 8
// 0084243f  57                   push edi
// 00842440  68503d9200           push 0x923d50
// 00842445  8d4c2420             lea ecx, [esp + 0x20]
// 00842449  ff15b4e48900         call dword ptr [0x89e4b4]
// 0084244f  d9e8                 fld1 
// 00842451  8b1510d4a300         mov edx, dword ptr [0xa3d410]
// 00842457  51                   push ecx
// 00842458  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0084245c  d91c24               fstp dword ptr [esp]
// 0084245f  53                   push ebx
// 00842460  6a06                 push 6
// 00842462  6a02                 push 2
// 00842464  53                   push ebx
// 00842465  52                   push edx
// 00842466  8b542460             mov edx, dword ptr [esp + 0x60]
// 0084246a  8d442434             lea eax, [esp + 0x34]
// 0084246e  50                   push eax
// 0084246f  51                   push ecx
// 00842470  52                   push edx
// 00842471  8d442434             lea eax, [esp + 0x34]
// 00842475  50                   push eax
// 00842476  895c2468             mov dword ptr [esp + 0x68], ebx
// 0084247a  e8f19bc5ff           call 0x49c070
// 0084247f  83c428               add esp, 0x28
// 00842482  8b38                 mov edi, dword ptr [eax]
// 00842484  8b4500               mov eax, dword ptr [ebp]
// 00842487  c644244001           mov byte ptr [esp + 0x40], 1
// 0084248c  3bf8                 cmp edi, eax
// 0084248e  745e                 je 0x8424ee
// 00842490  3bc3                 cmp eax, ebx
// 00842492  7449                 je 0x8424dd
// 00842494  83c004               add eax, 4
// 00842497  50                   push eax
// 00842498  ff15a4e18900         call dword ptr [0x89e1a4]
// 0084249e  85c0                 test eax, eax
// 008424a0  7538                 jne 0x8424da
// 008424a2  8b4500               mov eax, dword ptr [ebp]
// 008424a5  8b7008               mov esi, dword ptr [eax + 8]
// 008424a8  3bf3                 cmp esi, ebx
// 008424aa  741f                 je 0x8424cb
// 008424ac  8d642400             lea esp, [esp]
// 008424b0  8b0e                 mov ecx, dword ptr [esi]
// 008424b2  8b11                 mov edx, dword ptr [ecx]
// 008424b4  8b4204               mov eax, dword ptr [edx + 4]
// 008424b7  ffd0                 call eax
// 008424b9  8bc6                 mov eax, esi
// 008424bb  8b7604               mov esi, dword ptr [esi + 4]
// 008424be  50                   push eax
// 008424bf  e86e65edff           call 0x718a32
// 008424c4  83c404               add esp, 4
// 008424c7  3bf3                 cmp esi, ebx
// 008424c9  75e5                 jne 0x8424b0
// 008424cb  8b4d00               mov ecx, dword ptr [ebp]
// 008424ce  3bcb                 cmp ecx, ebx
// 008424d0  7408                 je 0x8424da
// 008424d2  8b11                 mov edx, dword ptr [ecx]
// 008424d4  8b02                 mov eax, dword ptr [edx]
// 008424d6  6a01                 push 1
// 008424d8  ffd0                 call eax
// 008424da  895d00               mov dword ptr [ebp], ebx
// 008424dd  3bfb                 cmp edi, ebx
// 008424df  740d                 je 0x8424ee
// 008424e1  8d4704               lea eax, [edi + 4]
// 008424e4  50                   push eax
// 008424e5  897d00               mov dword ptr [ebp], edi
// 008424e8  ff15d0e18900         call dword ptr [0x89e1d0]
// 008424ee  8b442410             mov eax, dword ptr [esp + 0x10]
// 008424f2  885c2440             mov byte ptr [esp + 0x40], bl
// 008424f6  3bc3                 cmp eax, ebx
// 008424f8  7448                 je 0x842542
// 008424fa  83c004               add eax, 4
// 008424fd  50                   push eax
// 008424fe  ff15a4e18900         call dword ptr [0x89e1a4]
// 00842504  85c0                 test eax, eax
// 00842506  7536                 jne 0x84253e
// 00842508  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084250c  8b7108               mov esi, dword ptr [ecx + 8]
// 0084250f  3bf3                 cmp esi, ebx
// 00842511  741f                 je 0x842532
// 00842513  8b0e                 mov ecx, dword ptr [esi]
// 00842515  8b11                 mov edx, dword ptr [ecx]
// 00842517  8b4204               mov eax, dword ptr [edx + 4]
// 0084251a  ffd0                 call eax
// 0084251c  8bc6                 mov eax, esi
// 0084251e  8b7604               mov esi, dword ptr [esi + 4]
// 00842521  50                   push eax
// 00842522  e80b65edff           call 0x718a32
// 00842527  83c404               add esp, 4
// 0084252a  3bf3                 cmp esi, ebx
// 0084252c  75e5                 jne 0x842513
// 0084252e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00842532  3bcb                 cmp ecx, ebx
// 00842534  7408                 je 0x84253e
// 00842536  8b11                 mov edx, dword ptr [ecx]
// 00842538  8b02                 mov eax, dword ptr [edx]
// 0084253a  6a01                 push 1
// 0084253c  ffd0                 call eax
// 0084253e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00842542  8d4c241c             lea ecx, [esp + 0x1c]
// 00842546  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0084254e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00842554  8b442414             mov eax, dword ptr [esp + 0x14]
// 00842558  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084255c  40                   inc eax
// 0084255d  33c9                 xor ecx, ecx
// 0084255f  83c504               add ebp, 4
// 00842562  385a04               cmp byte ptr [edx + 4], bl
// 00842565  89442414             mov dword ptr [esp + 0x14], eax
// 00842569  0f95c1               setne cl
// 0084256c  41                   inc ecx
// 0084256d  3bc1                 cmp eax, ecx
// 0084256f  0f8ccbfeffff         jl 0x842440
// 00842575  5f                   pop edi
// 00842576  5e                   pop esi
// 00842577  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0084257b  5d                   pop ebp
// 0084257c  5b                   pop ebx
// 0084257d  64890d00000000       mov dword ptr fs:[0], ecx
// 00842584  83c434               add esp, 0x34
// 00842587  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?resizeBloomMap@ToneMap@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
