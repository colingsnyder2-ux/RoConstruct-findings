// roc 2010-06 00405280  unit: ATL::CRegObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00405280
//
// 00405280  55                   push ebp
// 00405281  8bec                 mov ebp, esp
// 00405283  64a100000000         mov eax, dword ptr fs:[0]
// 00405289  6aff                 push -1
// 0040528b  6888da9700           push 0x97da88
// 00405290  50                   push eax
// 00405291  64892500000000       mov dword ptr fs:[0], esp
// 00405298  56                   push esi
// 00405299  57                   push edi
// 0040529a  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0040529d  85ff                 test edi, edi
// 0040529f  0f84b5000000         je 0x40535a
// 004052a5  837d1000             cmp dword ptr [ebp + 0x10], 0
// 004052a9  0f84ab000000         je 0x40535a
// 004052af  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 004052b6  57                   push edi
// 004052b7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004052be  ff15a8a39e00         call dword ptr [0x9ea3a8]
// 004052c4  6a00                 push 0
// 004052c6  40                   inc eax
// 004052c7  99                   cdq 
// 004052c8  6a02                 push 2
// 004052ca  52                   push edx
// 004052cb  50                   push eax
// 004052cc  e8df383a00           call 0x7a8bb0
// 004052d1  8bf0                 mov esi, eax
// 004052d3  0500000080           add eax, 0x80000000
// 004052d8  83d200               adc edx, 0
// 004052db  85d2                 test edx, edx
// 004052dd  773e                 ja 0x40531d
// 004052df  7205                 jb 0x4052e6
// 004052e1  83f8ff               cmp eax, -1
// 004052e4  7737                 ja 0x40531d
// 004052e6  81fe00040000         cmp esi, 0x400
// 004052ec  7f18                 jg 0x405306
// 004052ee  56                   push esi
// 004052ef  e85ce8ffff           call 0x403b50
// 004052f4  83c404               add esp, 4
// 004052f7  84c0                 test al, al
// 004052f9  740b                 je 0x405306
// 004052fb  8bc6                 mov eax, esi
// 004052fd  e87e383a00           call 0x7a8b80
// 00405302  8bc4                 mov eax, esp
// 00405304  eb09                 jmp 0x40530f
// 00405306  56                   push esi
// 00405307  8d4d0c               lea ecx, [ebp + 0xc]
// 0040530a  e8e1edffff           call 0x4040f0
// 0040530f  6a03                 push 3
// 00405311  56                   push esi
// 00405312  57                   push edi
// 00405313  50                   push eax
// 00405314  e847d8ffff           call 0x402b60
// 00405319  85c0                 test eax, eax
// 0040531b  750f                 jne 0x40532c
// 0040531d  8d4d0c               lea ecx, [ebp + 0xc]
// 00405320  e8abe5ffff           call 0x4038d0
// 00405325  b80e000780           mov eax, 0x8007000e
// 0040532a  eb33                 jmp 0x40535f
// 0040532c  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0040532f  51                   push ecx
// 00405330  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405333  50                   push eax
// 00405334  83c104               add ecx, 4
// 00405337  e8d4fdffff           call 0x405110
// 0040533c  8bf0                 mov esi, eax
// 0040533e  f7de                 neg esi
// 00405340  1bf6                 sbb esi, esi
// 00405342  81e6f2fff87f         and esi, 0x7ff8fff2
// 00405348  8d4d0c               lea ecx, [ebp + 0xc]
// 0040534b  81c60e000780         add esi, 0x8007000e
// 00405351  e87ae5ffff           call 0x4038d0
// 00405356  8bc6                 mov eax, esi
// 00405358  eb05                 jmp 0x40535f
// 0040535a  b857000780           mov eax, 0x80070057
// 0040535f  8d65ec               lea esp, [ebp - 0x14]
// 00405362  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405365  64890d00000000       mov dword ptr fs:[0], ecx
// 0040536c  5f                   pop edi
// 0040536d  5e                   pop esi
// 0040536e  8be5                 mov esp, ebp
// 00405370  5d                   pop ebp
// 00405371  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddReplacement@CRegObject@ATL@@UAGJPB_W0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp