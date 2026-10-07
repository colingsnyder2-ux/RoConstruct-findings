// roc 2007-08 00504490  unit: G3D::Log  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00504490
//
// 00504490  6aff                 push -1
// 00504492  6889f57400           push 0x74f589
// 00504497  64a100000000         mov eax, dword ptr fs:[0]
// 0050449d  50                   push eax
// 0050449e  83ec28               sub esp, 0x28
// 005044a1  a188518b00           mov eax, dword ptr [0x8b5188]
// 005044a6  33c4                 xor eax, esp
// 005044a8  89442424             mov dword ptr [esp + 0x24], eax
// 005044ac  56                   push esi
// 005044ad  57                   push edi
// 005044ae  a188518b00           mov eax, dword ptr [0x8b5188]
// 005044b3  33c4                 xor eax, esp
// 005044b5  50                   push eax
// 005044b6  8d442434             lea eax, [esp + 0x34]
// 005044ba  64a300000000         mov dword ptr fs:[0], eax
// 005044c0  8bf1                 mov esi, ecx
// 005044c2  8b4644               mov eax, dword ptr [esi + 0x44]
// 005044c5  8d4801               lea ecx, [eax + 1]
// 005044c8  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005044cb  7e0f                 jle 0x5044dc
// 005044cd  8b5634               mov edx, dword ptr [esi + 0x34]
// 005044d0  6a01                 push 1
// 005044d2  03d0                 add edx, eax
// 005044d4  52                   push edx
// 005044d5  8bce                 mov ecx, esi
// 005044d7  e8e4770000           call 0x50bcc0
// 005044dc  8b4644               mov eax, dword ptr [esi + 0x44]
// 005044df  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005044e2  8a0c08               mov cl, byte ptr [eax + ecx]
// 005044e5  8b3d9ce97700         mov edi, dword ptr [0x77e99c]
// 005044eb  0fbed1               movsx edx, cl
// 005044ee  83c001               add eax, 1
// 005044f1  52                   push edx
// 005044f2  884c2410             mov byte ptr [esp + 0x10], cl
// 005044f6  894644               mov dword ptr [esi + 0x44], eax
// 005044f9  ffd7                 call edi
// 005044fb  83c404               add esp, 4
// 005044fe  85c0                 test eax, eax
// 00504500  743a                 je 0x50453c
// 00504502  8b4644               mov eax, dword ptr [esi + 0x44]
// 00504505  8d4801               lea ecx, [eax + 1]
// 00504508  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0050450b  7e0f                 jle 0x50451c
// 0050450d  8b5634               mov edx, dword ptr [esi + 0x34]
// 00504510  6a01                 push 1
// 00504512  03d0                 add edx, eax
// 00504514  52                   push edx
// 00504515  8bce                 mov ecx, esi
// 00504517  e8a4770000           call 0x50bcc0
// 0050451c  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050451f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00504522  8a0c08               mov cl, byte ptr [eax + ecx]
// 00504525  0fbed1               movsx edx, cl
// 00504528  83c001               add eax, 1
// 0050452b  52                   push edx
// 0050452c  884c2410             mov byte ptr [esp + 0x10], cl
// 00504530  894644               mov dword ptr [esi + 0x44], eax
// 00504533  ffd7                 call edi
// 00504535  83c404               add esp, 4
// 00504538  85c0                 test eax, eax
// 0050453a  75c6                 jne 0x504502
// 0050453c  8d4c2414             lea ecx, [esp + 0x14]
// 00504540  ff15a4e67700         call dword ptr [0x77e6a4]
// 00504546  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050454a  50                   push eax
// 0050454b  8d4c2418             lea ecx, [esp + 0x18]
// 0050454f  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00504557  ff155ce57700         call dword ptr [0x77e55c]
// 0050455d  8b4644               mov eax, dword ptr [esi + 0x44]
// 00504560  8d4801               lea ecx, [eax + 1]
// 00504563  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00504566  7e0f                 jle 0x504577
// 00504568  8b5634               mov edx, dword ptr [esi + 0x34]
// 0050456b  6a01                 push 1
// 0050456d  03d0                 add edx, eax
// 0050456f  52                   push edx
// 00504570  8bce                 mov ecx, esi
// 00504572  e849770000           call 0x50bcc0
// 00504577  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050457a  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0050457d  8a0c08               mov cl, byte ptr [eax + ecx]
// 00504580  0fbed1               movsx edx, cl
// 00504583  83c001               add eax, 1
// 00504586  52                   push edx
// 00504587  884c2410             mov byte ptr [esp + 0x10], cl
// 0050458b  894644               mov dword ptr [esi + 0x44], eax
// 0050458e  ffd7                 call edi
// 00504590  83c404               add esp, 4
// 00504593  85c0                 test eax, eax
// 00504595  7549                 jne 0x5045e0
// 00504597  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050459b  50                   push eax
// 0050459c  8d4c2418             lea ecx, [esp + 0x18]
// 005045a0  ff155ce57700         call dword ptr [0x77e55c]
// 005045a6  8b4644               mov eax, dword ptr [esi + 0x44]
// 005045a9  8d4801               lea ecx, [eax + 1]
// 005045ac  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005045af  7e0f                 jle 0x5045c0
// 005045b1  8b5634               mov edx, dword ptr [esi + 0x34]
// 005045b4  6a01                 push 1
// 005045b6  03d0                 add edx, eax
// 005045b8  52                   push edx
// 005045b9  8bce                 mov ecx, esi
// 005045bb  e800770000           call 0x50bcc0
// 005045c0  8b4644               mov eax, dword ptr [esi + 0x44]
// 005045c3  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005045c6  8a0c08               mov cl, byte ptr [eax + ecx]
// 005045c9  0fbed1               movsx edx, cl
// 005045cc  83c001               add eax, 1
// 005045cf  52                   push edx
// 005045d0  884c2410             mov byte ptr [esp + 0x10], cl
// 005045d4  894644               mov dword ptr [esi + 0x44], eax
// 005045d7  ffd7                 call edi
// 005045d9  83c404               add esp, 4
// 005045dc  85c0                 test eax, eax
// 005045de  74b7                 je 0x504597
// 005045e0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005045e3  8b4644               mov eax, dword ptr [esi + 0x44]
// 005045e6  8d4401ff             lea eax, [ecx + eax - 1]
// 005045ea  2bc1                 sub eax, ecx
// 005045ec  894644               mov dword ptr [esi + 0x44], eax
// 005045ef  7805                 js 0x5045f6
// 005045f1  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005045f4  7e0c                 jle 0x504602
// 005045f6  03c1                 add eax, ecx
// 005045f8  6a00                 push 0
// 005045fa  50                   push eax
// 005045fb  8bce                 mov ecx, esi
// 005045fd  e8be760000           call 0x50bcc0
// 00504602  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 00504607  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050460b  7304                 jae 0x504611
// 0050460d  8d442418             lea eax, [esp + 0x18]
// 00504611  8d4c2410             lea ecx, [esp + 0x10]
// 00504615  51                   push ecx
// 00504616  68a0d37800           push 0x78d3a0
// 0050461b  50                   push eax
// 0050461c  ff15b4e87700         call dword ptr [0x77e8b4]
// 00504622  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00504626  83c40c               add esp, 0xc
// 00504629  8d4c2414             lea ecx, [esp + 0x14]
// 0050462d  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00504635  ff15ace67700         call dword ptr [0x77e6ac]
// 0050463b  8bc6                 mov eax, esi
// 0050463d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00504641  64890d00000000       mov dword ptr fs:[0], ecx
// 00504648  59                   pop ecx
// 00504649  5f                   pop edi
// 0050464a  5e                   pop esi
// 0050464b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050464f  33cc                 xor ecx, esp
// 00504651  e8c8c31200           call 0x630a1e
// 00504656  83c434               add esp, 0x34
// 00504659  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?scanUInt@G3D@@YAHAAVBinaryInput@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
