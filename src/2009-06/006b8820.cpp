// roc 2009-06 006b8820  unit: RBX::UniversalTool  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8820
//
// 006b8820  53                   push ebx
// 006b8821  8bd9                 mov ebx, ecx
// 006b8823  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 006b8826  8b00                 mov eax, dword ptr [eax]
// 006b8828  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006b882b  56                   push esi
// 006b882c  57                   push edi
// 006b882d  8d7b24               lea edi, [ebx + 0x24]
// 006b8830  890f                 mov dword ptr [edi], ecx
// 006b8832  894704               mov dword ptr [edi + 4], eax
// 006b8835  8b07                 mov eax, dword ptr [edi]
// 006b8837  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 006b883a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006b883d  85c0                 test eax, eax
// 006b883f  7404                 je 0x6b8845
// 006b8841  3bc1                 cmp eax, ecx
// 006b8843  7406                 je 0x6b884b
// 006b8845  ff15ace98900         call dword ptr [0x89e9ac]
// 006b884b  397704               cmp dword ptr [edi + 4], esi
// 006b884e  745c                 je 0x6b88ac
// 006b8850  8b07                 mov eax, dword ptr [edi]
// 006b8852  85c0                 test eax, eax
// 006b8854  750c                 jne 0x6b8862
// 006b8856  ff15ace98900         call dword ptr [0x89e9ac]
// 006b885c  8b07                 mov eax, dword ptr [edi]
// 006b885e  85c0                 test eax, eax
// 006b8860  7404                 je 0x6b8866
// 006b8862  8b00                 mov eax, dword ptr [eax]
// 006b8864  eb02                 jmp 0x6b8868
// 006b8866  33c0                 xor eax, eax
// 006b8868  8b4f04               mov ecx, dword ptr [edi + 4]
// 006b886b  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 006b886e  7506                 jne 0x6b8876
// 006b8870  ff15ace98900         call dword ptr [0x89e9ac]
// 006b8876  8b5704               mov edx, dword ptr [edi + 4]
// 006b8879  8b720c               mov esi, dword ptr [edx + 0xc]
// 006b887c  8b4608               mov eax, dword ptr [esi + 8]
// 006b887f  83f801               cmp eax, 1
// 006b8882  7e0d                 jle 0x6b8891
// 006b8884  48                   dec eax
// 006b8885  8bcf                 mov ecx, edi
// 006b8887  894608               mov dword ptr [esi + 8], eax
// 006b888a  e8c1dfffff           call 0x6b6850
// 006b888f  eba4                 jmp 0x6b8835
// 006b8891  8b06                 mov eax, dword ptr [esi]
// 006b8893  8b10                 mov edx, dword ptr [eax]
// 006b8895  6a01                 push 1
// 006b8897  8bce                 mov ecx, esi
// 006b8899  c7460800000000       mov dword ptr [esi + 8], 0
// 006b88a0  ffd2                 call edx
// 006b88a2  56                   push esi
// 006b88a3  8bcb                 mov ecx, ebx
// 006b88a5  e8d6feffff           call 0x6b8780
// 006b88aa  eb89                 jmp 0x6b8835
// 006b88ac  5f                   pop edi
// 006b88ad  5e                   pop esi
// 006b88ae  5b                   pop ebx
// 006b88af  c3                   ret 
// library openrbx-client/App\v8world\IMoving.cpp (function ?onMovingHeartbeat@IMovingManager@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/IMoving.cpp
