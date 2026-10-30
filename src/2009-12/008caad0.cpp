// roc 2009-12 008caad0  unit: CXTPPropertyGridPaintManager  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008caad0
//
// 008caad0  6aff                 push -1
// 008caad2  68a84a9600           push 0x964aa8
// 008caad7  64a100000000         mov eax, dword ptr fs:[0]
// 008caadd  50                   push eax
// 008caade  83ec2c               sub esp, 0x2c
// 008caae1  53                   push ebx
// 008caae2  55                   push ebp
// 008caae3  56                   push esi
// 008caae4  57                   push edi
// 008caae5  a10052b600           mov eax, dword ptr [0xb65200]
// 008caaea  33c4                 xor eax, esp
// 008caaec  50                   push eax
// 008caaed  8d442440             lea eax, [esp + 0x40]
// 008caaf1  64a300000000         mov dword ptr fs:[0], eax
// 008caaf7  8bf9                 mov edi, ecx
// 008caaf9  897c2414             mov dword ptr [esp + 0x14], edi
// 008caafd  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008cab01  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 008cab07  85c0                 test eax, eax
// 008cab09  0f84b3010000         je 0x8cacc2
// 008cab0f  8b442464             mov eax, dword ptr [esp + 0x64]
// 008cab13  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008cab17  03c1                 add eax, ecx
// 008cab19  99                   cdq 
// 008cab1a  2bc2                 sub eax, edx
// 008cab1c  d1f8                 sar eax, 1
// 008cab1e  83c0fc               add eax, -4
// 008cab21  89442420             mov dword ptr [esp + 0x20], eax
// 008cab25  83c009               add eax, 9
// 008cab28  89442428             mov dword ptr [esp + 0x28], eax
// 008cab2c  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 008cab32  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 008cab3a  c74424240b000000     mov dword ptr [esp + 0x24], 0xb
// 008cab42  85c0                 test eax, eax
// 008cab44  7e28                 jle 0x8cab6e
// 008cab46  8bb398000000         mov esi, dword ptr [ebx + 0x98]
// 008cab4c  33d2                 xor edx, edx
// 008cab4e  85f6                 test esi, esi
// 008cab50  0f94c2               sete dl
// 008cab53  6a00                 push 0
// 008cab55  2bc2                 sub eax, edx
// 008cab57  8d0cc500000000       lea ecx, [eax*8]
// 008cab5e  2bc8                 sub ecx, eax
// 008cab60  03c9                 add ecx, ecx
// 008cab62  51                   push ecx
// 008cab63  8d542424             lea edx, [esp + 0x24]
// 008cab67  52                   push edx
// 008cab68  ff156ccc9800         call dword ptr [0x98cc6c]
// 008cab6e  837f0401             cmp dword ptr [edi + 4], 1
// 008cab72  753e                 jne 0x8cabb2
// 008cab74  8d7708               lea esi, [edi + 8]
// 008cab77  8bce                 mov ecx, esi
// 008cab79  e84210faff           call 0x86bbc0
// 008cab7e  85c0                 test eax, eax
// 008cab80  7430                 je 0x8cabb2
// 008cab82  8b442450             mov eax, dword ptr [esp + 0x50]
// 008cab86  8b9ba0000000         mov ebx, dword ptr [ebx + 0xa0]
// 008cab8c  85c0                 test eax, eax
// 008cab8e  7403                 je 0x8cab93
// 008cab90  8b4004               mov eax, dword ptr [eax + 4]
// 008cab93  33d2                 xor edx, edx
// 008cab95  85db                 test ebx, ebx
// 008cab97  0f95c2               setne dl
// 008cab9a  6a00                 push 0
// 008cab9c  8d4c2420             lea ecx, [esp + 0x20]
// 008caba0  51                   push ecx
// 008caba1  8bce                 mov ecx, esi
// 008caba3  42                   inc edx
// 008caba4  52                   push edx
// 008caba5  6a02                 push 2
// 008caba7  50                   push eax
// 008caba8  e8930cfaff           call 0x86b840
// 008cabad  e910010000           jmp 0x8cacc2
// 008cabb2  8b442428             mov eax, dword ptr [esp + 0x28]
// 008cabb6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008cabba  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008cabbe  03c1                 add eax, ecx
// 008cabc0  99                   cdq 
// 008cabc1  2bc2                 sub eax, edx
// 008cabc3  8b542424             mov edx, dword ptr [esp + 0x24]
// 008cabc7  8bf0                 mov esi, eax
// 008cabc9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008cabcd  03c2                 add eax, edx
// 008cabcf  99                   cdq 
// 008cabd0  2bc2                 sub eax, edx
// 008cabd2  8bf8                 mov edi, eax
// 008cabd4  8b8398000000         mov eax, dword ptr [ebx + 0x98]
// 008cabda  d1fe                 sar esi, 1
// 008cabdc  d1ff                 sar edi, 1
// 008cabde  85c0                 test eax, eax
// 008cabe0  7526                 jne 0x8cac08
// 008cabe2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008cabe6  8b4174               mov eax, dword ptr [ecx + 0x74]
// 008cabe9  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008cabec  83c070               add eax, 0x70
// 008cabef  83f9ff               cmp ecx, -1
// 008cabf2  7505                 jne 0x8cabf9
// 008cabf4  8b4004               mov eax, dword ptr [eax + 4]
// 008cabf7  eb02                 jmp 0x8cabfb
// 008cabf9  8bc1                 mov eax, ecx
// 008cabfb  50                   push eax
// 008cabfc  8d542420             lea edx, [esp + 0x20]
// 008cac00  52                   push edx
// 008cac01  8bcd                 mov ecx, ebp
// 008cac03  e8f699f2ff           call 0x7f45fe
// 008cac08  8b442414             mov eax, dword ptr [esp + 0x14]
// 008cac0c  8b4074               mov eax, dword ptr [eax + 0x74]
// 008cac0f  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008cac12  83f9ff               cmp ecx, -1
// 008cac15  7503                 jne 0x8cac1a
// 008cac17  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 008cac1a  8b5060               mov edx, dword ptr [eax + 0x60]
// 008cac1d  83faff               cmp edx, -1
// 008cac20  7505                 jne 0x8cac27
// 008cac22  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008cac25  eb02                 jmp 0x8cac29
// 008cac27  8bc2                 mov eax, edx
// 008cac29  51                   push ecx
// 008cac2a  50                   push eax
// 008cac2b  8d4c2424             lea ecx, [esp + 0x24]
// 008cac2f  51                   push ecx
// 008cac30  8bcd                 mov ecx, ebp
// 008cac32  e8c199f2ff           call 0x7f45f8
// 008cac37  8b542414             mov edx, dword ptr [esp + 0x14]
// 008cac3b  8b4274               mov eax, dword ptr [edx + 0x74]
// 008cac3e  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008cac41  83c058               add eax, 0x58
// 008cac44  83f9ff               cmp ecx, -1
// 008cac47  7505                 jne 0x8cac4e
// 008cac49  8b4004               mov eax, dword ptr [eax + 4]
// 008cac4c  eb02                 jmp 0x8cac50
// 008cac4e  8bc1                 mov eax, ecx
// 008cac50  85ed                 test ebp, ebp
// 008cac52  7504                 jne 0x8cac58
// 008cac54  33d2                 xor edx, edx
// 008cac56  eb03                 jmp 0x8cac5b
// 008cac58  8b5504               mov edx, dword ptr [ebp + 4]
// 008cac5b  50                   push eax
// 008cac5c  52                   push edx
// 008cac5d  8d4c2434             lea ecx, [esp + 0x34]
// 008cac61  e89a0af8ff           call 0x84b700
// 008cac66  56                   push esi
// 008cac67  8d47fe               lea eax, [edi - 2]
// 008cac6a  50                   push eax
// 008cac6b  8d4c241c             lea ecx, [esp + 0x1c]
// 008cac6f  51                   push ecx
// 008cac70  8bcd                 mov ecx, ebp
// 008cac72  c744245400000000     mov dword ptr [esp + 0x54], 0
// 008cac7a  e8c39af2ff           call 0x7f4742
// 008cac7f  56                   push esi
// 008cac80  8d5703               lea edx, [edi + 3]
// 008cac83  52                   push edx
// 008cac84  8bcd                 mov ecx, ebp
// 008cac86  e8b19af2ff           call 0x7f473c
// 008cac8b  83bba000000000       cmp dword ptr [ebx + 0xa0], 0
// 008cac92  751d                 jne 0x8cacb1
// 008cac94  8d46fe               lea eax, [esi - 2]
// 008cac97  50                   push eax
// 008cac98  57                   push edi
// 008cac99  8d4c241c             lea ecx, [esp + 0x1c]
// 008cac9d  51                   push ecx
// 008cac9e  8bcd                 mov ecx, ebp
// 008caca0  e89d9af2ff           call 0x7f4742
// 008caca5  83c603               add esi, 3
// 008caca8  56                   push esi
// 008caca9  57                   push edi
// 008cacaa  8bcd                 mov ecx, ebp
// 008cacac  e88b9af2ff           call 0x7f473c
// 008cacb1  8d4c242c             lea ecx, [esp + 0x2c]
// 008cacb5  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008cacbd  e8ce0af8ff           call 0x84b790
// 008cacc2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008cacc6  64890d00000000       mov dword ptr fs:[0], ecx
// 008caccd  59                   pop ecx
// 008cacce  5f                   pop edi
// 008caccf  5e                   pop esi
// 008cacd0  5d                   pop ebp
// 008cacd1  5b                   pop ebx
// 008cacd2  83c438               add esp, 0x38
// 008cacd5  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawExpandButton@CXTPPropertyGridPaintManager@@UAEXAAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp