// roc 2009-12 005fc390  unit: G3D::TextInput::WrongSymbol  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc390
//
// 005fc390  6aff                 push -1
// 005fc392  6816fa9300           push 0x93fa16
// 005fc397  64a100000000         mov eax, dword ptr fs:[0]
// 005fc39d  50                   push eax
// 005fc39e  64892500000000       mov dword ptr fs:[0], esp
// 005fc3a5  81ecac000000         sub esp, 0xac
// 005fc3ab  53                   push ebx
// 005fc3ac  56                   push esi
// 005fc3ad  8d442410             lea eax, [esp + 0x10]
// 005fc3b1  50                   push eax
// 005fc3b2  8bf1                 mov esi, ecx
// 005fc3b4  e837fcffff           call 0x5fbff0
// 005fc3b9  8b442434             mov eax, dword ptr [esp + 0x34]
// 005fc3bd  33db                 xor ebx, ebx
// 005fc3bf  899c24bc000000       mov dword ptr [esp + 0xbc], ebx
// 005fc3c6  83f802               cmp eax, 2
// 005fc3c9  753d                 jne 0x5fc408
// 005fc3cb  8d4c2410             lea ecx, [esp + 0x10]
// 005fc3cf  e86ce5ffff           call 0x5fa940
// 005fc3d4  dd5c2408             fstp qword ptr [esp + 8]
// 005fc3d8  8d4c2410             lea ecx, [esp + 0x10]
// 005fc3dc  c78424bc000000ffffffff mov dword ptr [esp + 0xbc], 0xffffffff
// 005fc3e7  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc3ed  dd442408             fld qword ptr [esp + 8]
// 005fc3f1  5e                   pop esi
// 005fc3f2  5b                   pop ebx
// 005fc3f3  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 005fc3fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc401  81c4b8000000         add esp, 0xb8
// 005fc407  c3                   ret 
// 005fc408  57                   push edi
// 005fc409  385e3d               cmp byte ptr [esi + 0x3d], bl
// 005fc40c  0f85e7000000         jne 0x5fc4f9
// 005fc412  83f801               cmp eax, 1
// 005fc415  0f85de000000         jne 0x5fc4f9
// 005fc41b  8b3dacb69800         mov edi, dword ptr [0x98b6ac]
// 005fc421  8d4c2414             lea ecx, [esp + 0x14]
// 005fc425  68942e9c00           push 0x9c2e94
// 005fc42a  51                   push ecx
// 005fc42b  ffd7                 call edi
// 005fc42d  83c408               add esp, 8
// 005fc430  84c0                 test al, al
// 005fc432  7517                 jne 0x5fc44b
// 005fc434  8d542414             lea edx, [esp + 0x14]
// 005fc438  68a02e9c00           push 0x9c2ea0
// 005fc43d  52                   push edx
// 005fc43e  ffd7                 call edi
// 005fc440  83c408               add esp, 8
// 005fc443  84c0                 test al, al
// 005fc445  0f84ae000000         je 0x5fc4f9
// 005fc44b  8d442440             lea eax, [esp + 0x40]
// 005fc44f  50                   push eax
// 005fc450  8bce                 mov ecx, esi
// 005fc452  e899fbffff           call 0x5fbff0
// 005fc457  837c246402           cmp dword ptr [esp + 0x64], 2
// 005fc45c  c68424c000000001     mov byte ptr [esp + 0xc0], 1
// 005fc464  7576                 jne 0x5fc4dc
// 005fc466  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005fc46a  41                   inc ecx
// 005fc46b  394c2460             cmp dword ptr [esp + 0x60], ecx
// 005fc46f  756b                 jne 0x5fc4dc
// 005fc471  8d542414             lea edx, [esp + 0x14]
// 005fc475  68942e9c00           push 0x9c2e94
// 005fc47a  52                   push edx
// 005fc47b  ffd7                 call edi
// 005fc47d  83c408               add esp, 8
// 005fc480  8d4c2440             lea ecx, [esp + 0x40]
// 005fc484  84c0                 test al, al
// 005fc486  7409                 je 0x5fc491
// 005fc488  e8b3e4ffff           call 0x5fa940
// 005fc48d  d9e0                 fchs 
// 005fc48f  eb05                 jmp 0x5fc496
// 005fc491  e8aae4ffff           call 0x5fa940
// 005fc496  8d4c2440             lea ecx, [esp + 0x40]
// 005fc49a  dd5c240c             fstp qword ptr [esp + 0xc]
// 005fc49e  889c24c0000000       mov byte ptr [esp + 0xc0], bl
// 005fc4a5  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc4ab  8d4c2414             lea ecx, [esp + 0x14]
// 005fc4af  c78424c0000000ffffffff mov dword ptr [esp + 0xc0], 0xffffffff
// 005fc4ba  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc4c0  dd44240c             fld qword ptr [esp + 0xc]
// 005fc4c4  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 005fc4cb  5f                   pop edi
// 005fc4cc  5e                   pop esi
// 005fc4cd  5b                   pop ebx
// 005fc4ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc4d5  81c4b8000000         add esp, 0xb8
// 005fc4db  c3                   ret 
// 005fc4dc  8d442440             lea eax, [esp + 0x40]
// 005fc4e0  50                   push eax
// 005fc4e1  8bce                 mov ecx, esi
// 005fc4e3  e848feffff           call 0x5fc330
// 005fc4e8  8d4c2440             lea ecx, [esp + 0x40]
// 005fc4ec  889c24c0000000       mov byte ptr [esp + 0xc0], bl
// 005fc4f3  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc4f9  8d4c2414             lea ecx, [esp + 0x14]
// 005fc4fd  51                   push ecx
// 005fc4fe  8bce                 mov ecx, esi
// 005fc500  e82bfeffff           call 0x5fc330
// 005fc505  8b542438             mov edx, dword ptr [esp + 0x38]
// 005fc509  8b442434             mov eax, dword ptr [esp + 0x34]
// 005fc50d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005fc511  52                   push edx
// 005fc512  6a02                 push 2
// 005fc514  50                   push eax
// 005fc515  51                   push ecx
// 005fc516  83c640               add esi, 0x40
// 005fc519  56                   push esi
// 005fc51a  8d8c2480000000       lea ecx, [esp + 0x80]
// 005fc521  e84ae7ffff           call 0x5fac70
// 005fc526  685832ab00           push 0xab3258
// 005fc52b  8d542470             lea edx, [esp + 0x70]
// 005fc52f  52                   push edx
// 005fc530  e843831f00           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?readNumber@TextInput@G3D@@QAENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
