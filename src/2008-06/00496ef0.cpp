// roc 2008-06 00496ef0  unit: RBX::Network::Players  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496ef0
//
// 00496ef0  53                   push ebx
// 00496ef1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00496ef5  8b4304               mov eax, dword ptr [ebx + 4]
// 00496ef8  56                   push esi
// 00496ef9  57                   push edi
// 00496efa  33ff                 xor edi, edi
// 00496efc  3bc7                 cmp eax, edi
// 00496efe  8bf1                 mov esi, ecx
// 00496f00  897e04               mov dword ptr [esi + 4], edi
// 00496f03  897e08               mov dword ptr [esi + 8], edi
// 00496f06  893e                 mov dword ptr [esi], edi
// 00496f08  7e0a                 jle 0x496f14
// 00496f0a  6a01                 push 1
// 00496f0c  50                   push eax
// 00496f0d  e8ae38ffff           call 0x48a7c0
// 00496f12  eb02                 jmp 0x496f16
// 00496f14  893e                 mov dword ptr [esi], edi
// 00496f16  397e04               cmp dword ptr [esi + 4], edi
// 00496f19  7e2e                 jle 0x496f49
// 00496f1b  33d2                 xor edx, edx
// 00496f1d  8d4900               lea ecx, [ecx]
// 00496f20  8b03                 mov eax, dword ptr [ebx]
// 00496f22  8b0e                 mov ecx, dword ptr [esi]
// 00496f24  d90410               fld dword ptr [eax + edx]
// 00496f27  03c2                 add eax, edx
// 00496f29  d91c11               fstp dword ptr [ecx + edx]
// 00496f2c  d94004               fld dword ptr [eax + 4]
// 00496f2f  03ca                 add ecx, edx
// 00496f31  d95904               fstp dword ptr [ecx + 4]
// 00496f34  47                   inc edi
// 00496f35  d94008               fld dword ptr [eax + 8]
// 00496f38  83c210               add edx, 0x10
// 00496f3b  d95908               fstp dword ptr [ecx + 8]
// 00496f3e  d9400c               fld dword ptr [eax + 0xc]
// 00496f41  d9590c               fstp dword ptr [ecx + 0xc]
// 00496f44  3b7e04               cmp edi, dword ptr [esi + 4]
// 00496f47  7cd7                 jl 0x496f20
// 00496f49  5f                   pop edi
// 00496f4a  5e                   pop esi
// 00496f4b  5b                   pop ebx
// 00496f4c  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?_copy@?$Array@VVector4@G3D@@@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
