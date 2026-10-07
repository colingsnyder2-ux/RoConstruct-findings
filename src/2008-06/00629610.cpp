// roc 2008-06 00629610  unit: RBX::VClickDetector::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629610
//
// 00629610  6aff                 push -1
// 00629612  68880d7c00           push 0x7c0d88
// 00629617  64a100000000         mov eax, dword ptr fs:[0]
// 0062961d  50                   push eax
// 0062961e  64892500000000       mov dword ptr fs:[0], esp
// 00629625  83ec08               sub esp, 8
// 00629628  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062962c  56                   push esi
// 0062962d  57                   push edi
// 0062962e  8bf1                 mov esi, ecx
// 00629630  89742408             mov dword ptr [esp + 8], esi
// 00629634  50                   push eax
// 00629635  51                   push ecx
// 00629636  8bc4                 mov eax, esp
// 00629638  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00629640  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00629648  89642414             mov dword ptr [esp + 0x14], esp
// 0062964c  c70000000000         mov dword ptr [eax], 0
// 00629652  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00629656  8b542428             mov edx, dword ptr [esp + 0x28]
// 0062965a  51                   push ecx
// 0062965b  52                   push edx
// 0062965c  c644242801           mov byte ptr [esp + 0x28], 1
// 00629661  e84a6cf9ff           call 0x5c02b0
// 00629666  50                   push eax
// 00629667  8bce                 mov ecx, esi
// 00629669  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0062966e  e89dbfe1ff           call 0x445610
// 00629673  6a18                 push 0x18
// 00629675  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0062967a  c70634418200         mov dword ptr [esi], 0x824134
// 00629680  e89b720700           call 0x6a0920
// 00629685  83c404               add esp, 4
// 00629688  85c0                 test eax, eax
// 0062968a  741e                 je 0x6296aa
// 0062968c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00629690  33c9                 xor ecx, ecx
// 00629692  33d2                 xor edx, edx
// 00629694  897808               mov dword ptr [eax + 8], edi
// 00629697  c7003c598400         mov dword ptr [eax], 0x84593c
// 0062969d  897004               mov dword ptr [eax + 4], esi
// 006296a0  894810               mov dword ptr [eax + 0x10], ecx
// 006296a3  895014               mov dword ptr [eax + 0x14], edx
// 006296a6  8bf8                 mov edi, eax
// 006296a8  eb02                 jmp 0x6296ac
// 006296aa  33ff                 xor edi, edi
// 006296ac  8b4618               mov eax, dword ptr [esi + 0x18]
// 006296af  3bf8                 cmp edi, eax
// 006296b1  740d                 je 0x6296c0
// 006296b3  85c0                 test eax, eax
// 006296b5  7409                 je 0x6296c0
// 006296b7  50                   push eax
// 006296b8  e8bd6f0700           call 0x6a067a
// 006296bd  83c404               add esp, 4
// 006296c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006296c4  897e18               mov dword ptr [esi + 0x18], edi
// 006296c7  5f                   pop edi
// 006296c8  8bc6                 mov eax, esi
// 006296ca  64890d00000000       mov dword ptr fs:[0], ecx
// 006296d1  5e                   pop esi
// 006296d2  83c414               add esp, 0x14
// 006296d5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
