// roc 2007-08 00606430  unit: RBX::SleepStage  size: 681 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00606430
//
// 00606430  6aff                 push -1
// 00606432  685ec37500           push 0x75c35e
// 00606437  64a100000000         mov eax, dword ptr fs:[0]
// 0060643d  50                   push eax
// 0060643e  64892500000000       mov dword ptr fs:[0], esp
// 00606445  83ec08               sub esp, 8
// 00606448  53                   push ebx
// 00606449  55                   push ebp
// 0060644a  56                   push esi
// 0060644b  57                   push edi
// 0060644c  8bf1                 mov esi, ecx
// 0060644e  6a28                 push 0x28
// 00606450  89742414             mov dword ptr [esp + 0x14], esi
// 00606454  e89d9a0200           call 0x62fef6
// 00606459  83c404               add esp, 4
// 0060645c  89442414             mov dword ptr [esp + 0x14], eax
// 00606460  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00606464  33ff                 xor edi, edi
// 00606466  3bc7                 cmp eax, edi
// 00606468  897c2420             mov dword ptr [esp + 0x20], edi
// 0060646c  740b                 je 0x606479
// 0060646e  53                   push ebx
// 0060646f  56                   push esi
// 00606470  8bc8                 mov ecx, eax
// 00606472  e8391c0200           call 0x6280b0
// 00606477  eb02                 jmp 0x60647b
// 00606479  33c0                 xor eax, eax
// 0060647b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060647f  894e04               mov dword ptr [esi + 4], ecx
// 00606482  894608               mov dword ptr [esi + 8], eax
// 00606485  895e0c               mov dword ptr [esi + 0xc], ebx
// 00606488  8d6e14               lea ebp, [esi + 0x14]
// 0060648b  bb01000000           mov ebx, 1
// 00606490  8bcd                 mov ecx, ebp
// 00606492  895c2420             mov dword ptr [esp + 0x20], ebx
// 00606496  c7063c2c7c00         mov dword ptr [esi], 0x7c2c3c
// 0060649c  e80fd1f7ff           call 0x5835b0
// 006064a1  894504               mov dword ptr [ebp + 4], eax
// 006064a4  885815               mov byte ptr [eax + 0x15], bl
// 006064a7  8b4504               mov eax, dword ptr [ebp + 4]
// 006064aa  894004               mov dword ptr [eax + 4], eax
// 006064ad  8b4504               mov eax, dword ptr [ebp + 4]
// 006064b0  8900                 mov dword ptr [eax], eax
// 006064b2  8b4504               mov eax, dword ptr [ebp + 4]
// 006064b5  894008               mov dword ptr [eax + 8], eax
// 006064b8  897d08               mov dword ptr [ebp + 8], edi
// 006064bb  8d6e20               lea ebp, [esi + 0x20]
// 006064be  8bcd                 mov ecx, ebp
// 006064c0  c644242002           mov byte ptr [esp + 0x20], 2
// 006064c5  e856e9ffff           call 0x604e20
// 006064ca  894504               mov dword ptr [ebp + 4], eax
// 006064cd  885819               mov byte ptr [eax + 0x19], bl
// 006064d0  8b4504               mov eax, dword ptr [ebp + 4]
// 006064d3  894004               mov dword ptr [eax + 4], eax
// 006064d6  8b4504               mov eax, dword ptr [ebp + 4]
// 006064d9  8900                 mov dword ptr [eax], eax
// 006064db  8b4504               mov eax, dword ptr [ebp + 4]
// 006064de  894008               mov dword ptr [eax + 8], eax
// 006064e1  897d08               mov dword ptr [ebp + 8], edi
// 006064e4  8d6e2c               lea ebp, [esi + 0x2c]
// 006064e7  8bcd                 mov ecx, ebp
// 006064e9  c644242003           mov byte ptr [esp + 0x20], 3
// 006064ee  e82de9ffff           call 0x604e20
// 006064f3  894504               mov dword ptr [ebp + 4], eax
// 006064f6  885819               mov byte ptr [eax + 0x19], bl
// 006064f9  8b4504               mov eax, dword ptr [ebp + 4]
// 006064fc  894004               mov dword ptr [eax + 4], eax
// 006064ff  8b4504               mov eax, dword ptr [ebp + 4]
// 00606502  8900                 mov dword ptr [eax], eax
// 00606504  8b4504               mov eax, dword ptr [ebp + 4]
// 00606507  894008               mov dword ptr [eax + 8], eax
// 0060650a  897d08               mov dword ptr [ebp + 8], edi
// 0060650d  8d6e38               lea ebp, [esi + 0x38]
// 00606510  8bcd                 mov ecx, ebp
// 00606512  c644242004           mov byte ptr [esp + 0x20], 4
// 00606517  e894d0f7ff           call 0x5835b0
// 0060651c  894504               mov dword ptr [ebp + 4], eax
// 0060651f  885815               mov byte ptr [eax + 0x15], bl
// 00606522  8b4504               mov eax, dword ptr [ebp + 4]
// 00606525  894004               mov dword ptr [eax + 4], eax
// 00606528  8b4504               mov eax, dword ptr [ebp + 4]
// 0060652b  8900                 mov dword ptr [eax], eax
// 0060652d  8b4504               mov eax, dword ptr [ebp + 4]
// 00606530  894008               mov dword ptr [eax + 8], eax
// 00606533  897d08               mov dword ptr [ebp + 8], edi
// 00606536  8d6e44               lea ebp, [esi + 0x44]
// 00606539  8bcd                 mov ecx, ebp
// 0060653b  c644242005           mov byte ptr [esp + 0x20], 5
// 00606540  e86b2efaff           call 0x5a93b0
// 00606545  894504               mov dword ptr [ebp + 4], eax
// 00606548  885811               mov byte ptr [eax + 0x11], bl
// 0060654b  8b4504               mov eax, dword ptr [ebp + 4]
// 0060654e  894004               mov dword ptr [eax + 4], eax
// 00606551  8b4504               mov eax, dword ptr [ebp + 4]
// 00606554  8900                 mov dword ptr [eax], eax
// 00606556  8b4504               mov eax, dword ptr [ebp + 4]
// 00606559  894008               mov dword ptr [eax + 8], eax
// 0060655c  897d08               mov dword ptr [ebp + 8], edi
// 0060655f  8d6e50               lea ebp, [esi + 0x50]
// 00606562  8bcd                 mov ecx, ebp
// 00606564  c644242006           mov byte ptr [esp + 0x20], 6
// 00606569  e8b2e8ffff           call 0x604e20
// 0060656e  894504               mov dword ptr [ebp + 4], eax
// 00606571  885819               mov byte ptr [eax + 0x19], bl
// 00606574  8b4504               mov eax, dword ptr [ebp + 4]
// 00606577  894004               mov dword ptr [eax + 4], eax
// 0060657a  8b4504               mov eax, dword ptr [ebp + 4]
// 0060657d  8900                 mov dword ptr [eax], eax
// 0060657f  8b4504               mov eax, dword ptr [ebp + 4]
// 00606582  894008               mov dword ptr [eax + 8], eax
// 00606585  897d08               mov dword ptr [ebp + 8], edi
// 00606588  8d6e5c               lea ebp, [esi + 0x5c]
// 0060658b  8bcd                 mov ecx, ebp
// 0060658d  c644242007           mov byte ptr [esp + 0x20], 7
// 00606592  e8192efaff           call 0x5a93b0
// 00606597  894504               mov dword ptr [ebp + 4], eax
// 0060659a  885811               mov byte ptr [eax + 0x11], bl
// 0060659d  8b4504               mov eax, dword ptr [ebp + 4]
// 006065a0  894004               mov dword ptr [eax + 4], eax
// 006065a3  8b4504               mov eax, dword ptr [ebp + 4]
// 006065a6  8900                 mov dword ptr [eax], eax
// 006065a8  8b4504               mov eax, dword ptr [ebp + 4]
// 006065ab  894008               mov dword ptr [eax + 8], eax
// 006065ae  897d08               mov dword ptr [ebp + 8], edi
// 006065b1  8d6e68               lea ebp, [esi + 0x68]
// 006065b4  8bcd                 mov ecx, ebp
// 006065b6  c644242008           mov byte ptr [esp + 0x20], 8
// 006065bb  e860e8ffff           call 0x604e20
// 006065c0  894504               mov dword ptr [ebp + 4], eax
// 006065c3  885819               mov byte ptr [eax + 0x19], bl
// 006065c6  8b4504               mov eax, dword ptr [ebp + 4]
// 006065c9  894004               mov dword ptr [eax + 4], eax
// 006065cc  8b4504               mov eax, dword ptr [ebp + 4]
// 006065cf  8900                 mov dword ptr [eax], eax
// 006065d1  8b4504               mov eax, dword ptr [ebp + 4]
// 006065d4  894008               mov dword ptr [eax + 8], eax
// 006065d7  897d08               mov dword ptr [ebp + 8], edi
// 006065da  897e78               mov dword ptr [esi + 0x78], edi
// 006065dd  897e7c               mov dword ptr [esi + 0x7c], edi
// 006065e0  89be80000000         mov dword ptr [esi + 0x80], edi
// 006065e6  8dae84000000         lea ebp, [esi + 0x84]
// 006065ec  8bcd                 mov ecx, ebp
// 006065ee  c64424200a           mov byte ptr [esp + 0x20], 0xa
// 006065f3  e8b82dfaff           call 0x5a93b0
// 006065f8  894504               mov dword ptr [ebp + 4], eax
// 006065fb  885811               mov byte ptr [eax + 0x11], bl
// 006065fe  8b4504               mov eax, dword ptr [ebp + 4]
// 00606601  894004               mov dword ptr [eax + 4], eax
// 00606604  8b4504               mov eax, dword ptr [ebp + 4]
// 00606607  8900                 mov dword ptr [eax], eax
// 00606609  8b4504               mov eax, dword ptr [ebp + 4]
// 0060660c  894008               mov dword ptr [eax + 8], eax
// 0060660f  897d08               mov dword ptr [ebp + 8], edi
// 00606612  8dae90000000         lea ebp, [esi + 0x90]
// 00606618  8bcd                 mov ecx, ebp
// 0060661a  c64424200b           mov byte ptr [esp + 0x20], 0xb
// 0060661f  e88c2dfaff           call 0x5a93b0
// 00606624  894504               mov dword ptr [ebp + 4], eax
// 00606627  885811               mov byte ptr [eax + 0x11], bl
// 0060662a  8b4504               mov eax, dword ptr [ebp + 4]
// 0060662d  894004               mov dword ptr [eax + 4], eax
// 00606630  8b4504               mov eax, dword ptr [ebp + 4]
// 00606633  8900                 mov dword ptr [eax], eax
// 00606635  8b4504               mov eax, dword ptr [ebp + 4]
// 00606638  894008               mov dword ptr [eax + 8], eax
// 0060663b  897d08               mov dword ptr [ebp + 8], edi
// 0060663e  8dae9c000000         lea ebp, [esi + 0x9c]
// 00606644  8bcd                 mov ecx, ebp
// 00606646  c64424200c           mov byte ptr [esp + 0x20], 0xc
// 0060664b  e8602dfaff           call 0x5a93b0
// 00606650  894504               mov dword ptr [ebp + 4], eax
// 00606653  885811               mov byte ptr [eax + 0x11], bl
// 00606656  8b4504               mov eax, dword ptr [ebp + 4]
// 00606659  894004               mov dword ptr [eax + 4], eax
// 0060665c  8b4504               mov eax, dword ptr [ebp + 4]
// 0060665f  8900                 mov dword ptr [eax], eax
// 00606661  8b4504               mov eax, dword ptr [ebp + 4]
// 00606664  894008               mov dword ptr [eax + 8], eax
// 00606667  897d08               mov dword ptr [ebp + 8], edi
// 0060666a  8daea8000000         lea ebp, [esi + 0xa8]
// 00606670  8bcd                 mov ecx, ebp
// 00606672  c64424200d           mov byte ptr [esp + 0x20], 0xd
// 00606677  e8342dfaff           call 0x5a93b0
// 0060667c  894504               mov dword ptr [ebp + 4], eax
// 0060667f  885811               mov byte ptr [eax + 0x11], bl
// 00606682  8b4504               mov eax, dword ptr [ebp + 4]
// 00606685  894004               mov dword ptr [eax + 4], eax
// 00606688  8b4504               mov eax, dword ptr [ebp + 4]
// 0060668b  8900                 mov dword ptr [eax], eax
// 0060668d  8b4504               mov eax, dword ptr [ebp + 4]
// 00606690  894008               mov dword ptr [eax + 8], eax
// 00606693  897d08               mov dword ptr [ebp + 8], edi
// 00606696  8daeb4000000         lea ebp, [esi + 0xb4]
// 0060669c  8bcd                 mov ecx, ebp
// 0060669e  c64424200e           mov byte ptr [esp + 0x20], 0xe
// 006066a3  e8082dfaff           call 0x5a93b0
// 006066a8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006066ac  894504               mov dword ptr [ebp + 4], eax
// 006066af  885811               mov byte ptr [eax + 0x11], bl
// 006066b2  8b4504               mov eax, dword ptr [ebp + 4]
// 006066b5  894004               mov dword ptr [eax + 4], eax
// 006066b8  8b4504               mov eax, dword ptr [ebp + 4]
// 006066bb  8900                 mov dword ptr [eax], eax
// 006066bd  8b4504               mov eax, dword ptr [ebp + 4]
// 006066c0  894008               mov dword ptr [eax + 8], eax
// 006066c3  897d08               mov dword ptr [ebp + 8], edi
// 006066c6  5f                   pop edi
// 006066c7  8bc6                 mov eax, esi
// 006066c9  5e                   pop esi
// 006066ca  5d                   pop ebp
// 006066cb  5b                   pop ebx
// 006066cc  64890d00000000       mov dword ptr fs:[0], ecx
// 006066d3  83c414               add esp, 0x14
// 006066d6  c20800               ret 8
// library rbxgs/v8world\ClumpStage.cpp (function ??0ClumpStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
