// roc 2011-06 00569610  unit: seg_00560000  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569610
//
// 00569610  51                   push ecx
// 00569611  53                   push ebx
// 00569612  57                   push edi
// 00569613  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 00569619  56                   push esi
// 0056961a  e831fdffff           call 0x569350
// 0056961f  83c404               add esp, 4
// 00569622  8bde                 mov ebx, esi
// 00569624  e857ffffff           call 0x569580
// 00569629  33db                 xor ebx, ebx
// 0056962b  8bd6                 mov edx, esi
// 0056962d  895f0c               mov dword ptr [edi + 0xc], ebx
// 00569630  e89bfcffff           call 0x5692d0
// 00569635  884710               mov byte ptr [edi + 0x10], al
// 00569638  895f14               mov dword ptr [edi + 0x14], ebx
// 0056963b  895f18               mov dword ptr [edi + 0x18], ebx
// 0056963e  8a464a               mov al, byte ptr [esi + 0x4a]
// 00569641  3ac3                 cmp al, bl
// 00569643  7405                 je 0x56964a
// 00569645  385e40               cmp byte ptr [esi + 0x40], bl
// 00569648  7509                 jne 0x569653
// 0056964a  885e58               mov byte ptr [esi + 0x58], bl
// 0056964d  885e59               mov byte ptr [esi + 0x59], bl
// 00569650  885e5a               mov byte ptr [esi + 0x5a], bl
// 00569653  3ac3                 cmp al, bl
// 00569655  745e                 je 0x5696b5
// 00569657  385e41               cmp byte ptr [esi + 0x41], bl
// 0056965a  7413                 je 0x56966f
// 0056965c  8b06                 mov eax, dword ptr [esi]
// 0056965e  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 00569665  8b0e                 mov ecx, dword ptr [esi]
// 00569667  8b11                 mov edx, dword ptr [ecx]
// 00569669  56                   push esi
// 0056966a  ffd2                 call edx
// 0056966c  83c404               add esp, 4
// 0056966f  837e6403             cmp dword ptr [esi + 0x64], 3
// 00569673  7455                 je 0x5696ca
// 00569675  885e59               mov byte ptr [esi + 0x59], bl
// 00569678  885e5a               mov byte ptr [esi + 0x5a], bl
// 0056967b  895e74               mov dword ptr [esi + 0x74], ebx
// 0056967e  c6465801             mov byte ptr [esi + 0x58], 1
// 00569682  385e58               cmp byte ptr [esi + 0x58], bl
// 00569685  7412                 je 0x569699
// 00569687  56                   push esi
// 00569688  e803190100           call 0x57af90
// 0056968d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00569693  83c404               add esp, 4
// 00569696  894714               mov dword ptr [edi + 0x14], eax
// 00569699  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0056969c  7505                 jne 0x5696a3
// 0056969e  385e59               cmp byte ptr [esi + 0x59], bl
// 005696a1  7412                 je 0x5696b5
// 005696a3  56                   push esi
// 005696a4  e8870c0100           call 0x57a330
// 005696a9  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 005696af  83c404               add esp, 4
// 005696b2  894f18               mov dword ptr [edi + 0x18], ecx
// 005696b5  385e41               cmp byte ptr [esi + 0x41], bl
// 005696b8  7542                 jne 0x5696fc
// 005696ba  56                   push esi
// 005696bb  385f10               cmp byte ptr [edi + 0x10], bl
// 005696be  7420                 je 0x5696e0
// 005696c0  e80bfa0000           call 0x5790d0
// 005696c5  83c404               add esp, 4
// 005696c8  eb24                 jmp 0x5696ee
// 005696ca  395e74               cmp dword ptr [esi + 0x74], ebx
// 005696cd  7406                 je 0x5696d5
// 005696cf  c6465901             mov byte ptr [esi + 0x59], 1
// 005696d3  ebad                 jmp 0x569682
// 005696d5  385e50               cmp byte ptr [esi + 0x50], bl
// 005696d8  74a4                 je 0x56967e
// 005696da  c6465a01             mov byte ptr [esi + 0x5a], 1
// 005696de  eba2                 jmp 0x569682
// 005696e0  e8fbf20000           call 0x5789e0
// 005696e5  56                   push esi
// 005696e6  e8a5ec0000           call 0x578390
// 005696eb  83c408               add esp, 8
// 005696ee  0fb6565a             movzx edx, byte ptr [esi + 0x5a]
// 005696f2  52                   push edx
// 005696f3  56                   push esi
// 005696f4  e847e70000           call 0x577e40
// 005696f9  83c408               add esp, 8
// 005696fc  56                   push esi
// 005696fd  e8fee30000           call 0x577b00
// 00569702  83c404               add esp, 4
// 00569705  56                   push esi
// 00569706  389ec9000000         cmp byte ptr [esi + 0xc9], bl
// 0056970c  7411                 je 0x56971f
// 0056970e  8b06                 mov eax, dword ptr [esi]
// 00569710  c7401401000000       mov dword ptr [eax + 0x14], 1
// 00569717  8b0e                 mov ecx, dword ptr [esi]
// 00569719  8b11                 mov edx, dword ptr [ecx]
// 0056971b  ffd2                 call edx
// 0056971d  eb14                 jmp 0x569733
// 0056971f  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 00569725  7407                 je 0x56972e
// 00569727  e844e00000           call 0x577770
// 0056972c  eb05                 jmp 0x569733
// 0056972e  e8cdd30000           call 0x576b00
// 00569733  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00569739  83c404               add esp, 4
// 0056973c  385810               cmp byte ptr [eax + 0x10], bl
// 0056973f  7509                 jne 0x56974a
// 00569741  885c2408             mov byte ptr [esp + 8], bl
// 00569745  385e40               cmp byte ptr [esi + 0x40], bl
// 00569748  7405                 je 0x56974f
// 0056974a  c644240801           mov byte ptr [esp + 8], 1
// 0056974f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00569753  51                   push ecx
// 00569754  56                   push esi
// 00569755  e8a6c70000           call 0x575f00
// 0056975a  83c408               add esp, 8
// 0056975d  385e41               cmp byte ptr [esi + 0x41], bl
// 00569760  750a                 jne 0x56976c
// 00569762  53                   push ebx
// 00569763  56                   push esi
// 00569764  e877b80000           call 0x574fe0
// 00569769  83c408               add esp, 8
// 0056976c  8b5604               mov edx, dword ptr [esi + 4]
// 0056976f  8b4218               mov eax, dword ptr [edx + 0x18]
// 00569772  56                   push esi
// 00569773  ffd0                 call eax
// 00569775  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0056977b  8b5108               mov edx, dword ptr [ecx + 8]
// 0056977e  56                   push esi
// 0056977f  ffd2                 call edx
// 00569781  8b4e08               mov ecx, dword ptr [esi + 8]
// 00569784  83c408               add esp, 8
// 00569787  3bcb                 cmp ecx, ebx
// 00569789  744b                 je 0x5697d6
// 0056978b  385e40               cmp byte ptr [esi + 0x40], bl
// 0056978e  7546                 jne 0x5697d6
// 00569790  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00569796  385810               cmp byte ptr [eax + 0x10], bl
// 00569799  743b                 je 0x5697d6
// 0056979b  8b4624               mov eax, dword ptr [esi + 0x24]
// 0056979e  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 005697a4  7404                 je 0x5697aa
// 005697a6  8d444002             lea eax, [eax + eax*2 + 2]
// 005697aa  895904               mov dword ptr [ecx + 4], ebx
// 005697ad  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 005697b3  8b5608               mov edx, dword ptr [esi + 8]
// 005697b6  0fafc8               imul ecx, eax
// 005697b9  894a08               mov dword ptr [edx + 8], ecx
// 005697bc  8b4608               mov eax, dword ptr [esi + 8]
// 005697bf  89580c               mov dword ptr [eax + 0xc], ebx
// 005697c2  8b5608               mov edx, dword ptr [esi + 8]
// 005697c5  33c9                 xor ecx, ecx
// 005697c7  385e5a               cmp byte ptr [esi + 0x5a], bl
// 005697ca  0f95c1               setne cl
// 005697cd  83c102               add ecx, 2
// 005697d0  894a10               mov dword ptr [edx + 0x10], ecx
// 005697d3  ff470c               inc dword ptr [edi + 0xc]
// 005697d6  5f                   pop edi
// 005697d7  5b                   pop ebx
// 005697d8  59                   pop ecx
// 005697d9  c3                   ret 
// library jpeg-6b/jdmaster.c (function _master_selection)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
