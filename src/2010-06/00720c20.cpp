// roc 2010-06 00720c20  unit: RBX::UniversalTool  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00720c20
//
// 00720c20  53                   push ebx
// 00720c21  8bd9                 mov ebx, ecx
// 00720c23  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00720c26  8b00                 mov eax, dword ptr [eax]
// 00720c28  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00720c2b  56                   push esi
// 00720c2c  57                   push edi
// 00720c2d  8d7b24               lea edi, [ebx + 0x24]
// 00720c30  890f                 mov dword ptr [edi], ecx
// 00720c32  894704               mov dword ptr [edi + 4], eax
// 00720c35  8b07                 mov eax, dword ptr [edi]
// 00720c37  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 00720c3a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00720c3d  85c0                 test eax, eax
// 00720c3f  7404                 je 0x720c45
// 00720c41  3bc1                 cmp eax, ecx
// 00720c43  7406                 je 0x720c4b
// 00720c45  ff150ca99e00         call dword ptr [0x9ea90c]
// 00720c4b  397704               cmp dword ptr [edi + 4], esi
// 00720c4e  745c                 je 0x720cac
// 00720c50  8b07                 mov eax, dword ptr [edi]
// 00720c52  85c0                 test eax, eax
// 00720c54  750c                 jne 0x720c62
// 00720c56  ff150ca99e00         call dword ptr [0x9ea90c]
// 00720c5c  8b07                 mov eax, dword ptr [edi]
// 00720c5e  85c0                 test eax, eax
// 00720c60  7404                 je 0x720c66
// 00720c62  8b00                 mov eax, dword ptr [eax]
// 00720c64  eb02                 jmp 0x720c68
// 00720c66  33c0                 xor eax, eax
// 00720c68  8b4f04               mov ecx, dword ptr [edi + 4]
// 00720c6b  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00720c6e  7506                 jne 0x720c76
// 00720c70  ff150ca99e00         call dword ptr [0x9ea90c]
// 00720c76  8b5704               mov edx, dword ptr [edi + 4]
// 00720c79  8b720c               mov esi, dword ptr [edx + 0xc]
// 00720c7c  8b4608               mov eax, dword ptr [esi + 8]
// 00720c7f  83f801               cmp eax, 1
// 00720c82  7e0d                 jle 0x720c91
// 00720c84  48                   dec eax
// 00720c85  8bcf                 mov ecx, edi
// 00720c87  894608               mov dword ptr [esi + 8], eax
// 00720c8a  e8310b0400           call 0x7617c0
// 00720c8f  eba4                 jmp 0x720c35
// 00720c91  8b06                 mov eax, dword ptr [esi]
// 00720c93  8b10                 mov edx, dword ptr [eax]
// 00720c95  6a01                 push 1
// 00720c97  8bce                 mov ecx, esi
// 00720c99  c7460800000000       mov dword ptr [esi + 8], 0
// 00720ca0  ffd2                 call edx
// 00720ca2  56                   push esi
// 00720ca3  8bcb                 mov ecx, ebx
// 00720ca5  e8d6feffff           call 0x720b80
// 00720caa  eb89                 jmp 0x720c35
// 00720cac  5f                   pop edi
// 00720cad  5e                   pop esi
// 00720cae  5b                   pop ebx
// 00720caf  c3                   ret 
// library openrbx-client/App\v8world\IMoving.cpp (function ?onMovingHeartbeat@IMovingManager@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/IMoving.cpp
