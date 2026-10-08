// roc 2008-06 00479c30  unit: CInstanceRecord::CNameItem  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479c30
//
// 00479c30  64a100000000         mov eax, dword ptr fs:[0]
// 00479c36  6aff                 push -1
// 00479c38  68c14a7c00           push 0x7c4ac1
// 00479c3d  50                   push eax
// 00479c3e  64892500000000       mov dword ptr fs:[0], esp
// 00479c45  83ec20               sub esp, 0x20
// 00479c48  56                   push esi
// 00479c49  8bf1                 mov esi, ecx
// 00479c4b  8b4638               mov eax, dword ptr [esi + 0x38]
// 00479c4e  897024               mov dword ptr [eax + 0x24], esi
// 00479c51  833dccef960001       cmp dword ptr [0x96efcc], 1
// 00479c58  0f8481000000         je 0x479cdf
// 00479c5e  57                   push edi
// 00479c5f  68f4e68100           push 0x81e6f4
// 00479c64  8d4c2410             lea ecx, [esp + 0x10]
// 00479c68  ff1558248000         call dword ptr [0x802458]
// 00479c6e  8d44240c             lea eax, [esp + 0xc]
// 00479c72  50                   push eax
// 00479c73  8d4c240c             lea ecx, [esp + 0xc]
// 00479c77  51                   push ecx
// 00479c78  8bce                 mov ecx, esi
// 00479c7a  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00479c82  e8f9fbffff           call 0x479880
// 00479c87  8d4c240c             lea ecx, [esp + 0xc]
// 00479c8b  c644243002           mov byte ptr [esp + 0x30], 2
// 00479c90  ff1568248000         call dword ptr [0x802468]
// 00479c96  8b7c2408             mov edi, dword ptr [esp + 8]
// 00479c9a  ff4678               inc dword ptr [esi + 0x78]
// 00479c9d  ff4670               inc dword ptr [esi + 0x70]
// 00479ca0  8bcf                 mov ecx, edi
// 00479ca2  e8e9b40000           call 0x485190
// 00479ca7  8b7638               mov esi, dword ptr [esi + 0x38]
// 00479caa  8d4e0c               lea ecx, [esi + 0xc]
// 00479cad  57                   push edi
// 00479cae  e8edf21100           call 0x598fa0
// 00479cb3  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00479cbb  85ff                 test edi, edi
// 00479cbd  741f                 je 0x479cde
// 00479cbf  8d5704               lea edx, [edi + 4]
// 00479cc2  52                   push edx
// 00479cc3  ff15ac218000         call dword ptr [0x8021ac]
// 00479cc9  85c0                 test eax, eax
// 00479ccb  7511                 jne 0x479cde
// 00479ccd  8bcf                 mov ecx, edi
// 00479ccf  e8bc10feff           call 0x45ad90
// 00479cd4  8b07                 mov eax, dword ptr [edi]
// 00479cd6  8b10                 mov edx, dword ptr [eax]
// 00479cd8  6a01                 push 1
// 00479cda  8bcf                 mov ecx, edi
// 00479cdc  ffd2                 call edx
// 00479cde  5f                   pop edi
// 00479cdf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00479ce3  5e                   pop esi
// 00479ce4  64890d00000000       mov dword ptr fs:[0], ecx
// 00479ceb  83c42c               add esp, 0x2c
// 00479cee  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVARAreaMilestone@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
