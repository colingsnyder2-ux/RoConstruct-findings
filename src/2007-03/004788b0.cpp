// roc 2007-03 004788b0  unit: seg_00470000  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004788b0
//
// 004788b0  6aff                 push -1
// 004788b2  6853767400           push 0x747653
// 004788b7  64a100000000         mov eax, dword ptr fs:[0]
// 004788bd  50                   push eax
// 004788be  81ec6c070000         sub esp, 0x76c
// 004788c4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004788c9  33c4                 xor eax, esp
// 004788cb  89842468070000       mov dword ptr [esp + 0x768], eax
// 004788d2  56                   push esi
// 004788d3  57                   push edi
// 004788d4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004788d9  33c4                 xor eax, esp
// 004788db  50                   push eax
// 004788dc  8d842478070000       lea eax, [esp + 0x778]
// 004788e3  64a300000000         mov dword ptr fs:[0], eax
// 004788e9  8bbc2488070000       mov edi, dword ptr [esp + 0x788]
// 004788f0  8bf1                 mov esi, ecx
// 004788f2  8b4604               mov eax, dword ptr [esi + 4]
// 004788f5  3b4608               cmp eax, dword ptr [esi + 8]
// 004788f8  89742410             mov dword ptr [esp + 0x10], esi
// 004788fc  7d27                 jge 0x478925
// 004788fe  69c060070000         imul eax, eax, 0x760
// 00478904  0306                 add eax, dword ptr [esi]
// 00478906  8944240c             mov dword ptr [esp + 0xc], eax
// 0047890a  c784248007000000000000 mov dword ptr [esp + 0x780], 0
// 00478915  7408                 je 0x47891f
// 00478917  57                   push edi
// 00478918  8bc8                 mov ecx, eax
// 0047891a  e831f3ffff           call 0x477c50
// 0047891f  83460401             add dword ptr [esi + 4], 1
// 00478923  eb70                 jmp 0x478995
// 00478925  8b0e                 mov ecx, dword ptr [esi]
// 00478927  3bf9                 cmp edi, ecx
// 00478929  7245                 jb 0x478970
// 0047892b  8bd0                 mov edx, eax
// 0047892d  69d260070000         imul edx, edx, 0x760
// 00478933  03d1                 add edx, ecx
// 00478935  3bfa                 cmp edi, edx
// 00478937  7337                 jae 0x478970
// 00478939  57                   push edi
// 0047893a  8d4c2418             lea ecx, [esp + 0x18]
// 0047893e  e80df3ffff           call 0x477c50
// 00478943  8d442414             lea eax, [esp + 0x14]
// 00478947  50                   push eax
// 00478948  8bce                 mov ecx, esi
// 0047894a  c784248407000001000000 mov dword ptr [esp + 0x784], 1
// 00478955  e856ffffff           call 0x4788b0
// 0047895a  8d4c2414             lea ecx, [esp + 0x14]
// 0047895e  c7842480070000ffffffff mov dword ptr [esp + 0x780], 0xffffffff
// 00478969  e852e0ffff           call 0x4769c0
// 0047896e  eb25                 jmp 0x478995
// 00478970  6a00                 push 0
// 00478972  83c001               add eax, 1
// 00478975  50                   push eax
// 00478976  8bce                 mov ecx, esi
// 00478978  e893fdffff           call 0x478710
// 0047897d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00478980  8b16                 mov edx, dword ptr [esi]
// 00478982  69c960070000         imul ecx, ecx, 0x760
// 00478988  57                   push edi
// 00478989  8d8c11a0f8ffff       lea ecx, [ecx + edx - 0x760]
// 00478990  e85be8ffff           call 0x4771f0
// 00478995  8b8c2478070000       mov ecx, dword ptr [esp + 0x778]
// 0047899c  64890d00000000       mov dword ptr fs:[0], ecx
// 004789a3  59                   pop ecx
// 004789a4  5f                   pop edi
// 004789a5  5e                   pop esi
// 004789a6  8b8c2468070000       mov ecx, dword ptr [esp + 0x768]
// 004789ad  33cc                 xor ecx, esp
// 004789af  e8f2641a00           call 0x61eea6
// 004789b4  81c478070000         add esp, 0x778
// 004789ba  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?append@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXABVRenderState@RenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
