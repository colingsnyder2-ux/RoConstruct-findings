// roc 2008-06 005e2570  unit: RBX::Lighting  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2570
//
// 005e2570  8b442404             mov eax, dword ptr [esp + 4]
// 005e2574  56                   push esi
// 005e2575  57                   push edi
// 005e2576  6a00                 push 0
// 005e2578  8bf9                 mov edi, ecx
// 005e257a  8b08                 mov ecx, dword ptr [eax]
// 005e257c  8b4004               mov eax, dword ptr [eax + 4]
// 005e257f  6840420f00           push 0xf4240
// 005e2584  50                   push eax
// 005e2585  51                   push ecx
// 005e2586  e8a5f60b00           call 0x6a1c30
// 005e258b  8bf0                 mov esi, eax
// 005e258d  b8f9bad13d           mov eax, 0x3dd1baf9
// 005e2592  f7ee                 imul esi
// 005e2594  8b8f6c020000         mov ecx, dword ptr [edi + 0x26c]
// 005e259a  2bd6                 sub edx, esi
// 005e259c  c1fa10               sar edx, 0x10
// 005e259f  8bc2                 mov eax, edx
// 005e25a1  c1e81f               shr eax, 0x1f
// 005e25a4  03c2                 add eax, edx
// 005e25a6  69c080510100         imul eax, eax, 0x15180
// 005e25ac  6a00                 push 0
// 005e25ae  6840420f00           push 0xf4240
// 005e25b3  03f0                 add esi, eax
// 005e25b5  8b8768020000         mov eax, dword ptr [edi + 0x268]
// 005e25bb  51                   push ecx
// 005e25bc  50                   push eax
// 005e25bd  e86ef60b00           call 0x6a1c30
// 005e25c2  3bc6                 cmp eax, esi
// 005e25c4  0f8494000000         je 0x5e265e
// 005e25ca  85f6                 test esi, esi
// 005e25cc  7c09                 jl 0x5e25d7
// 005e25ce  6a00                 push 0
// 005e25d0  6840420f00           push 0xf4240
// 005e25d5  eb09                 jmp 0x5e25e0
// 005e25d7  6aff                 push -1
// 005e25d9  f7de                 neg esi
// 005e25db  68c0bdf0ff           push 0xfff0bdc0
// 005e25e0  8bc6                 mov eax, esi
// 005e25e2  99                   cdq 
// 005e25e3  52                   push edx
// 005e25e4  50                   push eax
// 005e25e5  e8e6f00b00           call 0x6a16d0
// 005e25ea  6a00                 push 0
// 005e25ec  6840420f00           push 0xf4240
// 005e25f1  52                   push edx
// 005e25f2  50                   push eax
// 005e25f3  898768020000         mov dword ptr [edi + 0x268], eax
// 005e25f9  89976c020000         mov dword ptr [edi + 0x26c], edx
// 005e25ff  e82cf60b00           call 0x6a1c30
// 005e2604  8944240c             mov dword ptr [esp + 0xc], eax
// 005e2608  db44240c             fild dword ptr [esp + 0xc]
// 005e260c  83ec08               sub esp, 8
// 005e260f  8d8f30010000         lea ecx, [edi + 0x130]
// 005e2615  dd1c24               fstp qword ptr [esp]
// 005e2618  e893331d00           call 0x7b59b0
// 005e261d  681ca99700           push 0x97a91c
// 005e2622  8bcf                 mov ecx, edi
// 005e2624  e8d7b4e2ff           call 0x40db00
// 005e2629  8d4714               lea eax, [edi + 0x14]
// 005e262c  50                   push eax
// 005e262d  b98ca89700           mov ecx, 0x97a88c
// 005e2632  e8e98ff8ff           call 0x56b620
// 005e2637  85c0                 test eax, eax
// 005e2639  740f                 je 0x5e264a
// 005e263b  6a00                 push 0
// 005e263d  8d4c2410             lea ecx, [esp + 0x10]
// 005e2641  51                   push ecx
// 005e2642  8d4810               lea ecx, [eax + 0x10]
// 005e2645  e8b6f8ffff           call 0x5e1f00
// 005e264a  57                   push edi
// 005e264b  e8702be8ff           call 0x4651c0
// 005e2650  83c404               add esp, 4
// 005e2653  85c0                 test eax, eax
// 005e2655  7407                 je 0x5e265e
// 005e2657  8bc8                 mov ecx, eax
// 005e2659  e8f22cf7ff           call 0x555350
// 005e265e  5f                   pop edi
// 005e265f  5e                   pop esi
// 005e2660  c20400               ret 4
// library rbxgs/roc_unit_00fd3441d97d4838.cpp (function ?setTime@Lighting@RBX@@QAEXABVtime_duration@posix_time@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_00fd3441d97d4838.cpp
