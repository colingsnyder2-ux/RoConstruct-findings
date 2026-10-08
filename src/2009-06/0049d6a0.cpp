// from server: 100% by auto
// roc 2009-06 0049d6a0  unit: G3D::Texture  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049d6a0
//
// 0049d6a0  53                   push ebx
// 0049d6a1  55                   push ebp
// 0049d6a2  8bd9                 mov ebx, ecx
// 0049d6a4  33ed                 xor ebp, ebp
// 0049d6a6  396b04               cmp dword ptr [ebx + 4], ebp
// 0049d6a9  7e5e                 jle 0x49d709
// 0049d6ab  56                   push esi
// 0049d6ac  57                   push edi
// 0049d6ad  8d4900               lea ecx, [ecx]
// 0049d6b0  8b03                 mov eax, dword ptr [ebx]
// 0049d6b2  8d3ca8               lea edi, [eax + ebp*4]
// 0049d6b5  8b07                 mov eax, dword ptr [edi]
// 0049d6b7  85c0                 test eax, eax
// 0049d6b9  7446                 je 0x49d701
// 0049d6bb  83c004               add eax, 4
// 0049d6be  50                   push eax
// 0049d6bf  ff15a4e18900         call dword ptr [0x89e1a4]
// 0049d6c5  85c0                 test eax, eax
// 0049d6c7  7532                 jne 0x49d6fb
// 0049d6c9  8b0f                 mov ecx, dword ptr [edi]
// 0049d6cb  8b7108               mov esi, dword ptr [ecx + 8]
// 0049d6ce  85f6                 test esi, esi
// 0049d6d0  741b                 je 0x49d6ed
// 0049d6d2  8b0e                 mov ecx, dword ptr [esi]
// 0049d6d4  8b11                 mov edx, dword ptr [ecx]
// 0049d6d6  8b4204               mov eax, dword ptr [edx + 4]
// 0049d6d9  ffd0                 call eax
// 0049d6db  8bc6                 mov eax, esi
// 0049d6dd  8b7604               mov esi, dword ptr [esi + 4]
// 0049d6e0  50                   push eax
// 0049d6e1  e84cb32700           call 0x718a32
// 0049d6e6  83c404               add esp, 4
// 0049d6e9  85f6                 test esi, esi
// 0049d6eb  75e5                 jne 0x49d6d2
// 0049d6ed  8b0f                 mov ecx, dword ptr [edi]
// 0049d6ef  85c9                 test ecx, ecx
// 0049d6f1  7408                 je 0x49d6fb
// 0049d6f3  8b11                 mov edx, dword ptr [ecx]
// 0049d6f5  8b02                 mov eax, dword ptr [edx]
// 0049d6f7  6a01                 push 1
// 0049d6f9  ffd0                 call eax
// 0049d6fb  c70700000000         mov dword ptr [edi], 0
// 0049d701  45                   inc ebp
// 0049d702  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0049d705  7ca9                 jl 0x49d6b0
// 0049d707  5f                   pop edi
// 0049d708  5e                   pop esi
// 0049d709  8b0b                 mov ecx, dword ptr [ebx]
// 0049d70b  51                   push ecx
// 0049d70c  e87fdb0c00           call 0x56b290
// 0049d711  83c404               add esp, 4
// 0049d714  5d                   pop ebp
// 0049d715  c70300000000         mov dword ptr [ebx], 0
// 0049d71b  c7430400000000       mov dword ptr [ebx + 4], 0
// 0049d722  c7430800000000       mov dword ptr [ebx + 8], 0
// 0049d729  5b                   pop ebx
// 0049d72a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ??1?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
