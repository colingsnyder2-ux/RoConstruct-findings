// from server: 100% by auto
// roc 2009-06 004b0f10  unit: G3D::Shader  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b0f10
//
// 004b0f10  6aff                 push -1
// 004b0f12  68e8818500           push 0x8581e8
// 004b0f17  64a100000000         mov eax, dword ptr fs:[0]
// 004b0f1d  50                   push eax
// 004b0f1e  64892500000000       mov dword ptr fs:[0], esp
// 004b0f25  83ec58               sub esp, 0x58
// 004b0f28  d9ee                 fldz 
// 004b0f2a  53                   push ebx
// 004b0f2b  d9542420             fst dword ptr [esp + 0x20]
// 004b0f2f  55                   push ebp
// 004b0f30  d9542420             fst dword ptr [esp + 0x20]
// 004b0f34  56                   push esi
// 004b0f35  d9542420             fst dword ptr [esp + 0x20]
// 004b0f39  57                   push edi
// 004b0f3a  d9542420             fst dword ptr [esp + 0x20]
// 004b0f3e  33ff                 xor edi, edi
// 004b0f40  d954243c             fst dword ptr [esp + 0x3c]
// 004b0f44  8be9                 mov ebp, ecx
// 004b0f46  d9542438             fst dword ptr [esp + 0x38]
// 004b0f4a  897c2460             mov dword ptr [esp + 0x60], edi
// 004b0f4e  d9542434             fst dword ptr [esp + 0x34]
// 004b0f52  d9542430             fst dword ptr [esp + 0x30]
// 004b0f56  d954244c             fst dword ptr [esp + 0x4c]
// 004b0f5a  d9542448             fst dword ptr [esp + 0x48]
// 004b0f5e  d9542444             fst dword ptr [esp + 0x44]
// 004b0f62  d9542440             fst dword ptr [esp + 0x40]
// 004b0f66  d954245c             fst dword ptr [esp + 0x5c]
// 004b0f6a  d9542458             fst dword ptr [esp + 0x58]
// 004b0f6e  d9542454             fst dword ptr [esp + 0x54]
// 004b0f72  d95c2450             fstp dword ptr [esp + 0x50]
// 004b0f76  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 004b0f7a  897c2470             mov dword ptr [esp + 0x70], edi
// 004b0f7e  c74424645c8b0000     mov dword ptr [esp + 0x64], 0x8b5c
// 004b0f86  8d742428             lea esi, [esp + 0x28]
// 004b0f8a  8d9b00000000         lea ebx, [ebx]
// 004b0f90  57                   push edi
// 004b0f91  8d442414             lea eax, [esp + 0x14]
// 004b0f95  50                   push eax
// 004b0f96  8bcb                 mov ecx, ebx
// 004b0f98  e8c3680c00           call 0x577860
// 004b0f9d  d900                 fld dword ptr [eax]
// 004b0f9f  d95ef8               fstp dword ptr [esi - 8]
// 004b0fa2  47                   inc edi
// 004b0fa3  d94004               fld dword ptr [eax + 4]
// 004b0fa6  83c610               add esi, 0x10
// 004b0fa9  83ff04               cmp edi, 4
// 004b0fac  d95eec               fstp dword ptr [esi - 0x14]
// 004b0faf  d94008               fld dword ptr [eax + 8]
// 004b0fb2  d95ef0               fstp dword ptr [esi - 0x10]
// 004b0fb5  d9400c               fld dword ptr [eax + 0xc]
// 004b0fb8  d95ef4               fstp dword ptr [esi - 0xc]
// 004b0fbb  7cd3                 jl 0x4b0f90
// 004b0fbd  8b542478             mov edx, dword ptr [esp + 0x78]
// 004b0fc1  8d4c2420             lea ecx, [esp + 0x20]
// 004b0fc5  51                   push ecx
// 004b0fc6  52                   push edx
// 004b0fc7  8bcd                 mov ecx, ebp
// 004b0fc9  e872f8ffff           call 0x4b0840
// 004b0fce  8b442460             mov eax, dword ptr [esp + 0x60]
// 004b0fd2  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 004b0fda  85c0                 test eax, eax
// 004b0fdc  7444                 je 0x4b1022
// 004b0fde  83c004               add eax, 4
// 004b0fe1  50                   push eax
// 004b0fe2  ff15a4e18900         call dword ptr [0x89e1a4]
// 004b0fe8  85c0                 test eax, eax
// 004b0fea  7536                 jne 0x4b1022
// 004b0fec  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004b0ff0  8b7108               mov esi, dword ptr [ecx + 8]
// 004b0ff3  85f6                 test esi, esi
// 004b0ff5  741f                 je 0x4b1016
// 004b0ff7  8b0e                 mov ecx, dword ptr [esi]
// 004b0ff9  8b01                 mov eax, dword ptr [ecx]
// 004b0ffb  8b5004               mov edx, dword ptr [eax + 4]
// 004b0ffe  ffd2                 call edx
// 004b1000  8bc6                 mov eax, esi
// 004b1002  8b7604               mov esi, dword ptr [esi + 4]
// 004b1005  50                   push eax
// 004b1006  e8277a2600           call 0x718a32
// 004b100b  83c404               add esp, 4
// 004b100e  85f6                 test esi, esi
// 004b1010  75e5                 jne 0x4b0ff7
// 004b1012  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004b1016  85c9                 test ecx, ecx
// 004b1018  7408                 je 0x4b1022
// 004b101a  8b01                 mov eax, dword ptr [ecx]
// 004b101c  8b10                 mov edx, dword ptr [eax]
// 004b101e  6a01                 push 1
// 004b1020  ffd2                 call edx
// 004b1022  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004b1026  5f                   pop edi
// 004b1027  5e                   pop esi
// 004b1028  5d                   pop ebp
// 004b1029  5b                   pop ebx
// 004b102a  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1031  83c464               add esp, 0x64
// 004b1034  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVMatrix4@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
