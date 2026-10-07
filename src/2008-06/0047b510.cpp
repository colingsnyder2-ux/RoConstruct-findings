// roc 2008-06 0047b510  unit: CInstanceRecord::CNameItem  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047b510
//
// 0047b510  64a100000000         mov eax, dword ptr fs:[0]
// 0047b516  6aff                 push -1
// 0047b518  6881757d00           push 0x7d7581
// 0047b51d  50                   push eax
// 0047b51e  64892500000000       mov dword ptr fs:[0], esp
// 0047b525  83ec08               sub esp, 8
// 0047b528  55                   push ebp
// 0047b529  56                   push esi
// 0047b52a  57                   push edi
// 0047b52b  8bf9                 mov edi, ecx
// 0047b52d  8b4708               mov eax, dword ptr [edi + 8]
// 0047b530  8b2f                 mov ebp, dword ptr [edi]
// 0047b532  69c060070000         imul eax, eax, 0x760
// 0047b538  6a10                 push 0x10
// 0047b53a  50                   push eax
// 0047b53b  e840d00800           call 0x508580
// 0047b540  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047b543  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0047b547  83c408               add esp, 8
// 0047b54a  3bd1                 cmp edx, ecx
// 0047b54c  8907                 mov dword ptr [edi], eax
// 0047b54e  7d02                 jge 0x47b552
// 0047b550  8bca                 mov ecx, edx
// 0047b552  69c960070000         imul ecx, ecx, 0x760
// 0047b558  03c8                 add ecx, eax
// 0047b55a  8bf0                 mov esi, eax
// 0047b55c  8bf9                 mov edi, ecx
// 0047b55e  53                   push ebx
// 0047b55f  8bdd                 mov ebx, ebp
// 0047b561  89742410             mov dword ptr [esp + 0x10], esi
// 0047b565  3bf7                 cmp esi, edi
// 0047b567  733f                 jae 0x47b5a8
// 0047b569  8da42400000000       lea esp, [esp]
// 0047b570  89742414             mov dword ptr [esp + 0x14], esi
// 0047b574  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0047b57c  85f6                 test esi, esi
// 0047b57e  740c                 je 0x47b58c
// 0047b580  53                   push ebx
// 0047b581  8bce                 mov ecx, esi
// 0047b583  e848fbffff           call 0x47b0d0
// 0047b588  8b542428             mov edx, dword ptr [esp + 0x28]
// 0047b58c  81c660070000         add esi, 0x760
// 0047b592  81c360070000         add ebx, 0x760
// 0047b598  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0047b5a0  89742410             mov dword ptr [esp + 0x10], esi
// 0047b5a4  3bf7                 cmp esi, edi
// 0047b5a6  72c8                 jb 0x47b570
// 0047b5a8  69d260070000         imul edx, edx, 0x760
// 0047b5ae  03d5                 add edx, ebp
// 0047b5b0  8bfa                 mov edi, edx
// 0047b5b2  8bf5                 mov esi, ebp
// 0047b5b4  5b                   pop ebx
// 0047b5b5  3bef                 cmp ebp, edi
// 0047b5b7  7318                 jae 0x47b5d1
// 0047b5b9  8da42400000000       lea esp, [esp]
// 0047b5c0  8bce                 mov ecx, esi
// 0047b5c2  e8a9e4ffff           call 0x479a70
// 0047b5c7  81c660070000         add esi, 0x760
// 0047b5cd  3bf7                 cmp esi, edi
// 0047b5cf  72ef                 jb 0x47b5c0
// 0047b5d1  55                   push ebp
// 0047b5d2  e849c70800           call 0x507d20
// 0047b5d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047b5db  83c404               add esp, 4
// 0047b5de  5f                   pop edi
// 0047b5df  5e                   pop esi
// 0047b5e0  5d                   pop ebp
// 0047b5e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0047b5e8  83c414               add esp, 0x14
// 0047b5eb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?realloc@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
