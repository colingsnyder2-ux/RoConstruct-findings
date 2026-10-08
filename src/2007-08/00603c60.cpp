// roc 2007-08 00603c60  unit: RBX::JointStage  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00603c60
//
// 00603c60  6aff                 push -1
// 00603c62  68afc17500           push 0x75c1af
// 00603c67  64a100000000         mov eax, dword ptr fs:[0]
// 00603c6d  50                   push eax
// 00603c6e  64892500000000       mov dword ptr fs:[0], esp
// 00603c75  83ec08               sub esp, 8
// 00603c78  55                   push ebp
// 00603c79  56                   push esi
// 00603c7a  57                   push edi
// 00603c7b  8bf1                 mov esi, ecx
// 00603c7d  6a28                 push 0x28
// 00603c7f  89742410             mov dword ptr [esp + 0x10], esi
// 00603c83  e86ec20200           call 0x62fef6
// 00603c88  83c404               add esp, 4
// 00603c8b  89442410             mov dword ptr [esp + 0x10], eax
// 00603c8f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00603c93  33ed                 xor ebp, ebp
// 00603c95  3bc5                 cmp eax, ebp
// 00603c97  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00603c9b  740b                 je 0x603ca8
// 00603c9d  57                   push edi
// 00603c9e  56                   push esi
// 00603c9f  8bc8                 mov ecx, eax
// 00603ca1  e84a380200           call 0x6274f0
// 00603ca6  eb02                 jmp 0x603caa
// 00603ca8  33c0                 xor eax, eax
// 00603caa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00603cae  53                   push ebx
// 00603caf  894e04               mov dword ptr [esi + 4], ecx
// 00603cb2  894608               mov dword ptr [esi + 8], eax
// 00603cb5  897e0c               mov dword ptr [esi + 0xc], edi
// 00603cb8  8d7e10               lea edi, [esi + 0x10]
// 00603cbb  bb01000000           mov ebx, 1
// 00603cc0  8bcf                 mov ecx, edi
// 00603cc2  895c2420             mov dword ptr [esp + 0x20], ebx
// 00603cc6  c7060c2c7c00         mov dword ptr [esi], 0x7c2c0c
// 00603ccc  e8df56faff           call 0x5a93b0
// 00603cd1  894704               mov dword ptr [edi + 4], eax
// 00603cd4  885811               mov byte ptr [eax + 0x11], bl
// 00603cd7  8b4704               mov eax, dword ptr [edi + 4]
// 00603cda  894004               mov dword ptr [eax + 4], eax
// 00603cdd  8b4704               mov eax, dword ptr [edi + 4]
// 00603ce0  8900                 mov dword ptr [eax], eax
// 00603ce2  8b4704               mov eax, dword ptr [edi + 4]
// 00603ce5  894008               mov dword ptr [eax + 8], eax
// 00603ce8  896f08               mov dword ptr [edi + 8], ebp
// 00603ceb  8d7e1c               lea edi, [esi + 0x1c]
// 00603cee  8bcf                 mov ecx, edi
// 00603cf0  c644242002           mov byte ptr [esp + 0x20], 2
// 00603cf5  e8b656faff           call 0x5a93b0
// 00603cfa  894704               mov dword ptr [edi + 4], eax
// 00603cfd  885811               mov byte ptr [eax + 0x11], bl
// 00603d00  8b4704               mov eax, dword ptr [edi + 4]
// 00603d03  894004               mov dword ptr [eax + 4], eax
// 00603d06  8b4704               mov eax, dword ptr [edi + 4]
// 00603d09  8900                 mov dword ptr [eax], eax
// 00603d0b  8b4704               mov eax, dword ptr [edi + 4]
// 00603d0e  894008               mov dword ptr [eax + 8], eax
// 00603d11  896f08               mov dword ptr [edi + 8], ebp
// 00603d14  8d7e28               lea edi, [esi + 0x28]
// 00603d17  8bcf                 mov ecx, edi
// 00603d19  c644242003           mov byte ptr [esp + 0x20], 3
// 00603d1e  e88d56faff           call 0x5a93b0
// 00603d23  894704               mov dword ptr [edi + 4], eax
// 00603d26  885811               mov byte ptr [eax + 0x11], bl
// 00603d29  8b4704               mov eax, dword ptr [edi + 4]
// 00603d2c  894004               mov dword ptr [eax + 4], eax
// 00603d2f  8b4704               mov eax, dword ptr [edi + 4]
// 00603d32  8900                 mov dword ptr [eax], eax
// 00603d34  8b4704               mov eax, dword ptr [edi + 4]
// 00603d37  894008               mov dword ptr [eax + 8], eax
// 00603d3a  896f08               mov dword ptr [edi + 8], ebp
// 00603d3d  6840000200           push 0x20040
// 00603d42  c644242404           mov byte ptr [esp + 0x24], 4
// 00603d47  e8aac10200           call 0x62fef6
// 00603d4c  83c404               add esp, 4
// 00603d4f  8944242c             mov dword ptr [esp + 0x2c], eax
// 00603d53  3bc5                 cmp eax, ebp
// 00603d55  c644242005           mov byte ptr [esp + 0x20], 5
// 00603d5a  5b                   pop ebx
// 00603d5b  7411                 je 0x603d6e
// 00603d5d  68282c7c00           push 0x7c2c28
// 00603d62  8bc8                 mov ecx, eax
// 00603d64  e8f7def8ff           call 0x591c60
// 00603d69  894634               mov dword ptr [esi + 0x34], eax
// 00603d6c  eb03                 jmp 0x603d71
// 00603d6e  896e34               mov dword ptr [esi + 0x34], ebp
// 00603d71  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00603d75  5f                   pop edi
// 00603d76  8bc6                 mov eax, esi
// 00603d78  5e                   pop esi
// 00603d79  5d                   pop ebp
// 00603d7a  64890d00000000       mov dword ptr fs:[0], ecx
// 00603d81  83c414               add esp, 0x14
// 00603d84  c20800               ret 8
// library rbxgs/v8world\SleepStage.cpp (function ??0SleepStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SleepStage.cpp
