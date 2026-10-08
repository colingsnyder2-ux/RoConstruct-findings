// roc 2007-08 004d0a60  unit: RBX::View::PartChunk  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0a60
//
// 004d0a60  6aff                 push -1
// 004d0a62  6866c37400           push 0x74c366
// 004d0a67  64a100000000         mov eax, dword ptr fs:[0]
// 004d0a6d  50                   push eax
// 004d0a6e  64892500000000       mov dword ptr fs:[0], esp
// 004d0a75  51                   push ecx
// 004d0a76  53                   push ebx
// 004d0a77  56                   push esi
// 004d0a78  8bf1                 mov esi, ecx
// 004d0a7a  57                   push edi
// 004d0a7b  8974240c             mov dword ptr [esp + 0xc], esi
// 004d0a7f  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004d0a82  8b3de8d27700         mov edi, dword ptr [0x77d2e8]
// 004d0a88  33db                 xor ebx, ebx
// 004d0a8a  3bc3                 cmp eax, ebx
// 004d0a8c  c744241802000000     mov dword ptr [esp + 0x18], 2
// 004d0a94  7424                 je 0x4d0aba
// 004d0a96  83c004               add eax, 4
// 004d0a99  50                   push eax
// 004d0a9a  ffd7                 call edi
// 004d0a9c  85c0                 test eax, eax
// 004d0a9e  7517                 jne 0x4d0ab7
// 004d0aa0  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004d0aa3  e82873f8ff           call 0x457dd0
// 004d0aa8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004d0aab  3bcb                 cmp ecx, ebx
// 004d0aad  7408                 je 0x4d0ab7
// 004d0aaf  8b01                 mov eax, dword ptr [ecx]
// 004d0ab1  8b10                 mov edx, dword ptr [eax]
// 004d0ab3  6a01                 push 1
// 004d0ab5  ffd2                 call edx
// 004d0ab7  895e3c               mov dword ptr [esi + 0x3c], ebx
// 004d0aba  8b4638               mov eax, dword ptr [esi + 0x38]
// 004d0abd  3bc3                 cmp eax, ebx
// 004d0abf  c644241801           mov byte ptr [esp + 0x18], 1
// 004d0ac4  7424                 je 0x4d0aea
// 004d0ac6  83c004               add eax, 4
// 004d0ac9  50                   push eax
// 004d0aca  ffd7                 call edi
// 004d0acc  85c0                 test eax, eax
// 004d0ace  7517                 jne 0x4d0ae7
// 004d0ad0  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004d0ad3  e8f872f8ff           call 0x457dd0
// 004d0ad8  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004d0adb  3bcb                 cmp ecx, ebx
// 004d0add  7408                 je 0x4d0ae7
// 004d0adf  8b01                 mov eax, dword ptr [ecx]
// 004d0ae1  8b10                 mov edx, dword ptr [eax]
// 004d0ae3  6a01                 push 1
// 004d0ae5  ffd2                 call edx
// 004d0ae7  895e38               mov dword ptr [esi + 0x38], ebx
// 004d0aea  8b4628               mov eax, dword ptr [esi + 0x28]
// 004d0aed  3bc3                 cmp eax, ebx
// 004d0aef  885c2418             mov byte ptr [esp + 0x18], bl
// 004d0af3  7424                 je 0x4d0b19
// 004d0af5  83c004               add eax, 4
// 004d0af8  50                   push eax
// 004d0af9  ffd7                 call edi
// 004d0afb  85c0                 test eax, eax
// 004d0afd  7517                 jne 0x4d0b16
// 004d0aff  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 004d0b02  e8c972f8ff           call 0x457dd0
// 004d0b07  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 004d0b0a  3bcb                 cmp ecx, ebx
// 004d0b0c  7408                 je 0x4d0b16
// 004d0b0e  8b01                 mov eax, dword ptr [ecx]
// 004d0b10  8b10                 mov edx, dword ptr [eax]
// 004d0b12  6a01                 push 1
// 004d0b14  ffd2                 call edx
// 004d0b16  895e28               mov dword ptr [esi + 0x28], ebx
// 004d0b19  c706f4f07900         mov dword ptr [esi], 0x79f0f4
// 004d0b1f  8d4e0c               lea ecx, [esi + 0xc]
// 004d0b22  c744241803000000     mov dword ptr [esp + 0x18], 3
// 004d0b2a  ff15ace67700         call dword ptr [0x77e6ac]
// 004d0b30  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d0b34  5f                   pop edi
// 004d0b35  c70684797900         mov dword ptr [esi], 0x797984
// 004d0b3b  5e                   pop esi
// 004d0b3c  5b                   pop ebx
// 004d0b3d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0b44  83c410               add esp, 0x10
// 004d0b47  c3                   ret 
// library openrbx-client/Rendering\AppDraw\AdornG3D.cpp (function ??1TextureProxy@Render@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/AppDraw/AdornG3D.cpp
