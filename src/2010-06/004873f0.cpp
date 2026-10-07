// roc 2010-06 004873f0  unit: G3D::VARArea  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004873f0
//
// 004873f0  55                   push ebp
// 004873f1  33ed                 xor ebp, ebp
// 004873f3  392d2431c000         cmp dword ptr [0xc03124], ebp
// 004873f9  0f8eb6000000         jle 0x4874b5
// 004873ff  53                   push ebx
// 00487400  56                   push esi
// 00487401  57                   push edi
// 00487402  a12031c000           mov eax, dword ptr [0xc03120]
// 00487407  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0048740a  8b4804               mov ecx, dword ptr [eax + 4]
// 0048740d  83c004               add eax, 4
// 00487410  83f901               cmp ecx, 1
// 00487413  0f858c000000         jne 0x4874a5
// 00487419  a12031c000           mov eax, dword ptr [0xc03120]
// 0048741e  8b152431c000         mov edx, dword ptr [0xc03124]
// 00487424  8b5c90fc             mov ebx, dword ptr [eax + edx*4 - 4]
// 00487428  8d3ca8               lea edi, [eax + ebp*4]
// 0048742b  8b07                 mov eax, dword ptr [edi]
// 0048742d  3bd8                 cmp ebx, eax
// 0048742f  745e                 je 0x48748f
// 00487431  85c0                 test eax, eax
// 00487433  744a                 je 0x48747f
// 00487435  83c004               add eax, 4
// 00487438  50                   push eax
// 00487439  ff157ca39e00         call dword ptr [0x9ea37c]
// 0048743f  85c0                 test eax, eax
// 00487441  7536                 jne 0x487479
// 00487443  8b07                 mov eax, dword ptr [edi]
// 00487445  8b7008               mov esi, dword ptr [eax + 8]
// 00487448  85f6                 test esi, esi
// 0048744a  741f                 je 0x48746b
// 0048744c  8d642400             lea esp, [esp]
// 00487450  8b0e                 mov ecx, dword ptr [esi]
// 00487452  8b11                 mov edx, dword ptr [ecx]
// 00487454  8b4204               mov eax, dword ptr [edx + 4]
// 00487457  ffd0                 call eax
// 00487459  8bc6                 mov eax, esi
// 0048745b  8b7604               mov esi, dword ptr [esi + 4]
// 0048745e  50                   push eax
// 0048745f  e836053200           call 0x7a799a
// 00487464  83c404               add esp, 4
// 00487467  85f6                 test esi, esi
// 00487469  75e5                 jne 0x487450
// 0048746b  8b0f                 mov ecx, dword ptr [edi]
// 0048746d  85c9                 test ecx, ecx
// 0048746f  7408                 je 0x487479
// 00487471  8b11                 mov edx, dword ptr [ecx]
// 00487473  8b02                 mov eax, dword ptr [edx]
// 00487475  6a01                 push 1
// 00487477  ffd0                 call eax
// 00487479  c70700000000         mov dword ptr [edi], 0
// 0048747f  85db                 test ebx, ebx
// 00487481  740c                 je 0x48748f
// 00487483  891f                 mov dword ptr [edi], ebx
// 00487485  83c304               add ebx, 4
// 00487488  53                   push ebx
// 00487489  ff1580a39e00         call dword ptr [0x9ea380]
// 0048748f  8b0d2431c000         mov ecx, dword ptr [0xc03124]
// 00487495  49                   dec ecx
// 00487496  6a01                 push 1
// 00487498  51                   push ecx
// 00487499  b92031c000           mov ecx, 0xc03120
// 0048749e  e89dfcffff           call 0x487140
// 004874a3  eb01                 jmp 0x4874a6
// 004874a5  45                   inc ebp
// 004874a6  3b2d2431c000         cmp ebp, dword ptr [0xc03124]
// 004874ac  0f8c50ffffff         jl 0x487402
// 004874b2  5f                   pop edi
// 004874b3  5e                   pop esi
// 004874b4  5b                   pop ebx
// 004874b5  5d                   pop ebp
// 004874b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?cleanCache@VARArea@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
