// from server: 100% by auto
// roc 2009-06 0049d9f0  unit: G3D::VARArea  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049d9f0
//
// 0049d9f0  55                   push ebp
// 0049d9f1  33ed                 xor ebp, ebp
// 0049d9f3  392d74c8a300         cmp dword ptr [0xa3c874], ebp
// 0049d9f9  0f8eb6000000         jle 0x49dab5
// 0049d9ff  53                   push ebx
// 0049da00  56                   push esi
// 0049da01  57                   push edi
// 0049da02  a170c8a300           mov eax, dword ptr [0xa3c870]
// 0049da07  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0049da0a  8b4804               mov ecx, dword ptr [eax + 4]
// 0049da0d  83c004               add eax, 4
// 0049da10  83f901               cmp ecx, 1
// 0049da13  0f858c000000         jne 0x49daa5
// 0049da19  a170c8a300           mov eax, dword ptr [0xa3c870]
// 0049da1e  8b1574c8a300         mov edx, dword ptr [0xa3c874]
// 0049da24  8b5c90fc             mov ebx, dword ptr [eax + edx*4 - 4]
// 0049da28  8d3ca8               lea edi, [eax + ebp*4]
// 0049da2b  8b07                 mov eax, dword ptr [edi]
// 0049da2d  3bd8                 cmp ebx, eax
// 0049da2f  745e                 je 0x49da8f
// 0049da31  85c0                 test eax, eax
// 0049da33  744a                 je 0x49da7f
// 0049da35  83c004               add eax, 4
// 0049da38  50                   push eax
// 0049da39  ff15a4e18900         call dword ptr [0x89e1a4]
// 0049da3f  85c0                 test eax, eax
// 0049da41  7536                 jne 0x49da79
// 0049da43  8b07                 mov eax, dword ptr [edi]
// 0049da45  8b7008               mov esi, dword ptr [eax + 8]
// 0049da48  85f6                 test esi, esi
// 0049da4a  741f                 je 0x49da6b
// 0049da4c  8d642400             lea esp, [esp]
// 0049da50  8b0e                 mov ecx, dword ptr [esi]
// 0049da52  8b11                 mov edx, dword ptr [ecx]
// 0049da54  8b4204               mov eax, dword ptr [edx + 4]
// 0049da57  ffd0                 call eax
// 0049da59  8bc6                 mov eax, esi
// 0049da5b  8b7604               mov esi, dword ptr [esi + 4]
// 0049da5e  50                   push eax
// 0049da5f  e8ceaf2700           call 0x718a32
// 0049da64  83c404               add esp, 4
// 0049da67  85f6                 test esi, esi
// 0049da69  75e5                 jne 0x49da50
// 0049da6b  8b0f                 mov ecx, dword ptr [edi]
// 0049da6d  85c9                 test ecx, ecx
// 0049da6f  7408                 je 0x49da79
// 0049da71  8b11                 mov edx, dword ptr [ecx]
// 0049da73  8b02                 mov eax, dword ptr [edx]
// 0049da75  6a01                 push 1
// 0049da77  ffd0                 call eax
// 0049da79  c70700000000         mov dword ptr [edi], 0
// 0049da7f  85db                 test ebx, ebx
// 0049da81  740c                 je 0x49da8f
// 0049da83  891f                 mov dword ptr [edi], ebx
// 0049da85  83c304               add ebx, 4
// 0049da88  53                   push ebx
// 0049da89  ff15d0e18900         call dword ptr [0x89e1d0]
// 0049da8f  8b0d74c8a300         mov ecx, dword ptr [0xa3c874]
// 0049da95  49                   dec ecx
// 0049da96  6a01                 push 1
// 0049da98  51                   push ecx
// 0049da99  b970c8a300           mov ecx, 0xa3c870
// 0049da9e  e88dfcffff           call 0x49d730
// 0049daa3  eb01                 jmp 0x49daa6
// 0049daa5  45                   inc ebp
// 0049daa6  3b2d74c8a300         cmp ebp, dword ptr [0xa3c874]
// 0049daac  0f8c50ffffff         jl 0x49da02
// 0049dab2  5f                   pop edi
// 0049dab3  5e                   pop esi
// 0049dab4  5b                   pop ebx
// 0049dab5  5d                   pop ebp
// 0049dab6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?cleanCache@VARArea@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
