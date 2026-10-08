// roc 2009-06 0056ac30  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ac30
//
// 0056ac30  6aff                 push -1
// 0056ac32  68bbfb8500           push 0x85fbbb
// 0056ac37  64a100000000         mov eax, dword ptr fs:[0]
// 0056ac3d  50                   push eax
// 0056ac3e  64892500000000       mov dword ptr fs:[0], esp
// 0056ac45  51                   push ecx
// 0056ac46  56                   push esi
// 0056ac47  8bf1                 mov esi, ecx
// 0056ac49  57                   push edi
// 0056ac4a  89742408             mov dword ptr [esp + 8], esi
// 0056ac4e  33ff                 xor edi, edi
// 0056ac50  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 0056ac56  897e04               mov dword ptr [esi + 4], edi
// 0056ac59  897c2414             mov dword ptr [esp + 0x14], edi
// 0056ac5d  897e08               mov dword ptr [esi + 8], edi
// 0056ac60  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056ac64  8d4e0c               lea ecx, [esi + 0xc]
// 0056ac67  c70684aa8c00         mov dword ptr [esi], 0x8caa84
// 0056ac6d  50                   push eax
// 0056ac6e  c644241801           mov byte ptr [esp + 0x18], 1
// 0056ac73  8939                 mov dword ptr [ecx], edi
// 0056ac75  e8e64bf3ff           call 0x49f860
// 0056ac7a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056ac7e  894e10               mov dword ptr [esi + 0x10], ecx
// 0056ac81  c6461401             mov byte ptr [esi + 0x14], 1
// 0056ac85  6a10                 push 0x10
// 0056ac87  6a28                 push 0x28
// 0056ac89  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0056ac8e  c7461854aa8c00       mov dword ptr [esi + 0x18], 0x8caa54
// 0056ac95  c746240a000000       mov dword ptr [esi + 0x24], 0xa
// 0056ac9c  897e1c               mov dword ptr [esi + 0x1c], edi
// 0056ac9f  e8cc040000           call 0x56b170
// 0056aca4  8b5624               mov edx, dword ptr [esi + 0x24]
// 0056aca7  03d2                 add edx, edx
// 0056aca9  03d2                 add edx, edx
// 0056acab  52                   push edx
// 0056acac  57                   push edi
// 0056acad  50                   push eax
// 0056acae  894620               mov dword ptr [esi + 0x20], eax
// 0056acb1  e8da110000           call 0x56be90
// 0056acb6  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056acba  83c414               add esp, 0x14
// 0056acbd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0056acc5  3bc7                 cmp eax, edi
// 0056acc7  7427                 je 0x56acf0
// 0056acc9  83c004               add eax, 4
// 0056accc  50                   push eax
// 0056accd  ff15a4e18900         call dword ptr [0x89e1a4]
// 0056acd3  85c0                 test eax, eax
// 0056acd5  7519                 jne 0x56acf0
// 0056acd7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056acdb  e8a0a0edff           call 0x444d80
// 0056ace0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056ace4  3bcf                 cmp ecx, edi
// 0056ace6  7408                 je 0x56acf0
// 0056ace8  8b01                 mov eax, dword ptr [ecx]
// 0056acea  8b10                 mov edx, dword ptr [eax]
// 0056acec  6a01                 push 1
// 0056acee  ffd2                 call edx
// 0056acf0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056acf4  5f                   pop edi
// 0056acf5  8bc6                 mov eax, esi
// 0056acf7  5e                   pop esi
// 0056acf8  64890d00000000       mov dword ptr fs:[0], ecx
// 0056acff  83c410               add esp, 0x10
// 0056ad02  c20800               ret 8
// library rbxgs-render/DepthBlur.cpp (function ??0Shader@G3D@@IAE@V?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@1@W4UseG3DUniforms@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
