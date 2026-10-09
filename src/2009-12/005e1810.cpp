// roc 2009-12 005e1810  unit: RBX::RbxG3D::RenderScene  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e1810
//
// 005e1810  51                   push ecx
// 005e1811  53                   push ebx
// 005e1812  8bd9                 mov ebx, ecx
// 005e1814  837b0400             cmp dword ptr [ebx + 4], 0
// 005e1818  c744240400000000     mov dword ptr [esp + 4], 0
// 005e1820  7e71                 jle 0x5e1893
// 005e1822  55                   push ebp
// 005e1823  56                   push esi
// 005e1824  57                   push edi
// 005e1825  33ed                 xor ebp, ebp
// 005e1827  8b03                 mov eax, dword ptr [ebx]
// 005e1829  8d7c2840             lea edi, [eax + ebp + 0x40]
// 005e182d  8b07                 mov eax, dword ptr [edi]
// 005e182f  85c0                 test eax, eax
// 005e1831  744c                 je 0x5e187f
// 005e1833  83c004               add eax, 4
// 005e1836  50                   push eax
// 005e1837  ff1508b29800         call dword ptr [0x98b208]
// 005e183d  85c0                 test eax, eax
// 005e183f  7538                 jne 0x5e1879
// 005e1841  8b0f                 mov ecx, dword ptr [edi]
// 005e1843  8b7108               mov esi, dword ptr [ecx + 8]
// 005e1846  85f6                 test esi, esi
// 005e1848  7421                 je 0x5e186b
// 005e184a  8d9b00000000         lea ebx, [ebx]
// 005e1850  8b0e                 mov ecx, dword ptr [esi]
// 005e1852  8b11                 mov edx, dword ptr [ecx]
// 005e1854  8b4204               mov eax, dword ptr [edx + 4]
// 005e1857  ffd0                 call eax
// 005e1859  8bc6                 mov eax, esi
// 005e185b  8b7604               mov esi, dword ptr [esi + 4]
// 005e185e  50                   push eax
// 005e185f  e8f61f2100           call 0x7f385a
// 005e1864  83c404               add esp, 4
// 005e1867  85f6                 test esi, esi
// 005e1869  75e5                 jne 0x5e1850
// 005e186b  8b0f                 mov ecx, dword ptr [edi]
// 005e186d  85c9                 test ecx, ecx
// 005e186f  7408                 je 0x5e1879
// 005e1871  8b11                 mov edx, dword ptr [ecx]
// 005e1873  8b02                 mov eax, dword ptr [edx]
// 005e1875  6a01                 push 1
// 005e1877  ffd0                 call eax
// 005e1879  c70700000000         mov dword ptr [edi], 0
// 005e187f  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e1883  40                   inc eax
// 005e1884  83c544               add ebp, 0x44
// 005e1887  3b4304               cmp eax, dword ptr [ebx + 4]
// 005e188a  89442410             mov dword ptr [esp + 0x10], eax
// 005e188e  7c97                 jl 0x5e1827
// 005e1890  5f                   pop edi
// 005e1891  5e                   pop esi
// 005e1892  5d                   pop ebp
// 005e1893  8b0b                 mov ecx, dword ptr [ebx]
// 005e1895  51                   push ecx
// 005e1896  e8458b0000           call 0x5ea3e0
// 005e189b  83c404               add esp, 4
// 005e189e  c70300000000         mov dword ptr [ebx], 0
// 005e18a4  c7430400000000       mov dword ptr [ebx + 4], 0
// 005e18ab  c7430800000000       mov dword ptr [ebx + 8], 0
// 005e18b2  5b                   pop ebx
// 005e18b3  59                   pop ecx
// 005e18b4  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ??1?$Array@VRenderSurface@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
