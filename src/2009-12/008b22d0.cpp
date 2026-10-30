// roc 2009-12 008b22d0  unit: CXTPDockingPaneTabbedContainer  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b22d0
//
// 008b22d0  83ec24               sub esp, 0x24
// 008b22d3  56                   push esi
// 008b22d4  57                   push edi
// 008b22d5  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008b22d9  817f14f4240000       cmp dword ptr [edi + 0x14], 0x24f4
// 008b22e0  8bf1                 mov esi, ecx
// 008b22e2  740a                 je 0x8b22ee
// 008b22e4  5f                   pop edi
// 008b22e5  33c0                 xor eax, eax
// 008b22e7  5e                   pop esi
// 008b22e8  83c424               add esp, 0x24
// 008b22eb  c20400               ret 4
// 008b22ee  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 008b22f5  0f84d0000000         je 0x8b23cb
// 008b22fb  53                   push ebx
// 008b22fc  55                   push ebp
// 008b22fd  8d4604               lea eax, [esi + 4]
// 008b2300  50                   push eax
// 008b2301  ff150cb29800         call dword ptr [0x98b20c]
// 008b2307  8d4e54               lea ecx, [esi + 0x54]
// 008b230a  e831e5ffff           call 0x8b0840
// 008b230f  8b0f                 mov ecx, dword ptr [edi]
// 008b2311  8b5704               mov edx, dword ptr [edi + 4]
// 008b2314  894c2424             mov dword ptr [esp + 0x24], ecx
// 008b2318  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008b231b  89542428             mov dword ptr [esp + 0x28], edx
// 008b231f  8bd8                 mov ebx, eax
// 008b2321  8b4708               mov eax, dword ptr [edi + 8]
// 008b2324  8d542424             lea edx, [esp + 0x24]
// 008b2328  894c2430             mov dword ptr [esp + 0x30], ecx
// 008b232c  52                   push edx
// 008b232d  8bce                 mov ecx, esi
// 008b232f  89442430             mov dword ptr [esp + 0x30], eax
// 008b2333  e8c21af4ff           call 0x7f3dfa
// 008b2338  8bce                 mov ecx, esi
// 008b233a  e839410700           call 0x926478
// 008b233f  a900004000           test eax, 0x400000
// 008b2344  7412                 je 0x8b2358
// 008b2346  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008b234a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008b234e  89442410             mov dword ptr [esp + 0x10], eax
// 008b2352  894c2414             mov dword ptr [esp + 0x14], ecx
// 008b2356  eb10                 jmp 0x8b2368
// 008b2358  8b542424             mov edx, dword ptr [esp + 0x24]
// 008b235c  8b442430             mov eax, dword ptr [esp + 0x30]
// 008b2360  89542410             mov dword ptr [esp + 0x10], edx
// 008b2364  89442414             mov dword ptr [esp + 0x14], eax
// 008b2368  8b2de8cb9800         mov ebp, dword ptr [0x98cbe8]
// 008b236e  8d442410             lea eax, [esp + 0x10]
// 008b2372  8b08                 mov ecx, dword ptr [eax]
// 008b2374  8b5004               mov edx, dword ptr [eax + 4]
// 008b2377  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 008b237d  6a00                 push 0
// 008b237f  894c2420             mov dword ptr [esp + 0x20], ecx
// 008b2383  c7471801000000       mov dword ptr [edi + 0x18], 1
// 008b238a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b238d  6a00                 push 0
// 008b238f  51                   push ecx
// 008b2390  8954242c             mov dword ptr [esp + 0x2c], edx
// 008b2394  89442424             mov dword ptr [esp + 0x24], eax
// 008b2398  ffd5                 call ebp
// 008b239a  8b13                 mov edx, dword ptr [ebx]
// 008b239c  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008b23a2  8d442418             lea eax, [esp + 0x18]
// 008b23a6  50                   push eax
// 008b23a7  6a05                 push 5
// 008b23a9  8bcb                 mov ecx, ebx
// 008b23ab  ffd2                 call edx
// 008b23ad  c7471800000000       mov dword ptr [edi + 0x18], 0
// 008b23b4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b23b7  85c0                 test eax, eax
// 008b23b9  7407                 je 0x8b23c2
// 008b23bb  6a00                 push 0
// 008b23bd  6a00                 push 0
// 008b23bf  50                   push eax
// 008b23c0  ffd5                 call ebp
// 008b23c2  8bce                 mov ecx, esi
// 008b23c4  e8131af4ff           call 0x7f3ddc
// 008b23c9  5d                   pop ebp
// 008b23ca  5b                   pop ebx
// 008b23cb  5f                   pop edi
// 008b23cc  b801000000           mov eax, 1
// 008b23d1  5e                   pop esi
// 008b23d2  83c424               add esp, 0x24
// 008b23d5  c20400               ret 4
// copied from an identical function in another client (function ?OnCaptionButtonDown@CXTPDockingPaneTabbedContainer@@IAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp