// roc 2008-06 00595540  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595540
//
// 00595540  6aff                 push -1
// 00595542  6858207d00           push 0x7d2058
// 00595547  64a100000000         mov eax, dword ptr fs:[0]
// 0059554d  50                   push eax
// 0059554e  64892500000000       mov dword ptr fs:[0], esp
// 00595555  83ec14               sub esp, 0x14
// 00595558  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059555c  56                   push esi
// 0059555d  8bf1                 mov esi, ecx
// 0059555f  8b4804               mov ecx, dword ptr [eax + 4]
// 00595562  894c2408             mov dword ptr [esp + 8], ecx
// 00595566  8b4808               mov ecx, dword ptr [eax + 8]
// 00595569  894c240c             mov dword ptr [esp + 0xc], ecx
// 0059556d  85c9                 test ecx, ecx
// 0059556f  7410                 je 0x595581
// 00595571  83c104               add ecx, 4
// 00595574  ba01000000           mov edx, 1
// 00595579  f00fc111             lock xadd dword ptr [ecx], edx
// 0059557d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00595581  53                   push ebx
// 00595582  8a580c               mov bl, byte ptr [eax + 0xc]
// 00595585  8d4604               lea eax, [esi + 4]
// 00595588  8d54240c             lea edx, [esp + 0xc]
// 0059558c  885c2414             mov byte ptr [esp + 0x14], bl
// 00595590  3bd0                 cmp edx, eax
// 00595592  740e                 je 0x5955a2
// 00595594  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00595598  57                   push edi
// 00595599  8b38                 mov edi, dword ptr [eax]
// 0059559b  897c2410             mov dword ptr [esp + 0x10], edi
// 0059559f  8910                 mov dword ptr [eax], edx
// 005955a1  5f                   pop edi
// 005955a2  8b5004               mov edx, dword ptr [eax + 4]
// 005955a5  894804               mov dword ptr [eax + 4], ecx
// 005955a8  8d460c               lea eax, [esi + 0xc]
// 005955ab  8d4c2414             lea ecx, [esp + 0x14]
// 005955af  89542410             mov dword ptr [esp + 0x10], edx
// 005955b3  3bc8                 cmp ecx, eax
// 005955b5  740a                 je 0x5955c1
// 005955b7  8a10                 mov dl, byte ptr [eax]
// 005955b9  8acb                 mov cl, bl
// 005955bb  88542414             mov byte ptr [esp + 0x14], dl
// 005955bf  8808                 mov byte ptr [eax], cl
// 005955c1  8a4610               mov al, byte ptr [esi + 0x10]
// 005955c4  c6461000             mov byte ptr [esi + 0x10], 0
// 005955c8  88442418             mov byte ptr [esp + 0x18], al
// 005955cc  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005955d4  5b                   pop ebx
// 005955d5  84c0                 test al, al
// 005955d7  7509                 jne 0x5955e2
// 005955d9  8d4c2404             lea ecx, [esp + 4]
// 005955dd  e84efcffff           call 0x595230
// 005955e2  8d4c2404             lea ecx, [esp + 4]
// 005955e6  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005955ee  e87dfdffff           call 0x595370
// 005955f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005955f7  8bc6                 mov eax, esi
// 005955f9  5e                   pop esi
// 005955fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00595601  83c420               add esp, 0x20
// 00595604  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??4scoped_connection@signals@boost@@QAEAAV012@ABVconnection@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
