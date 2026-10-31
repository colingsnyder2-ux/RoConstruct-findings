// roc 2012-06 00405510  unit: ATL::CRegObject  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00405510
//
// 00405510  6aff                 push -1
// 00405512  64a100000000         mov eax, dword ptr fs:[0]
// 00405518  6848a1a900           push 0xa9a148
// 0040551d  50                   push eax
// 0040551e  64892500000000       mov dword ptr fs:[0], esp
// 00405525  83ec38               sub esp, 0x38
// 00405528  53                   push ebx
// 00405529  55                   push ebp
// 0040552a  56                   push esi
// 0040552b  57                   push edi
// 0040552c  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00405530  33db                 xor ebx, ebx
// 00405532  8bf1                 mov esi, ecx
// 00405534  3bfb                 cmp edi, ebx
// 00405536  0f844b020000         je 0x405787
// 0040553c  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00405540  3beb                 cmp ebp, ebx
// 00405542  0f843f020000         je 0x405787
// 00405548  57                   push edi
// 00405549  895d00               mov dword ptr [ebp], ebx
// 0040554c  ff15a821b200         call dword ptr [0xb221a8]
// 00405552  03c0                 add eax, eax
// 00405554  50                   push eax
// 00405555  8d4c2420             lea ecx, [esp + 0x20]
// 00405559  e8b2efffff           call 0x404510
// 0040555e  895c2450             mov dword ptr [esp + 0x50], ebx
// 00405562  395c2424             cmp dword ptr [esp + 0x24], ebx
// 00405566  7521                 jne 0x405589
// 00405568  53                   push ebx
// 00405569  ff151051b200         call dword ptr [0xb25110]
// 0040556f  5f                   pop edi
// 00405570  5e                   pop esi
// 00405571  5d                   pop ebp
// 00405572  b80e000780           mov eax, 0x8007000e
// 00405577  5b                   pop ebx
// 00405578  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0040557c  64890d00000000       mov dword ptr fs:[0], ecx
// 00405583  83c444               add esp, 0x44
// 00405586  c20800               ret 8
// 00405589  893e                 mov dword ptr [esi], edi
// 0040558b  a02864e100           mov al, byte ptr [0xe16428]
// 00405590  895c2414             mov dword ptr [esp + 0x14], ebx
// 00405594  895c2418             mov dword ptr [esp + 0x18], ebx
// 00405598  32db                 xor bl, bl
// 0040559a  88442413             mov byte ptr [esp + 0x13], al
// 0040559e  885c2458             mov byte ptr [esp + 0x58], bl
// 004055a2  381f                 cmp byte ptr [edi], bl
// 004055a4  0f8418010000         je 0x4056c2
// 004055aa  8b2d183cb200         mov ebp, dword ptr [0xb23c18]
// 004055b0  807c241301           cmp byte ptr [esp + 0x13], 1
// 004055b5  0f85c6000000         jne 0x405681
// 004055bb  837c241800           cmp dword ptr [esp + 0x18], 0
// 004055c0  7547                 jne 0x405609
// 004055c2  8b06                 mov eax, dword ptr [esi]
// 004055c4  68e836b400           push 0xb436e8
// 004055c9  50                   push eax
// 004055ca  ff15f429b200         call dword ptr [0xb229f4]
// 004055d0  83c408               add esp, 8
// 004055d3  85c0                 test eax, eax
// 004055d5  7432                 je 0x405609
// 004055d7  8b0e                 mov ecx, dword ptr [esi]
// 004055d9  3bc1                 cmp eax, ecx
// 004055db  752c                 jne 0x405609
// 004055dd  51                   push ecx
// 004055de  ffd5                 call ebp
// 004055e0  50                   push eax
// 004055e1  8906                 mov dword ptr [esi], eax
// 004055e3  ffd5                 call ebp
// 004055e5  50                   push eax
// 004055e6  8906                 mov dword ptr [esi], eax
// 004055e8  ffd5                 call ebp
// 004055ea  50                   push eax
// 004055eb  8906                 mov dword ptr [esi], eax
// 004055ed  ffd5                 call ebp
// 004055ef  68a838b400           push 0xb438a8
// 004055f4  8d4c2420             lea ecx, [esp + 0x20]
// 004055f8  8906                 mov dword ptr [esi], eax
// 004055fa  e871fdffff           call 0x405370
// 004055ff  85c0                 test eax, eax
// 00405601  0f8459010000         je 0x405760
// 00405607  b301                 mov bl, 1
// 00405609  8b06                 mov eax, dword ptr [esi]
// 0040560b  803827               cmp byte ptr [eax], 0x27
// 0040560e  7536                 jne 0x405646
// 00405610  807c245800           cmp byte ptr [esp + 0x58], 0
// 00405615  7507                 jne 0x40561e
// 00405617  c644245801           mov byte ptr [esp + 0x58], 1
// 0040561c  eb63                 jmp 0x405681
// 0040561e  50                   push eax
// 0040561f  ffd5                 call ebp
// 00405621  803827               cmp byte ptr [eax], 0x27
// 00405624  7407                 je 0x40562d
// 00405626  c644245800           mov byte ptr [esp + 0x58], 0
// 0040562b  eb20                 jmp 0x40564d
// 0040562d  8b0e                 mov ecx, dword ptr [esi]
// 0040562f  51                   push ecx
// 00405630  ffd5                 call ebp
// 00405632  50                   push eax
// 00405633  8d4c2420             lea ecx, [esp + 0x20]
// 00405637  8906                 mov dword ptr [esi], eax
// 00405639  e8c2efffff           call 0x404600
// 0040563e  85c0                 test eax, eax
// 00405640  0f841a010000         je 0x405760
// 00405646  807c245800           cmp byte ptr [esp + 0x58], 0
// 0040564b  7534                 jne 0x405681
// 0040564d  8b16                 mov edx, dword ptr [esi]
// 0040564f  8a02                 mov al, byte ptr [edx]
// 00405651  3c7b                 cmp al, 0x7b
// 00405653  7504                 jne 0x405659
// 00405655  ff442418             inc dword ptr [esp + 0x18]
// 00405659  3c7d                 cmp al, 0x7d
// 0040565b  7524                 jne 0x405681
// 0040565d  836c241801           sub dword ptr [esp + 0x18], 1
// 00405662  751d                 jne 0x405681
// 00405664  80fb01               cmp bl, 1
// 00405667  7518                 jne 0x405681
// 00405669  689038b400           push 0xb43890
// 0040566e  8d4c2420             lea ecx, [esp + 0x20]
// 00405672  e8f9fcffff           call 0x405370
// 00405677  85c0                 test eax, eax
// 00405679  0f84e1000000         je 0x405760
// 0040567f  32db                 xor bl, bl
// 00405681  8b3e                 mov edi, dword ptr [esi]
// 00405683  803f25               cmp byte ptr [edi], 0x25
// 00405686  57                   push edi
// 00405687  750c                 jne 0x405695
// 00405689  ffd5                 call ebp
// 0040568b  8bf8                 mov edi, eax
// 0040568d  893e                 mov dword ptr [esi], edi
// 0040568f  803f25               cmp byte ptr [edi], 0x25
// 00405692  7561                 jne 0x4056f5
// 00405694  57                   push edi
// 00405695  ffd5                 call ebp
// 00405697  2bc7                 sub eax, edi
// 00405699  50                   push eax
// 0040569a  57                   push edi
// 0040569b  8d4c2424             lea ecx, [esp + 0x24]
// 0040569f  e8bceeffff           call 0x404560
// 004056a4  85c0                 test eax, eax
// 004056a6  0f84b4000000         je 0x405760
// 004056ac  8b06                 mov eax, dword ptr [esi]
// 004056ae  50                   push eax
// 004056af  ffd5                 call ebp
// 004056b1  8bc8                 mov ecx, eax
// 004056b3  8906                 mov dword ptr [esi], eax
// 004056b5  803900               cmp byte ptr [ecx], 0
// 004056b8  0f85f2feffff         jne 0x4055b0
// 004056be  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 004056c2  8b442424             mov eax, dword ptr [esp + 0x24]
// 004056c6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004056ce  894500               mov dword ptr [ebp], eax
// 004056d1  8b542424             mov edx, dword ptr [esp + 0x24]
// 004056d5  52                   push edx
// 004056d6  ff151051b200         call dword ptr [0xb25110]
// 004056dc  8b442414             mov eax, dword ptr [esp + 0x14]
// 004056e0  5f                   pop edi
// 004056e1  5e                   pop esi
// 004056e2  5d                   pop ebp
// 004056e3  5b                   pop ebx
// 004056e4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004056e8  64890d00000000       mov dword ptr fs:[0], ecx
// 004056ef  83c444               add esp, 0x44
// 004056f2  c20800               ret 8
// 004056f5  6a25                 push 0x25
// 004056f7  57                   push edi
// 004056f8  e843f0ffff           call 0x404740
// 004056fd  8bf8                 mov edi, eax
// 004056ff  83c408               add esp, 8
// 00405702  85ff                 test edi, edi
// 00405704  7467                 je 0x40576d
// 00405706  8b0e                 mov ecx, dword ptr [esi]
// 00405708  2bc1                 sub eax, ecx
// 0040570a  83f81f               cmp eax, 0x1f
// 0040570d  7f6b                 jg 0x40577a
// 0040570f  50                   push eax
// 00405710  51                   push ecx
// 00405711  8d442430             lea eax, [esp + 0x30]
// 00405715  6a20                 push 0x20
// 00405717  50                   push eax
// 00405718  ff15f029b200         call dword ptr [0xb229f0]
// 0040571e  50                   push eax
// 0040571f  e8fce8ffff           call 0x404020
// 00405724  83c414               add esp, 0x14
// 00405727  8d4c2428             lea ecx, [esp + 0x28]
// 0040572b  51                   push ecx
// 0040572c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040572f  e89cfdffff           call 0x4054d0
// 00405734  85c0                 test eax, eax
// 00405736  7435                 je 0x40576d
// 00405738  50                   push eax
// 00405739  8d4c2420             lea ecx, [esp + 0x20]
// 0040573d  e82efcffff           call 0x405370
// 00405742  85c0                 test eax, eax
// 00405744  741a                 je 0x405760
// 00405746  393e                 cmp dword ptr [esi], edi
// 00405748  0f845effffff         je 0x4056ac
// 0040574e  8bff                 mov edi, edi
// 00405750  8b16                 mov edx, dword ptr [esi]
// 00405752  52                   push edx
// 00405753  ffd5                 call ebp
// 00405755  8906                 mov dword ptr [esi], eax
// 00405757  3bc7                 cmp eax, edi
// 00405759  75f5                 jne 0x405750
// 0040575b  e94cffffff           jmp 0x4056ac
// 00405760  c74424140e000780     mov dword ptr [esp + 0x14], 0x8007000e
// 00405768  e964ffffff           jmp 0x4056d1
// 0040576d  c744241409000280     mov dword ptr [esp + 0x14], 0x80020009
// 00405775  e957ffffff           jmp 0x4056d1
// 0040577a  c744241405400080     mov dword ptr [esp + 0x14], 0x80004005
// 00405782  e94affffff           jmp 0x4056d1
// 00405787  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0040578b  5f                   pop edi
// 0040578c  5e                   pop esi
// 0040578d  5d                   pop ebp
// 0040578e  b803400080           mov eax, 0x80004003
// 00405793  5b                   pop ebx
// 00405794  64890d00000000       mov dword ptr fs:[0], ecx
// 0040579b  83c444               add esp, 0x44
// 0040579e  c20800               ret 8
// copied from an identical function in another client (function ?PreProcessBuffer@CRegParser@ATL@@QAEJPADPAPAD@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp