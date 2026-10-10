// from server: 100% by tester
// roc 2007-03 00478050  unit: seg_00470000  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00478050
//
// 00478050  6aff                 push -1
// 00478052  68f1f37400           push 0x74f3f1
// 00478057  64a100000000         mov eax, dword ptr fs:[0]
// 0047805d  50                   push eax
// 0047805e  83ec08               sub esp, 8
// 00478061  53                   push ebx
// 00478062  55                   push ebp
// 00478063  56                   push esi
// 00478064  57                   push edi
// 00478065  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047806a  33c4                 xor eax, esp
// 0047806c  50                   push eax
// 0047806d  8d44241c             lea eax, [esp + 0x1c]
// 00478071  64a300000000         mov dword ptr fs:[0], eax
// 00478077  8bf9                 mov edi, ecx
// 00478079  8b4708               mov eax, dword ptr [edi + 8]
// 0047807c  8b2f                 mov ebp, dword ptr [edi]
// 0047807e  69c060070000         imul eax, eax, 0x760
// 00478084  6a10                 push 0x10
// 00478086  50                   push eax
// 00478087  e844bb0700           call 0x4f3bd0
// 0047808c  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047808f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00478093  83c408               add esp, 8
// 00478096  3bd1                 cmp edx, ecx
// 00478098  8907                 mov dword ptr [edi], eax
// 0047809a  7d02                 jge 0x47809e
// 0047809c  8bca                 mov ecx, edx
// 0047809e  69c960070000         imul ecx, ecx, 0x760
// 004780a4  03c8                 add ecx, eax
// 004780a6  8bf0                 mov esi, eax
// 004780a8  8bf9                 mov edi, ecx
// 004780aa  3bf7                 cmp esi, edi
// 004780ac  8bdd                 mov ebx, ebp
// 004780ae  89742414             mov dword ptr [esp + 0x14], esi
// 004780b2  7344                 jae 0x4780f8
// 004780b4  eb0a                 jmp 0x4780c0
// 004780b6  8da42400000000       lea esp, [esp]
// 004780bd  8d4900               lea ecx, [ecx]
// 004780c0  89742418             mov dword ptr [esp + 0x18], esi
// 004780c4  85f6                 test esi, esi
// 004780c6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004780ce  740c                 je 0x4780dc
// 004780d0  53                   push ebx
// 004780d1  8bce                 mov ecx, esi
// 004780d3  e878fbffff           call 0x477c50
// 004780d8  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004780dc  81c660070000         add esi, 0x760
// 004780e2  81c360070000         add ebx, 0x760
// 004780e8  3bf7                 cmp esi, edi
// 004780ea  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004780f2  89742414             mov dword ptr [esp + 0x14], esi
// 004780f6  72c8                 jb 0x4780c0
// 004780f8  69d260070000         imul edx, edx, 0x760
// 004780fe  03d5                 add edx, ebp
// 00478100  8bfa                 mov edi, edx
// 00478102  3bef                 cmp ebp, edi
// 00478104  8bf5                 mov esi, ebp
// 00478106  7311                 jae 0x478119
// 00478108  8bce                 mov ecx, esi
// 0047810a  e8b1e8ffff           call 0x4769c0
// 0047810f  81c660070000         add esi, 0x760
// 00478115  3bf7                 cmp esi, edi
// 00478117  72ef                 jb 0x478108
// 00478119  55                   push ebp
// 0047811a  e861b20700           call 0x4f3380
// 0047811f  83c404               add esp, 4
// 00478122  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00478126  64890d00000000       mov dword ptr fs:[0], ecx
// 0047812d  59                   pop ecx
// 0047812e  5f                   pop edi
// 0047812f  5e                   pop esi
// 00478130  5d                   pop ebp
// 00478131  5b                   pop ebx
// 00478132  83c414               add esp, 0x14
// 00478135  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?realloc@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
