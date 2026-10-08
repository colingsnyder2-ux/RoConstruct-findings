// from server: 100% by auto
// roc 2008-06 007b7450  unit: G3D::Sky  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b7450
//
// 007b7450  6aff                 push -1
// 007b7452  68cce37e00           push 0x7ee3cc
// 007b7457  64a100000000         mov eax, dword ptr fs:[0]
// 007b745d  50                   push eax
// 007b745e  64892500000000       mov dword ptr fs:[0], esp
// 007b7465  83ec54               sub esp, 0x54
// 007b7468  56                   push esi
// 007b7469  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007b746d  56                   push esi
// 007b746e  c744240800000000     mov dword ptr [esp + 8], 0
// 007b7476  e815d9d5ff           call 0x514d90
// 007b747b  83c404               add esp, 4
// 007b747e  84c0                 test al, al
// 007b7480  751a                 jne 0x7b749c
// 007b7482  8b442468             mov eax, dword ptr [esp + 0x68]
// 007b7486  c70000000000         mov dword ptr [eax], 0
// 007b748c  5e                   pop esi
// 007b748d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007b7491  64890d00000000       mov dword ptr fs:[0], ecx
// 007b7498  83c460               add esp, 0x60
// 007b749b  c3                   ret 
// 007b749c  6a01                 push 1
// 007b749e  6a01                 push 1
// 007b74a0  56                   push esi
// 007b74a1  8d4c2418             lea ecx, [esp + 0x18]
// 007b74a5  e856e5d5ff           call 0x515a00
// 007b74aa  6820020000           push 0x220
// 007b74af  c744246401000000     mov dword ptr [esp + 0x64], 1
// 007b74b7  e86494eeff           call 0x6a0920
// 007b74bc  83c404               add esp, 4
// 007b74bf  89442408             mov dword ptr [esp + 8], eax
// 007b74c3  c644246002           mov byte ptr [esp + 0x60], 2
// 007b74c8  85c0                 test eax, eax
// 007b74ca  7411                 je 0x7b74dd
// 007b74cc  8d4c240c             lea ecx, [esp + 0xc]
// 007b74d0  51                   push ecx
// 007b74d1  56                   push esi
// 007b74d2  6a00                 push 0
// 007b74d4  8bc8                 mov ecx, eax
// 007b74d6  e845f7ffff           call 0x7b6c20
// 007b74db  eb02                 jmp 0x7b74df
// 007b74dd  33c0                 xor eax, eax
// 007b74df  8b742468             mov esi, dword ptr [esp + 0x68]
// 007b74e3  50                   push eax
// 007b74e4  8bce                 mov ecx, esi
// 007b74e6  c644246401           mov byte ptr [esp + 0x64], 1
// 007b74eb  c70600000000         mov dword ptr [esi], 0
// 007b74f1  e8aa1adeff           call 0x598fa0
// 007b74f6  8d4c240c             lea ecx, [esp + 0xc]
// 007b74fa  c744240401000000     mov dword ptr [esp + 4], 1
// 007b7502  c644246000           mov byte ptr [esp + 0x60], 0
// 007b7507  e814e7d5ff           call 0x515c20
// 007b750c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007b7510  8bc6                 mov eax, esi
// 007b7512  5e                   pop esi
// 007b7513  64890d00000000       mov dword ptr fs:[0], ecx
// 007b751a  83c460               add esp, 0x60
// 007b751d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ?fromFile@GFont@G3D@@SA?AV?$ReferenceCountedPointer@VGFont@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
