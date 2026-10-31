// roc 2009-06 00407680  unit: VCApp::?$CComContainedObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00407680
//
// 00407680  55                   push ebp
// 00407681  8bec                 mov ebp, esp
// 00407683  6aff                 push -1
// 00407685  6858da8400           push 0x84da58
// 0040768a  64a100000000         mov eax, dword ptr fs:[0]
// 00407690  50                   push eax
// 00407691  64892500000000       mov dword ptr fs:[0], esp
// 00407698  51                   push ecx
// 00407699  53                   push ebx
// 0040769a  56                   push esi
// 0040769b  33f6                 xor esi, esi
// 0040769d  57                   push edi
// 0040769e  8975f0               mov dword ptr [ebp - 0x10], esi
// 004076a1  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 004076a4  8975fc               mov dword ptr [ebp - 4], esi
// 004076a7  3bde                 cmp ebx, esi
// 004076a9  7479                 je 0x407724
// 004076ab  53                   push ebx
// 004076ac  ff1500e28900         call dword ptr [0x89e200]
// 004076b2  56                   push esi
// 004076b3  40                   inc eax
// 004076b4  99                   cdq 
// 004076b5  6a02                 push 2
// 004076b7  52                   push edx
// 004076b8  50                   push eax
// 004076b9  e882253100           call 0x719c40
// 004076be  8bf8                 mov edi, eax
// 004076c0  0500000080           add eax, 0x80000000
// 004076c5  13d6                 adc edx, esi
// 004076c7  85d2                 test edx, edx
// 004076c9  7759                 ja 0x407724
// 004076cb  7205                 jb 0x4076d2
// 004076cd  83f8ff               cmp eax, -1
// 004076d0  7752                 ja 0x407724
// 004076d2  81ff00040000         cmp edi, 0x400
// 004076d8  7f18                 jg 0x4076f2
// 004076da  57                   push edi
// 004076db  e850c7ffff           call 0x403e30
// 004076e0  83c404               add esp, 4
// 004076e3  84c0                 test al, al
// 004076e5  740b                 je 0x4076f2
// 004076e7  8bc7                 mov eax, edi
// 004076e9  e822253100           call 0x719c10
// 004076ee  8bc4                 mov eax, esp
// 004076f0  eb0c                 jmp 0x4076fe
// 004076f2  57                   push edi
// 004076f3  8d4df0               lea ecx, [ebp - 0x10]
// 004076f6  e8d5ccffff           call 0x4043d0
// 004076fb  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004076fe  6a03                 push 3
// 00407700  57                   push edi
// 00407701  53                   push ebx
// 00407702  50                   push eax
// 00407703  e838b7ffff           call 0x402e40
// 00407708  85c0                 test eax, eax
// 0040770a  751f                 jne 0x40772b
// 0040770c  85f6                 test esi, esi
// 0040770e  7414                 je 0x407724
// 00407710  8b3dcce98900         mov edi, dword ptr [0x89e9cc]
// 00407716  8bc6                 mov eax, esi
// 00407718  8b36                 mov esi, dword ptr [esi]
// 0040771a  50                   push eax
// 0040771b  ffd7                 call edi
// 0040771d  83c404               add esp, 4
// 00407720  85f6                 test esi, esi
// 00407722  75f2                 jne 0x407716
// 00407724  b80e000780           mov eax, 0x8007000e
// 00407729  eb35                 jmp 0x407760
// 0040772b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040772e  6a00                 push 0
// 00407730  50                   push eax
// 00407731  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 00407735  50                   push eax
// 00407736  51                   push ecx
// 00407737  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040773a  e8f1fbffff           call 0x407330
// 0040773f  8bd8                 mov ebx, eax
// 00407741  85f6                 test esi, esi
// 00407743  7419                 je 0x40775e
// 00407745  8b3dcce98900         mov edi, dword ptr [0x89e9cc]
// 0040774b  eb03                 jmp 0x407750
// 0040774d  8d4900               lea ecx, [ecx]
// 00407750  8bc6                 mov eax, esi
// 00407752  8b36                 mov esi, dword ptr [esi]
// 00407754  50                   push eax
// 00407755  ffd7                 call edi
// 00407757  83c404               add esp, 4
// 0040775a  85f6                 test esi, esi
// 0040775c  75f2                 jne 0x407750
// 0040775e  8bc3                 mov eax, ebx
// 00407760  8d65e4               lea esp, [ebp - 0x1c]
// 00407763  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407766  64890d00000000       mov dword ptr fs:[0], ecx
// 0040776d  5f                   pop edi
// 0040776e  5e                   pop esi
// 0040776f  5b                   pop ebx
// 00407770  8be5                 mov esp, ebp
// 00407772  5d                   pop ebp
// 00407773  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceUnregister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp