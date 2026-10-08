// roc 2007-08 006280b0  unit: RBX::AssemblyStage  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006280b0
//
// 006280b0  6aff                 push -1
// 006280b2  68fec07500           push 0x75c0fe
// 006280b7  64a100000000         mov eax, dword ptr fs:[0]
// 006280bd  50                   push eax
// 006280be  64892500000000       mov dword ptr fs:[0], esp
// 006280c5  83ec08               sub esp, 8
// 006280c8  56                   push esi
// 006280c9  57                   push edi
// 006280ca  8bf1                 mov esi, ecx
// 006280cc  6a24                 push 0x24
// 006280ce  8974240c             mov dword ptr [esp + 0xc], esi
// 006280d2  e81f7e0000           call 0x62fef6
// 006280d7  83c404               add esp, 4
// 006280da  8944240c             mov dword ptr [esp + 0xc], eax
// 006280de  85c0                 test eax, eax
// 006280e0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006280e4  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006280ec  740b                 je 0x6280f9
// 006280ee  57                   push edi
// 006280ef  56                   push esi
// 006280f0  8bc8                 mov ecx, eax
// 006280f2  e859faffff           call 0x627b50
// 006280f7  eb02                 jmp 0x6280fb
// 006280f9  33c0                 xor eax, eax
// 006280fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006280ff  894e04               mov dword ptr [esi + 4], ecx
// 00628102  894608               mov dword ptr [esi + 8], eax
// 00628105  897e0c               mov dword ptr [esi + 0xc], edi
// 00628108  8d7e10               lea edi, [esi + 0x10]
// 0062810b  8bcf                 mov ecx, edi
// 0062810d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00628115  c706ac4b7c00         mov dword ptr [esi], 0x7c4bac
// 0062811b  e89012f8ff           call 0x5a93b0
// 00628120  894704               mov dword ptr [edi + 4], eax
// 00628123  c6401101             mov byte ptr [eax + 0x11], 1
// 00628127  8b4704               mov eax, dword ptr [edi + 4]
// 0062812a  894004               mov dword ptr [eax + 4], eax
// 0062812d  8b4704               mov eax, dword ptr [edi + 4]
// 00628130  8900                 mov dword ptr [eax], eax
// 00628132  8b4704               mov eax, dword ptr [edi + 4]
// 00628135  894008               mov dword ptr [eax + 8], eax
// 00628138  c7470800000000       mov dword ptr [edi + 8], 0
// 0062813f  8d7e1c               lea edi, [esi + 0x1c]
// 00628142  8bcf                 mov ecx, edi
// 00628144  c644241802           mov byte ptr [esp + 0x18], 2
// 00628149  e86212f8ff           call 0x5a93b0
// 0062814e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00628152  894704               mov dword ptr [edi + 4], eax
// 00628155  c6401101             mov byte ptr [eax + 0x11], 1
// 00628159  8b4704               mov eax, dword ptr [edi + 4]
// 0062815c  894004               mov dword ptr [eax + 4], eax
// 0062815f  8b4704               mov eax, dword ptr [edi + 4]
// 00628162  8900                 mov dword ptr [eax], eax
// 00628164  8b4704               mov eax, dword ptr [edi + 4]
// 00628167  894008               mov dword ptr [eax + 8], eax
// 0062816a  c7470800000000       mov dword ptr [edi + 8], 0
// 00628171  5f                   pop edi
// 00628172  8bc6                 mov eax, esi
// 00628174  5e                   pop esi
// 00628175  64890d00000000       mov dword ptr fs:[0], ecx
// 0062817c  83c414               add esp, 0x14
// 0062817f  c20800               ret 8
// library rbxgs/v8world\AssemblyStage.cpp (function ??0AssemblyStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/AssemblyStage.cpp
