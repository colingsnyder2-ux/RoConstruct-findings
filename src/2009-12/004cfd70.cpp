// roc 2009-12 004cfd70  unit: G3D::PBVTextureFormat::?$Table  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cfd70
//
// 004cfd70  6aff                 push -1
// 004cfd72  6853319300           push 0x933153
// 004cfd77  64a100000000         mov eax, dword ptr fs:[0]
// 004cfd7d  50                   push eax
// 004cfd7e  64892500000000       mov dword ptr fs:[0], esp
// 004cfd85  81ec68070000         sub esp, 0x768
// 004cfd8b  56                   push esi
// 004cfd8c  8bf1                 mov esi, ecx
// 004cfd8e  8b4604               mov eax, dword ptr [esi + 4]
// 004cfd91  3b4608               cmp eax, dword ptr [esi + 8]
// 004cfd94  89742408             mov dword ptr [esp + 8], esi
// 004cfd98  7d43                 jge 0x4cfddd
// 004cfd9a  69c060070000         imul eax, eax, 0x760
// 004cfda0  0306                 add eax, dword ptr [esi]
// 004cfda2  89442404             mov dword ptr [esp + 4], eax
// 004cfda6  c784247407000000000000 mov dword ptr [esp + 0x774], 0
// 004cfdb1  740f                 je 0x4cfdc2
// 004cfdb3  8b8c247c070000       mov ecx, dword ptr [esp + 0x77c]
// 004cfdba  51                   push ecx
// 004cfdbb  8bc8                 mov ecx, eax
// 004cfdbd  e8fef1ffff           call 0x4cefc0
// 004cfdc2  ff4604               inc dword ptr [esi + 4]
// 004cfdc5  5e                   pop esi
// 004cfdc6  8b8c2468070000       mov ecx, dword ptr [esp + 0x768]
// 004cfdcd  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfdd4  81c474070000         add esp, 0x774
// 004cfdda  c20400               ret 4
// 004cfddd  8b0e                 mov ecx, dword ptr [esi]
// 004cfddf  57                   push edi
// 004cfde0  8bbc2480070000       mov edi, dword ptr [esp + 0x780]
// 004cfde7  3bf9                 cmp edi, ecx
// 004cfde9  7245                 jb 0x4cfe30
// 004cfdeb  8bd0                 mov edx, eax
// 004cfded  69d260070000         imul edx, edx, 0x760
// 004cfdf3  03d1                 add edx, ecx
// 004cfdf5  3bfa                 cmp edi, edx
// 004cfdf7  7337                 jae 0x4cfe30
// 004cfdf9  57                   push edi
// 004cfdfa  8d4c2414             lea ecx, [esp + 0x14]
// 004cfdfe  e8bdf1ffff           call 0x4cefc0
// 004cfe03  8d442410             lea eax, [esp + 0x10]
// 004cfe07  50                   push eax
// 004cfe08  8bce                 mov ecx, esi
// 004cfe0a  c784247c07000001000000 mov dword ptr [esp + 0x77c], 1
// 004cfe15  e856ffffff           call 0x4cfd70
// 004cfe1a  8d4c2410             lea ecx, [esp + 0x10]
// 004cfe1e  c7842478070000ffffffff mov dword ptr [esp + 0x778], 0xffffffff
// 004cfe29  e812daffff           call 0x4cd840
// 004cfe2e  eb23                 jmp 0x4cfe53
// 004cfe30  6a00                 push 0
// 004cfe32  40                   inc eax
// 004cfe33  50                   push eax
// 004cfe34  8bce                 mov ecx, esi
// 004cfe36  e8a5fdffff           call 0x4cfbe0
// 004cfe3b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cfe3e  8b16                 mov edx, dword ptr [esi]
// 004cfe40  69c960070000         imul ecx, ecx, 0x760
// 004cfe46  57                   push edi
// 004cfe47  8d8c11a0f8ffff       lea ecx, [ecx + edx - 0x760]
// 004cfe4e  e8bde2ffff           call 0x4ce110
// 004cfe53  8b8c2470070000       mov ecx, dword ptr [esp + 0x770]
// 004cfe5a  5f                   pop edi
// 004cfe5b  5e                   pop esi
// 004cfe5c  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfe63  81c474070000         add esp, 0x774
// 004cfe69  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?append@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXABVRenderState@RenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
