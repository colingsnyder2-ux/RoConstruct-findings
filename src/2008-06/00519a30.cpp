// roc 2008-06 00519a30  unit: G3D::_internal::DialogTemplate  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519a30
//
// 00519a30  53                   push ebx
// 00519a31  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00519a35  56                   push esi
// 00519a36  8bc3                 mov eax, ebx
// 00519a38  57                   push edi
// 00519a39  8bf1                 mov esi, ecx
// 00519a3b  8d5001               lea edx, [eax + 1]
// 00519a3e  8bff                 mov edi, edi
// 00519a40  8a08                 mov cl, byte ptr [eax]
// 00519a42  40                   inc eax
// 00519a43  84c9                 test cl, cl
// 00519a45  75f9                 jne 0x519a40
// 00519a47  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00519a4a  2bc2                 sub eax, edx
// 00519a4c  8d7801               lea edi, [eax + 1]
// 00519a4f  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00519a52  03c7                 add eax, edi
// 00519a54  3bc8                 cmp ecx, eax
// 00519a56  7c02                 jl 0x519a5a
// 00519a58  8bc1                 mov eax, ecx
// 00519a5a  3b4638               cmp eax, dword ptr [esi + 0x38]
// 00519a5d  894634               mov dword ptr [esi + 0x34], eax
// 00519a60  7e09                 jle 0x519a6b
// 00519a62  51                   push ecx
// 00519a63  57                   push edi
// 00519a64  8bce                 mov ecx, esi
// 00519a66  e8c5fdffff           call 0x519830
// 00519a6b  8b4630               mov eax, dword ptr [esi + 0x30]
// 00519a6e  03463c               add eax, dword ptr [esi + 0x3c]
// 00519a71  57                   push edi
// 00519a72  53                   push ebx
// 00519a73  50                   push eax
// 00519a74  e867effeff           call 0x5089e0
// 00519a79  017e3c               add dword ptr [esi + 0x3c], edi
// 00519a7c  83c40c               add esp, 0xc
// 00519a7f  5f                   pop edi
// 00519a80  5e                   pop esi
// 00519a81  5b                   pop ebx
// 00519a82  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeString@BinaryOutput@G3D@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
