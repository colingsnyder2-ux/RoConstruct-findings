// roc 2009-12 00912920  unit: RBX::RenderNew::RenderScene  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00912920
//
// 00912920  6aff                 push -1
// 00912922  68bc6f9600           push 0x966fbc
// 00912927  64a100000000         mov eax, dword ptr fs:[0]
// 0091292d  50                   push eax
// 0091292e  64892500000000       mov dword ptr fs:[0], esp
// 00912935  83ec54               sub esp, 0x54
// 00912938  56                   push esi
// 00912939  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0091293d  56                   push esi
// 0091293e  c744240800000000     mov dword ptr [esp + 8], 0
// 00912946  e80533ceff           call 0x5f5c50
// 0091294b  83c404               add esp, 4
// 0091294e  84c0                 test al, al
// 00912950  751a                 jne 0x91296c
// 00912952  8b442468             mov eax, dword ptr [esp + 0x68]
// 00912956  c70000000000         mov dword ptr [eax], 0
// 0091295c  5e                   pop esi
// 0091295d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00912961  64890d00000000       mov dword ptr fs:[0], ecx
// 00912968  83c460               add esp, 0x60
// 0091296b  c3                   ret 
// 0091296c  6a01                 push 1
// 0091296e  6a01                 push 1
// 00912970  56                   push esi
// 00912971  8d4c2418             lea ecx, [esp + 0x18]
// 00912975  e8762aceff           call 0x5f53f0
// 0091297a  6820020000           push 0x220
// 0091297f  c744246401000000     mov dword ptr [esp + 0x64], 1
// 00912987  e8d40eeeff           call 0x7f3860
// 0091298c  83c404               add esp, 4
// 0091298f  89442408             mov dword ptr [esp + 8], eax
// 00912993  c644246002           mov byte ptr [esp + 0x60], 2
// 00912998  85c0                 test eax, eax
// 0091299a  7411                 je 0x9129ad
// 0091299c  8d4c240c             lea ecx, [esp + 0xc]
// 009129a0  51                   push ecx
// 009129a1  56                   push esi
// 009129a2  6a00                 push 0
// 009129a4  8bc8                 mov ecx, eax
// 009129a6  e865f7ffff           call 0x912110
// 009129ab  eb02                 jmp 0x9129af
// 009129ad  33c0                 xor eax, eax
// 009129af  8b742468             mov esi, dword ptr [esp + 0x68]
// 009129b3  50                   push eax
// 009129b4  8bce                 mov ecx, esi
// 009129b6  c644246401           mov byte ptr [esp + 0x64], 1
// 009129bb  c70600000000         mov dword ptr [esi], 0
// 009129c1  e8aa91b3ff           call 0x44bb70
// 009129c6  8d4c240c             lea ecx, [esp + 0xc]
// 009129ca  c744240401000000     mov dword ptr [esp + 4], 1
// 009129d2  c644246000           mov byte ptr [esp + 0x60], 0
// 009129d7  e8542cceff           call 0x5f5630
// 009129dc  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009129e0  8bc6                 mov eax, esi
// 009129e2  5e                   pop esi
// 009129e3  64890d00000000       mov dword ptr fs:[0], ecx
// 009129ea  83c460               add esp, 0x60
// 009129ed  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ?fromFile@GFont@G3D@@SA?AV?$ReferenceCountedPointer@VGFont@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
