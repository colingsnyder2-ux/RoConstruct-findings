// roc 2011-06 004059e0  unit: ATL::CRegObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004059e0
//
// 004059e0  55                   push ebp
// 004059e1  8bec                 mov ebp, esp
// 004059e3  64a100000000         mov eax, dword ptr fs:[0]
// 004059e9  6aff                 push -1
// 004059eb  6808d29c00           push 0x9cd208
// 004059f0  50                   push eax
// 004059f1  64892500000000       mov dword ptr fs:[0], esp
// 004059f8  56                   push esi
// 004059f9  57                   push edi
// 004059fa  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004059fd  85ff                 test edi, edi
// 004059ff  0f84b5000000         je 0x405aba
// 00405a05  837d1000             cmp dword ptr [ebp + 0x10], 0
// 00405a09  0f84ab000000         je 0x405aba
// 00405a0f  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 00405a16  57                   push edi
// 00405a17  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00405a1e  ff155803a400         call dword ptr [0xa40358]
// 00405a24  6a00                 push 0
// 00405a26  40                   inc eax
// 00405a27  99                   cdq 
// 00405a28  6a02                 push 2
// 00405a2a  52                   push edx
// 00405a2b  50                   push eax
// 00405a2c  e87f584000           call 0x80b2b0
// 00405a31  8bf0                 mov esi, eax
// 00405a33  0500000080           add eax, 0x80000000
// 00405a38  83d200               adc edx, 0
// 00405a3b  85d2                 test edx, edx
// 00405a3d  773e                 ja 0x405a7d
// 00405a3f  7205                 jb 0x405a46
// 00405a41  83f8ff               cmp eax, -1
// 00405a44  7737                 ja 0x405a7d
// 00405a46  81fe00040000         cmp esi, 0x400
// 00405a4c  7f18                 jg 0x405a66
// 00405a4e  56                   push esi
// 00405a4f  e8ccebffff           call 0x404620
// 00405a54  83c404               add esp, 4
// 00405a57  84c0                 test al, al
// 00405a59  740b                 je 0x405a66
// 00405a5b  8bc6                 mov eax, esi
// 00405a5d  e81e584000           call 0x80b280
// 00405a62  8bc4                 mov eax, esp
// 00405a64  eb09                 jmp 0x405a6f
// 00405a66  56                   push esi
// 00405a67  8d4d0c               lea ecx, [ebp + 0xc]
// 00405a6a  e861f1ffff           call 0x404bd0
// 00405a6f  6a03                 push 3
// 00405a71  56                   push esi
// 00405a72  57                   push edi
// 00405a73  50                   push eax
// 00405a74  e8b7daffff           call 0x403530
// 00405a79  85c0                 test eax, eax
// 00405a7b  750f                 jne 0x405a8c
// 00405a7d  8d4d0c               lea ecx, [ebp + 0xc]
// 00405a80  e83be8ffff           call 0x4042c0
// 00405a85  b80e000780           mov eax, 0x8007000e
// 00405a8a  eb33                 jmp 0x405abf
// 00405a8c  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00405a8f  51                   push ecx
// 00405a90  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405a93  50                   push eax
// 00405a94  83c104               add ecx, 4
// 00405a97  e8d4fdffff           call 0x405870
// 00405a9c  8bf0                 mov esi, eax
// 00405a9e  f7de                 neg esi
// 00405aa0  1bf6                 sbb esi, esi
// 00405aa2  81e6f2fff87f         and esi, 0x7ff8fff2
// 00405aa8  8d4d0c               lea ecx, [ebp + 0xc]
// 00405aab  81c60e000780         add esi, 0x8007000e
// 00405ab1  e80ae8ffff           call 0x4042c0
// 00405ab6  8bc6                 mov eax, esi
// 00405ab8  eb05                 jmp 0x405abf
// 00405aba  b857000780           mov eax, 0x80070057
// 00405abf  8d65ec               lea esp, [ebp - 0x14]
// 00405ac2  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405ac5  64890d00000000       mov dword ptr fs:[0], ecx
// 00405acc  5f                   pop edi
// 00405acd  5e                   pop esi
// 00405ace  8be5                 mov esp, ebp
// 00405ad0  5d                   pop ebp
// 00405ad1  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddReplacement@CRegObject@ATL@@UAGJPB_W0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp