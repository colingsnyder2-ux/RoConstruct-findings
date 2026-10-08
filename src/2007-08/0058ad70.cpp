// roc 2007-08 0058ad70  unit: RBX::VSoundChannel::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ad70
//
// 0058ad70  6aff                 push -1
// 0058ad72  6828b27500           push 0x75b228
// 0058ad77  64a100000000         mov eax, dword ptr fs:[0]
// 0058ad7d  50                   push eax
// 0058ad7e  64892500000000       mov dword ptr fs:[0], esp
// 0058ad85  83ec08               sub esp, 8
// 0058ad88  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058ad8c  56                   push esi
// 0058ad8d  57                   push edi
// 0058ad8e  8bf1                 mov esi, ecx
// 0058ad90  89742408             mov dword ptr [esp + 8], esi
// 0058ad94  50                   push eax
// 0058ad95  51                   push ecx
// 0058ad96  8bc4                 mov eax, esp
// 0058ad98  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0058ada0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0058ada8  89642414             mov dword ptr [esp + 0x14], esp
// 0058adac  c70000000000         mov dword ptr [eax], 0
// 0058adb2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058adb6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0058adba  51                   push ecx
// 0058adbb  52                   push edx
// 0058adbc  c644242801           mov byte ptr [esp + 0x28], 1
// 0058adc1  e88af9ffff           call 0x58a750
// 0058adc6  50                   push eax
// 0058adc7  8bce                 mov ecx, esi
// 0058adc9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0058adce  e88d7febff           call 0x442d60
// 0058add3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0058add7  50                   push eax
// 0058add8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0058addd  e8804e0a00           call 0x62fc62
// 0058ade2  6a18                 push 0x18
// 0058ade4  c706ccf77800         mov dword ptr [esi], 0x78f7cc
// 0058adea  e807510a00           call 0x62fef6
// 0058adef  83c408               add esp, 8
// 0058adf2  85c0                 test eax, eax
// 0058adf4  741e                 je 0x58ae14
// 0058adf6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0058adfa  33c9                 xor ecx, ecx
// 0058adfc  33d2                 xor edx, edx
// 0058adfe  897808               mov dword ptr [eax + 8], edi
// 0058ae01  c7004cea7a00         mov dword ptr [eax], 0x7aea4c
// 0058ae07  897004               mov dword ptr [eax + 4], esi
// 0058ae0a  894810               mov dword ptr [eax + 0x10], ecx
// 0058ae0d  895014               mov dword ptr [eax + 0x14], edx
// 0058ae10  8bf8                 mov edi, eax
// 0058ae12  eb02                 jmp 0x58ae16
// 0058ae14  33ff                 xor edi, edi
// 0058ae16  8b4618               mov eax, dword ptr [esi + 0x18]
// 0058ae19  3bf8                 cmp edi, eax
// 0058ae1b  7409                 je 0x58ae26
// 0058ae1d  50                   push eax
// 0058ae1e  e83f4e0a00           call 0x62fc62
// 0058ae23  83c404               add esp, 4
// 0058ae26  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058ae2a  897e18               mov dword ptr [esi + 0x18], edi
// 0058ae2d  5f                   pop edi
// 0058ae2e  8bc6                 mov eax, esi
// 0058ae30  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ae37  5e                   pop esi
// 0058ae38  83c414               add esp, 0x14
// 0058ae3b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
