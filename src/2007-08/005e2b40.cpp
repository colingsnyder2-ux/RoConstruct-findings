// roc 2007-08 005e2b40  unit: seg_005e0000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e2b40
//
// 005e2b40  53                   push ebx
// 005e2b41  55                   push ebp
// 005e2b42  8be9                 mov ebp, ecx
// 005e2b44  8b4508               mov eax, dword ptr [ebp + 8]
// 005e2b47  8b00                 mov eax, dword ptr [eax]
// 005e2b49  8d5d04               lea ebx, [ebp + 4]
// 005e2b4c  56                   push esi
// 005e2b4d  57                   push edi
// 005e2b4e  8d7d10               lea edi, [ebp + 0x10]
// 005e2b51  891f                 mov dword ptr [edi], ebx
// 005e2b53  894704               mov dword ptr [edi + 4], eax
// 005e2b56  8b07                 mov eax, dword ptr [edi]
// 005e2b58  85c0                 test eax, eax
// 005e2b5a  8b7304               mov esi, dword ptr [ebx + 4]
// 005e2b5d  7404                 je 0x5e2b63
// 005e2b5f  3bc3                 cmp eax, ebx
// 005e2b61  7406                 je 0x5e2b69
// 005e2b63  ff15d8e67700         call dword ptr [0x77e6d8]
// 005e2b69  397704               cmp dword ptr [edi + 4], esi
// 005e2b6c  7453                 je 0x5e2bc1
// 005e2b6e  833f00               cmp dword ptr [edi], 0
// 005e2b71  7506                 jne 0x5e2b79
// 005e2b73  ff15d8e67700         call dword ptr [0x77e6d8]
// 005e2b79  8b0f                 mov ecx, dword ptr [edi]
// 005e2b7b  8b5704               mov edx, dword ptr [edi + 4]
// 005e2b7e  3b5104               cmp edx, dword ptr [ecx + 4]
// 005e2b81  7506                 jne 0x5e2b89
// 005e2b83  ff15d8e67700         call dword ptr [0x77e6d8]
// 005e2b89  8b4704               mov eax, dword ptr [edi + 4]
// 005e2b8c  8b700c               mov esi, dword ptr [eax + 0xc]
// 005e2b8f  8b4608               mov eax, dword ptr [esi + 8]
// 005e2b92  83f801               cmp eax, 1
// 005e2b95  7e0f                 jle 0x5e2ba6
// 005e2b97  83c0ff               add eax, -1
// 005e2b9a  8bcf                 mov ecx, edi
// 005e2b9c  894608               mov dword ptr [esi + 8], eax
// 005e2b9f  e89c460400           call 0x627240
// 005e2ba4  ebb0                 jmp 0x5e2b56
// 005e2ba6  8b16                 mov edx, dword ptr [esi]
// 005e2ba8  8b02                 mov eax, dword ptr [edx]
// 005e2baa  6a01                 push 1
// 005e2bac  8bce                 mov ecx, esi
// 005e2bae  c7460800000000       mov dword ptr [esi + 8], 0
// 005e2bb5  ffd0                 call eax
// 005e2bb7  56                   push esi
// 005e2bb8  8bcd                 mov ecx, ebp
// 005e2bba  e8f1feffff           call 0x5e2ab0
// 005e2bbf  eb95                 jmp 0x5e2b56
// 005e2bc1  5f                   pop edi
// 005e2bc2  5e                   pop esi
// 005e2bc3  5d                   pop ebp
// 005e2bc4  5b                   pop ebx
// 005e2bc5  c3                   ret 
// library openrbx-client/App\v8world\IMoving.cpp (function ?onMovingHeartbeat@IMovingManager@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
