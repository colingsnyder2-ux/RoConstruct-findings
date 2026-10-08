// roc 2007-08 0053da20  unit: RBX::VLocalScript::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053da20
//
// 0053da20  6aff                 push -1
// 0053da22  6828b27500           push 0x75b228
// 0053da27  64a100000000         mov eax, dword ptr fs:[0]
// 0053da2d  50                   push eax
// 0053da2e  64892500000000       mov dword ptr fs:[0], esp
// 0053da35  83ec08               sub esp, 8
// 0053da38  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053da3c  56                   push esi
// 0053da3d  57                   push edi
// 0053da3e  8bf1                 mov esi, ecx
// 0053da40  89742408             mov dword ptr [esp + 8], esi
// 0053da44  50                   push eax
// 0053da45  51                   push ecx
// 0053da46  8bc4                 mov eax, esp
// 0053da48  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0053da50  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0053da58  89642414             mov dword ptr [esp + 0x14], esp
// 0053da5c  c70000000000         mov dword ptr [eax], 0
// 0053da62  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053da66  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053da6a  51                   push ecx
// 0053da6b  52                   push edx
// 0053da6c  c644242801           mov byte ptr [esp + 0x28], 1
// 0053da71  e8fafdffff           call 0x53d870
// 0053da76  50                   push eax
// 0053da77  8bce                 mov ecx, esi
// 0053da79  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0053da7e  e8dd52f0ff           call 0x442d60
// 0053da83  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053da87  50                   push eax
// 0053da88  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0053da8d  e8d0210f00           call 0x62fc62
// 0053da92  6a18                 push 0x18
// 0053da94  c706ccf77800         mov dword ptr [esi], 0x78f7cc
// 0053da9a  e857240f00           call 0x62fef6
// 0053da9f  83c408               add esp, 8
// 0053daa2  85c0                 test eax, eax
// 0053daa4  741e                 je 0x53dac4
// 0053daa6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0053daaa  33c9                 xor ecx, ecx
// 0053daac  33d2                 xor edx, edx
// 0053daae  897808               mov dword ptr [eax + 8], edi
// 0053dab1  c700505e7a00         mov dword ptr [eax], 0x7a5e50
// 0053dab7  897004               mov dword ptr [eax + 4], esi
// 0053daba  894810               mov dword ptr [eax + 0x10], ecx
// 0053dabd  895014               mov dword ptr [eax + 0x14], edx
// 0053dac0  8bf8                 mov edi, eax
// 0053dac2  eb02                 jmp 0x53dac6
// 0053dac4  33ff                 xor edi, edi
// 0053dac6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0053dac9  3bf8                 cmp edi, eax
// 0053dacb  7409                 je 0x53dad6
// 0053dacd  50                   push eax
// 0053dace  e88f210f00           call 0x62fc62
// 0053dad3  83c404               add esp, 4
// 0053dad6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053dada  897e18               mov dword ptr [esi + 0x18], edi
// 0053dadd  5f                   pop edi
// 0053dade  8bc6                 mov eax, esi
// 0053dae0  64890d00000000       mov dword ptr fs:[0], ecx
// 0053dae7  5e                   pop esi
// 0053dae8  83c414               add esp, 0x14
// 0053daeb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
