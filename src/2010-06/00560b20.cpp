// roc 2010-06 00560b20  unit: G3D::_internal::DialogTemplate  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560b20
//
// 00560b20  53                   push ebx
// 00560b21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00560b25  56                   push esi
// 00560b26  8bc3                 mov eax, ebx
// 00560b28  57                   push edi
// 00560b29  8bf1                 mov esi, ecx
// 00560b2b  8d5001               lea edx, [eax + 1]
// 00560b2e  8bff                 mov edi, edi
// 00560b30  8a08                 mov cl, byte ptr [eax]
// 00560b32  40                   inc eax
// 00560b33  84c9                 test cl, cl
// 00560b35  75f9                 jne 0x560b30
// 00560b37  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00560b3a  2bc2                 sub eax, edx
// 00560b3c  8d7801               lea edi, [eax + 1]
// 00560b3f  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00560b42  03c7                 add eax, edi
// 00560b44  3bc8                 cmp ecx, eax
// 00560b46  7c02                 jl 0x560b4a
// 00560b48  8bc1                 mov eax, ecx
// 00560b4a  3b4638               cmp eax, dword ptr [esi + 0x38]
// 00560b4d  894634               mov dword ptr [esi + 0x34], eax
// 00560b50  7e09                 jle 0x560b5b
// 00560b52  51                   push ecx
// 00560b53  57                   push edi
// 00560b54  8bce                 mov ecx, esi
// 00560b56  e8c5fdffff           call 0x560920
// 00560b5b  8b4630               mov eax, dword ptr [esi + 0x30]
// 00560b5e  03463c               add eax, dword ptr [esi + 0x3c]
// 00560b61  57                   push edi
// 00560b62  53                   push ebx
// 00560b63  50                   push eax
// 00560b64  e8e7d9feff           call 0x54e550
// 00560b69  017e3c               add dword ptr [esi + 0x3c], edi
// 00560b6c  83c40c               add esp, 0xc
// 00560b6f  5f                   pop edi
// 00560b70  5e                   pop esi
// 00560b71  5b                   pop ebx
// 00560b72  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeString@BinaryOutput@G3D@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
