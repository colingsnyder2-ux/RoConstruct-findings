// roc 2008-06 00614cc0  unit: RBX::RevoluteLink  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614cc0
//
// 00614cc0  53                   push ebx
// 00614cc1  8bd9                 mov ebx, ecx
// 00614cc3  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00614cc6  8b00                 mov eax, dword ptr [eax]
// 00614cc8  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00614ccb  56                   push esi
// 00614ccc  57                   push edi
// 00614ccd  8d7b24               lea edi, [ebx + 0x24]
// 00614cd0  890f                 mov dword ptr [edi], ecx
// 00614cd2  894704               mov dword ptr [edi + 4], eax
// 00614cd5  8b07                 mov eax, dword ptr [edi]
// 00614cd7  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 00614cda  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00614cdd  85c0                 test eax, eax
// 00614cdf  7404                 je 0x614ce5
// 00614ce1  3bc1                 cmp eax, ecx
// 00614ce3  7406                 je 0x614ceb
// 00614ce5  ff1590288000         call dword ptr [0x802890]
// 00614ceb  397704               cmp dword ptr [edi + 4], esi
// 00614cee  745c                 je 0x614d4c
// 00614cf0  8b07                 mov eax, dword ptr [edi]
// 00614cf2  85c0                 test eax, eax
// 00614cf4  750c                 jne 0x614d02
// 00614cf6  ff1590288000         call dword ptr [0x802890]
// 00614cfc  8b07                 mov eax, dword ptr [edi]
// 00614cfe  85c0                 test eax, eax
// 00614d00  7404                 je 0x614d06
// 00614d02  8b00                 mov eax, dword ptr [eax]
// 00614d04  eb02                 jmp 0x614d08
// 00614d06  33c0                 xor eax, eax
// 00614d08  8b4f04               mov ecx, dword ptr [edi + 4]
// 00614d0b  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00614d0e  7506                 jne 0x614d16
// 00614d10  ff1590288000         call dword ptr [0x802890]
// 00614d16  8b5704               mov edx, dword ptr [edi + 4]
// 00614d19  8b720c               mov esi, dword ptr [edx + 0xc]
// 00614d1c  8b4608               mov eax, dword ptr [esi + 8]
// 00614d1f  83f801               cmp eax, 1
// 00614d22  7e0d                 jle 0x614d31
// 00614d24  48                   dec eax
// 00614d25  8bcf                 mov ecx, edi
// 00614d27  894608               mov dword ptr [esi + 8], eax
// 00614d2a  e81146fdff           call 0x5e9340
// 00614d2f  eba4                 jmp 0x614cd5
// 00614d31  8b06                 mov eax, dword ptr [esi]
// 00614d33  8b10                 mov edx, dword ptr [eax]
// 00614d35  6a01                 push 1
// 00614d37  8bce                 mov ecx, esi
// 00614d39  c7460800000000       mov dword ptr [esi + 8], 0
// 00614d40  ffd2                 call edx
// 00614d42  56                   push esi
// 00614d43  8bcb                 mov ecx, ebx
// 00614d45  e8d6feffff           call 0x614c20
// 00614d4a  eb89                 jmp 0x614cd5
// 00614d4c  5f                   pop edi
// 00614d4d  5e                   pop esi
// 00614d4e  5b                   pop ebx
// 00614d4f  c3                   ret 
// library openrbx-client/App\v8world\IMoving.cpp (function ?onMovingHeartbeat@IMovingManager@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
