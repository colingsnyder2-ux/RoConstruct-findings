// roc 2007-03 004c07b0  unit: seg_004c0000  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c07b0
//
// 004c07b0  83ec14               sub esp, 0x14
// 004c07b3  53                   push ebx
// 004c07b4  55                   push ebp
// 004c07b5  56                   push esi
// 004c07b6  57                   push edi
// 004c07b7  894c2414             mov dword ptr [esp + 0x14], ecx
// 004c07bb  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004c07c3  66c744241871d9       mov word ptr [esp + 0x18], 0xd971
// 004c07ca  66c744241a6dce       mov word ptr [esp + 0x1a], 0xce6d
// 004c07d1  66c744241cbf58       mov word ptr [esp + 0x1c], 0x58bf
// 004c07d8  e84391ffff           call 0x4b9920
// 004c07dd  88442412             mov byte ptr [esp + 0x12], al
// 004c07e1  8a44242c             mov al, byte ptr [esp + 0x2c]
// 004c07e5  0405                 add al, 5
// 004c07e7  240f                 and al, 0xf
// 004c07e9  b30f                 mov bl, 0xf
// 004c07eb  2ad8                 sub bl, al
// 004c07ed  e82e91ffff           call 0x4b9920
// 004c07f2  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004c07f6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 004c07fa  8b542434             mov edx, dword ptr [esp + 0x34]
// 004c07fe  c0e004               shl al, 4
// 004c0801  0ac3                 or al, bl
// 004c0803  0fb6f3               movzx esi, bl
// 004c0806  88442413             mov byte ptr [esp + 0x13], al
// 004c080a  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c080e  3bc5                 cmp eax, ebp
// 004c0810  8d4c3e06             lea ecx, [esi + edi + 6]
// 004c0814  57                   push edi
// 004c0815  890a                 mov dword ptr [edx], ecx
// 004c0817  50                   push eax
// 004c0818  750c                 jne 0x4c0826
// 004c081a  8d442e06             lea eax, [esi + ebp + 6]
// 004c081e  50                   push eax
// 004c081f  e83eee1500           call 0x61f662
// 004c0824  eb0a                 jmp 0x4c0830
// 004c0826  8d4c2e06             lea ecx, [esi + ebp + 6]
// 004c082a  51                   push ecx
// 004c082b  e8b2e91500           call 0x61f1e2
// 004c0830  8a54241e             mov dl, byte ptr [esp + 0x1e]
// 004c0834  8a44241f             mov al, byte ptr [esp + 0x1f]
// 004c0838  83c40c               add esp, 0xc
// 004c083b  33db                 xor ebx, ebx
// 004c083d  85f6                 test esi, esi
// 004c083f  885504               mov byte ptr [ebp + 4], dl
// 004c0842  884505               mov byte ptr [ebp + 5], al
// 004c0845  7610                 jbe 0x4c0857
// 004c0847  e8d490ffff           call 0x4b9920
// 004c084c  88442b06             mov byte ptr [ebx + ebp + 6], al
// 004c0850  83c301               add ebx, 1
// 004c0853  3bde                 cmp ebx, esi
// 004c0855  72f0                 jb 0x4c0847
// 004c0857  8d4c3e02             lea ecx, [esi + edi + 2]
// 004c085b  51                   push ecx
// 004c085c  8d4504               lea eax, [ebp + 4]
// 004c085f  50                   push eax
// 004c0860  8d4c2420             lea ecx, [esp + 0x20]
// 004c0864  e807160000           call 0x4c1e70
// 004c0869  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c086d  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c0871  55                   push ebp
// 004c0872  6a10                 push 0x10
// 004c0874  55                   push ebp
// 004c0875  8d8140020000         lea eax, [ecx + 0x240]
// 004c087b  51                   push ecx
// 004c087c  50                   push eax
// 004c087d  895500               mov dword ptr [ebp], edx
// 004c0880  e84b0f0000           call 0x4c17d0
// 004c0885  8b442448             mov eax, dword ptr [esp + 0x48]
// 004c0889  8b38                 mov edi, dword ptr [eax]
// 004c088b  83ef10               sub edi, 0x10
// 004c088e  83c414               add esp, 0x14
// 004c0891  33f6                 xor esi, esi
// 004c0893  83ff10               cmp edi, 0x10
// 004c0896  726c                 jb 0x4c0904
// 004c0898  8d1c2f               lea ebx, [edi + ebp]
// 004c089b  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004c089f  90                   nop 
// 004c08a0  8bd6                 mov edx, esi
// 004c08a2  33c9                 xor ecx, ecx
// 004c08a4  8bc3                 mov eax, ebx
// 004c08a6  2bd7                 sub edx, edi
// 004c08a8  8d742e02             lea esi, [esi + ebp + 2]
// 004c08ac  8d642400             lea esp, [esp]
// 004c08b0  0fb61c02             movzx ebx, byte ptr [edx + eax]
// 004c08b4  3018                 xor byte ptr [eax], bl
// 004c08b6  0fb65c0eff           movzx ebx, byte ptr [esi + ecx - 1]
// 004c08bb  305801               xor byte ptr [eax + 1], bl
// 004c08be  0fb61c0e             movzx ebx, byte ptr [esi + ecx]
// 004c08c2  305802               xor byte ptr [eax + 2], bl
// 004c08c5  0fb65c0e01           movzx ebx, byte ptr [esi + ecx + 1]
// 004c08ca  305803               xor byte ptr [eax + 3], bl
// 004c08cd  83c104               add ecx, 4
// 004c08d0  83c004               add eax, 4
// 004c08d3  83f910               cmp ecx, 0x10
// 004c08d6  72d8                 jb 0x4c08b0
// 004c08d8  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 004c08dc  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c08e0  53                   push ebx
// 004c08e1  6a10                 push 0x10
// 004c08e3  53                   push ebx
// 004c08e4  50                   push eax
// 004c08e5  0540020000           add eax, 0x240
// 004c08ea  50                   push eax
// 004c08eb  e8e00e0000           call 0x4c17d0
// 004c08f0  8bf7                 mov esi, edi
// 004c08f2  83ef10               sub edi, 0x10
// 004c08f5  83eb10               sub ebx, 0x10
// 004c08f8  83c414               add esp, 0x14
// 004c08fb  83ff10               cmp edi, 0x10
// 004c08fe  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004c0902  739c                 jae 0x4c08a0
// 004c0904  5f                   pop edi
// 004c0905  5e                   pop esi
// 004c0906  5d                   pop ebp
// 004c0907  5b                   pop ebx
// 004c0908  83c414               add esp, 0x14
// 004c090b  c21000               ret 0x10
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?Encrypt@DataBlockEncryptor@@QAEXPAEH0PAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
