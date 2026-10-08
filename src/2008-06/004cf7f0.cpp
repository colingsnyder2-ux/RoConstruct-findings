// roc 2008-06 004cf7f0  unit: RBX::Network::PhysicsSender  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf7f0
//
// 004cf7f0  53                   push ebx
// 004cf7f1  56                   push esi
// 004cf7f2  8b742410             mov esi, dword ptr [esp + 0x10]
// 004cf7f6  8b0e                 mov ecx, dword ptr [esi]
// 004cf7f8  8a4610               mov al, byte ptr [esi + 0x10]
// 004cf7fb  57                   push edi
// 004cf7fc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cf800  8b1f                 mov ebx, dword ptr [edi]
// 004cf802  6a01                 push 1
// 004cf804  6a20                 push 0x20
// 004cf806  8d54241c             lea edx, [esp + 0x1c]
// 004cf80a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004cf80e  52                   push edx
// 004cf80f  8bcf                 mov ecx, edi
// 004cf811  8844241c             mov byte ptr [esp + 0x1c], al
// 004cf815  e8e65dfdff           call 0x4a5600
// 004cf81a  6a01                 push 1
// 004cf81c  6a03                 push 3
// 004cf81e  8d442418             lea eax, [esp + 0x18]
// 004cf822  50                   push eax
// 004cf823  8bcf                 mov ecx, edi
// 004cf825  e8d65dfdff           call 0x4a5600
// 004cf82a  8b4610               mov eax, dword ptr [esi + 0x10]
// 004cf82d  83f801               cmp eax, 1
// 004cf830  740a                 je 0x4cf83c
// 004cf832  83f804               cmp eax, 4
// 004cf835  7405                 je 0x4cf83c
// 004cf837  83f803               cmp eax, 3
// 004cf83a  7526                 jne 0x4cf862
// 004cf83c  6a01                 push 1
// 004cf83e  6a05                 push 5
// 004cf840  8d4e14               lea ecx, [esi + 0x14]
// 004cf843  51                   push ecx
// 004cf844  8bcf                 mov ecx, edi
// 004cf846  e8b55dfdff           call 0x4a5600
// 004cf84b  8b5618               mov edx, dword ptr [esi + 0x18]
// 004cf84e  6a01                 push 1
// 004cf850  6a20                 push 0x20
// 004cf852  8d44241c             lea eax, [esp + 0x1c]
// 004cf856  50                   push eax
// 004cf857  8bcf                 mov ecx, edi
// 004cf859  89542420             mov dword ptr [esp + 0x20], edx
// 004cf85d  e89e5dfdff           call 0x4a5600
// 004cf862  837e2400             cmp dword ptr [esi + 0x24], 0
// 004cf866  8bcf                 mov ecx, edi
// 004cf868  0f97c0               seta al
// 004cf86b  84c0                 test al, al
// 004cf86d  0f8482000000         je 0x4cf8f5
// 004cf873  e8e85cfdff           call 0x4a5560
// 004cf878  0fb74e1c             movzx ecx, word ptr [esi + 0x1c]
// 004cf87c  6a01                 push 1
// 004cf87e  6a10                 push 0x10
// 004cf880  8d54241c             lea edx, [esp + 0x1c]
// 004cf884  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004cf888  52                   push edx
// 004cf889  8bcf                 mov ecx, edi
// 004cf88b  e8705dfdff           call 0x4a5600
// 004cf890  8b4620               mov eax, dword ptr [esi + 0x20]
// 004cf893  6a01                 push 1
// 004cf895  6a20                 push 0x20
// 004cf897  8d4c241c             lea ecx, [esp + 0x1c]
// 004cf89b  51                   push ecx
// 004cf89c  8bcf                 mov ecx, edi
// 004cf89e  89442420             mov dword ptr [esp + 0x20], eax
// 004cf8a2  e8e95efdff           call 0x4a5790
// 004cf8a7  8b5624               mov edx, dword ptr [esi + 0x24]
// 004cf8aa  6a01                 push 1
// 004cf8ac  6a20                 push 0x20
// 004cf8ae  8d44241c             lea eax, [esp + 0x1c]
// 004cf8b2  50                   push eax
// 004cf8b3  8bcf                 mov ecx, edi
// 004cf8b5  89542420             mov dword ptr [esp + 0x20], edx
// 004cf8b9  e8d25efdff           call 0x4a5790
// 004cf8be  0fb74e38             movzx ecx, word ptr [esi + 0x38]
// 004cf8c2  6a01                 push 1
// 004cf8c4  6a10                 push 0x10
// 004cf8c6  8d54241c             lea edx, [esp + 0x1c]
// 004cf8ca  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004cf8ce  52                   push edx
// 004cf8cf  8bcf                 mov ecx, edi
// 004cf8d1  e8ba5efdff           call 0x4a5790
// 004cf8d6  8b4638               mov eax, dword ptr [esi + 0x38]
// 004cf8d9  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004cf8dc  83c007               add eax, 7
// 004cf8df  c1e803               shr eax, 3
// 004cf8e2  50                   push eax
// 004cf8e3  51                   push ecx
// 004cf8e4  8bcf                 mov ecx, edi
// 004cf8e6  e8855efdff           call 0x4a5770
// 004cf8eb  8b07                 mov eax, dword ptr [edi]
// 004cf8ed  5f                   pop edi
// 004cf8ee  5e                   pop esi
// 004cf8ef  2bc3                 sub eax, ebx
// 004cf8f1  5b                   pop ebx
// 004cf8f2  c21000               ret 0x10
// 004cf8f5  e8465cfdff           call 0x4a5540
// 004cf8fa  ebc2                 jmp 0x4cf8be
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?WriteToBitStreamFromInternalPacket@ReliabilityLayer@@AAEHPAVBitStream@RakNet@@QBUInternalPacket@@_J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
