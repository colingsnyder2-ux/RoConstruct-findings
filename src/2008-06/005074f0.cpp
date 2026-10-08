// roc 2008-06 005074f0  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005074f0
//
// 005074f0  6aff                 push -1
// 005074f2  682bb97c00           push 0x7cb92b
// 005074f7  64a100000000         mov eax, dword ptr fs:[0]
// 005074fd  50                   push eax
// 005074fe  64892500000000       mov dword ptr fs:[0], esp
// 00507505  51                   push ecx
// 00507506  56                   push esi
// 00507507  8bf1                 mov esi, ecx
// 00507509  57                   push edi
// 0050750a  89742408             mov dword ptr [esp + 8], esi
// 0050750e  33ff                 xor edi, edi
// 00507510  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 00507516  897e04               mov dword ptr [esi + 4], edi
// 00507519  897c2414             mov dword ptr [esp + 0x14], edi
// 0050751d  897e08               mov dword ptr [esi + 8], edi
// 00507520  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00507524  8d4e0c               lea ecx, [esi + 0xc]
// 00507527  c706d4748200         mov dword ptr [esi], 0x8274d4
// 0050752d  50                   push eax
// 0050752e  c644241801           mov byte ptr [esp + 0x18], 1
// 00507533  8939                 mov dword ptr [ecx], edi
// 00507535  e8661a0900           call 0x598fa0
// 0050753a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050753e  894e10               mov dword ptr [esi + 0x10], ecx
// 00507541  c6461401             mov byte ptr [esi + 0x14], 1
// 00507545  6a10                 push 0x10
// 00507547  6a28                 push 0x28
// 00507549  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0050754e  c74618a4748200       mov dword ptr [esi + 0x18], 0x8274a4
// 00507555  c746240a000000       mov dword ptr [esi + 0x24], 0xa
// 0050755c  897e1c               mov dword ptr [esi + 0x1c], edi
// 0050755f  e81c100000           call 0x508580
// 00507564  8b5624               mov edx, dword ptr [esi + 0x24]
// 00507567  03d2                 add edx, edx
// 00507569  03d2                 add edx, edx
// 0050756b  52                   push edx
// 0050756c  57                   push edi
// 0050756d  50                   push eax
// 0050756e  894620               mov dword ptr [esi + 0x20], eax
// 00507571  e8ba140000           call 0x508a30
// 00507576  8b442430             mov eax, dword ptr [esp + 0x30]
// 0050757a  83c414               add esp, 0x14
// 0050757d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00507585  3bc7                 cmp eax, edi
// 00507587  7427                 je 0x5075b0
// 00507589  83c004               add eax, 4
// 0050758c  50                   push eax
// 0050758d  ff15ac218000         call dword ptr [0x8021ac]
// 00507593  85c0                 test eax, eax
// 00507595  7519                 jne 0x5075b0
// 00507597  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050759b  e8f037f5ff           call 0x45ad90
// 005075a0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005075a4  3bcf                 cmp ecx, edi
// 005075a6  7408                 je 0x5075b0
// 005075a8  8b01                 mov eax, dword ptr [ecx]
// 005075aa  8b10                 mov edx, dword ptr [eax]
// 005075ac  6a01                 push 1
// 005075ae  ffd2                 call edx
// 005075b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005075b4  5f                   pop edi
// 005075b5  8bc6                 mov eax, esi
// 005075b7  5e                   pop esi
// 005075b8  64890d00000000       mov dword ptr fs:[0], ecx
// 005075bf  83c410               add esp, 0x10
// 005075c2  c20800               ret 8
// library rbxgs-render/DepthBlur.cpp (function ??0Shader@G3D@@IAE@V?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@1@W4UseG3DUniforms@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
