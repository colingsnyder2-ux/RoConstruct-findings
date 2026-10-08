// roc 2007-08 006274f0  unit: RBX::SeparateStage  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006274f0
//
// 006274f0  6aff                 push -1
// 006274f2  686ed37500           push 0x75d36e
// 006274f7  64a100000000         mov eax, dword ptr fs:[0]
// 006274fd  50                   push eax
// 006274fe  64892500000000       mov dword ptr fs:[0], esp
// 00627505  83ec08               sub esp, 8
// 00627508  55                   push ebp
// 00627509  56                   push esi
// 0062750a  57                   push edi
// 0062750b  8bf1                 mov esi, ecx
// 0062750d  6a1c                 push 0x1c
// 0062750f  89742410             mov dword ptr [esp + 0x10], esi
// 00627513  e8de890000           call 0x62fef6
// 00627518  83c404               add esp, 4
// 0062751b  89442410             mov dword ptr [esp + 0x10], eax
// 0062751f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00627523  33ed                 xor ebp, ebp
// 00627525  3bc5                 cmp eax, ebp
// 00627527  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0062752b  740b                 je 0x627538
// 0062752d  57                   push edi
// 0062752e  56                   push esi
// 0062752f  8bc8                 mov ecx, eax
// 00627531  e85a16feff           call 0x608b90
// 00627536  eb02                 jmp 0x62753a
// 00627538  33c0                 xor eax, eax
// 0062753a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062753e  894e04               mov dword ptr [esi + 4], ecx
// 00627541  894608               mov dword ptr [esi + 8], eax
// 00627544  897e0c               mov dword ptr [esi + 0xc], edi
// 00627547  c7064c4b7c00         mov dword ptr [esi], 0x7c4b4c
// 0062754d  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00627555  896e14               mov dword ptr [esi + 0x14], ebp
// 00627558  896e18               mov dword ptr [esi + 0x18], ebp
// 0062755b  896e10               mov dword ptr [esi + 0x10], ebp
// 0062755e  8d7e1c               lea edi, [esi + 0x1c]
// 00627561  8bcf                 mov ecx, edi
// 00627563  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00627568  e8431ef8ff           call 0x5a93b0
// 0062756d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00627571  894704               mov dword ptr [edi + 4], eax
// 00627574  c6401101             mov byte ptr [eax + 0x11], 1
// 00627578  8b4704               mov eax, dword ptr [edi + 4]
// 0062757b  894004               mov dword ptr [eax + 4], eax
// 0062757e  8b4704               mov eax, dword ptr [edi + 4]
// 00627581  8900                 mov dword ptr [eax], eax
// 00627583  8b4704               mov eax, dword ptr [edi + 4]
// 00627586  894008               mov dword ptr [eax + 8], eax
// 00627589  896f08               mov dword ptr [edi + 8], ebp
// 0062758c  5f                   pop edi
// 0062758d  8bc6                 mov eax, esi
// 0062758f  5e                   pop esi
// 00627590  5d                   pop ebp
// 00627591  64890d00000000       mov dword ptr fs:[0], ecx
// 00627598  83c414               add esp, 0x14
// 0062759b  c20800               ret 8
// library rbxgs/v8world\SeparateStage.cpp (function ??0SeparateStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SeparateStage.cpp
