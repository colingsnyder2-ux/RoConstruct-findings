// roc 2008-06 00486fe0  unit: G3D::Shader  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00486fe0
//
// 00486fe0  6aff                 push -1
// 00486fe2  6858577c00           push 0x7c5758
// 00486fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00486fed  50                   push eax
// 00486fee  64892500000000       mov dword ptr fs:[0], esp
// 00486ff5  83ec58               sub esp, 0x58
// 00486ff8  d9ee                 fldz 
// 00486ffa  53                   push ebx
// 00486ffb  d9542420             fst dword ptr [esp + 0x20]
// 00486fff  55                   push ebp
// 00487000  d9542420             fst dword ptr [esp + 0x20]
// 00487004  56                   push esi
// 00487005  d9542420             fst dword ptr [esp + 0x20]
// 00487009  57                   push edi
// 0048700a  d9542420             fst dword ptr [esp + 0x20]
// 0048700e  33ff                 xor edi, edi
// 00487010  d954243c             fst dword ptr [esp + 0x3c]
// 00487014  8be9                 mov ebp, ecx
// 00487016  d9542438             fst dword ptr [esp + 0x38]
// 0048701a  897c2460             mov dword ptr [esp + 0x60], edi
// 0048701e  d9542434             fst dword ptr [esp + 0x34]
// 00487022  d9542430             fst dword ptr [esp + 0x30]
// 00487026  d954244c             fst dword ptr [esp + 0x4c]
// 0048702a  d9542448             fst dword ptr [esp + 0x48]
// 0048702e  d9542444             fst dword ptr [esp + 0x44]
// 00487032  d9542440             fst dword ptr [esp + 0x40]
// 00487036  d954245c             fst dword ptr [esp + 0x5c]
// 0048703a  d9542458             fst dword ptr [esp + 0x58]
// 0048703e  d9542454             fst dword ptr [esp + 0x54]
// 00487042  d95c2450             fstp dword ptr [esp + 0x50]
// 00487046  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 0048704a  897c2470             mov dword ptr [esp + 0x70], edi
// 0048704e  c74424645c8b0000     mov dword ptr [esp + 0x64], 0x8b5c
// 00487056  8d742428             lea esi, [esp + 0x28]
// 0048705a  8d9b00000000         lea ebx, [ebx]
// 00487060  57                   push edi
// 00487061  8d442414             lea eax, [esp + 0x14]
// 00487065  50                   push eax
// 00487066  8bcb                 mov ecx, ebx
// 00487068  e8c3d50800           call 0x514630
// 0048706d  d900                 fld dword ptr [eax]
// 0048706f  d95ef8               fstp dword ptr [esi - 8]
// 00487072  47                   inc edi
// 00487073  d94004               fld dword ptr [eax + 4]
// 00487076  83c610               add esi, 0x10
// 00487079  83ff04               cmp edi, 4
// 0048707c  d95eec               fstp dword ptr [esi - 0x14]
// 0048707f  d94008               fld dword ptr [eax + 8]
// 00487082  d95ef0               fstp dword ptr [esi - 0x10]
// 00487085  d9400c               fld dword ptr [eax + 0xc]
// 00487088  d95ef4               fstp dword ptr [esi - 0xc]
// 0048708b  7cd3                 jl 0x487060
// 0048708d  8b542478             mov edx, dword ptr [esp + 0x78]
// 00487091  8d4c2420             lea ecx, [esp + 0x20]
// 00487095  51                   push ecx
// 00487096  52                   push edx
// 00487097  8bcd                 mov ecx, ebp
// 00487099  e8f2f8ffff           call 0x486990
// 0048709e  8b442460             mov eax, dword ptr [esp + 0x60]
// 004870a2  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 004870aa  85c0                 test eax, eax
// 004870ac  7444                 je 0x4870f2
// 004870ae  83c004               add eax, 4
// 004870b1  50                   push eax
// 004870b2  ff15ac218000         call dword ptr [0x8021ac]
// 004870b8  85c0                 test eax, eax
// 004870ba  7536                 jne 0x4870f2
// 004870bc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004870c0  8b7108               mov esi, dword ptr [ecx + 8]
// 004870c3  85f6                 test esi, esi
// 004870c5  741f                 je 0x4870e6
// 004870c7  8b0e                 mov ecx, dword ptr [esi]
// 004870c9  8b01                 mov eax, dword ptr [ecx]
// 004870cb  8b5004               mov edx, dword ptr [eax + 4]
// 004870ce  ffd2                 call edx
// 004870d0  8bc6                 mov eax, esi
// 004870d2  8b7604               mov esi, dword ptr [esi + 4]
// 004870d5  50                   push eax
// 004870d6  e89f952100           call 0x6a067a
// 004870db  83c404               add esp, 4
// 004870de  85f6                 test esi, esi
// 004870e0  75e5                 jne 0x4870c7
// 004870e2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004870e6  85c9                 test ecx, ecx
// 004870e8  7408                 je 0x4870f2
// 004870ea  8b01                 mov eax, dword ptr [ecx]
// 004870ec  8b10                 mov edx, dword ptr [eax]
// 004870ee  6a01                 push 1
// 004870f0  ffd2                 call edx
// 004870f2  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004870f6  5f                   pop edi
// 004870f7  5e                   pop esi
// 004870f8  5d                   pop ebp
// 004870f9  5b                   pop ebx
// 004870fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00487101  83c464               add esp, 0x64
// 00487104  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVMatrix4@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
