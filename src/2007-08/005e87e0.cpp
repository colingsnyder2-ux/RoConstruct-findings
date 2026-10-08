// roc 2007-08 005e87e0  unit: RBX::VExplosion::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e87e0
//
// 005e87e0  6aff                 push -1
// 005e87e2  6828b27500           push 0x75b228
// 005e87e7  64a100000000         mov eax, dword ptr fs:[0]
// 005e87ed  50                   push eax
// 005e87ee  64892500000000       mov dword ptr fs:[0], esp
// 005e87f5  83ec08               sub esp, 8
// 005e87f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e87fc  56                   push esi
// 005e87fd  57                   push edi
// 005e87fe  8bf1                 mov esi, ecx
// 005e8800  89742408             mov dword ptr [esp + 8], esi
// 005e8804  50                   push eax
// 005e8805  51                   push ecx
// 005e8806  8bc4                 mov eax, esp
// 005e8808  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e8810  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e8818  89642414             mov dword ptr [esp + 0x14], esp
// 005e881c  c70000000000         mov dword ptr [eax], 0
// 005e8822  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e8826  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e882a  51                   push ecx
// 005e882b  52                   push edx
// 005e882c  c644242801           mov byte ptr [esp + 0x28], 1
// 005e8831  e84a58faff           call 0x58e080
// 005e8836  50                   push eax
// 005e8837  8bce                 mov ecx, esi
// 005e8839  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e883e  e89dcae5ff           call 0x4452e0
// 005e8843  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e8847  50                   push eax
// 005e8848  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e884d  e810740400           call 0x62fc62
// 005e8852  6a18                 push 0x18
// 005e8854  c706bccd7900         mov dword ptr [esi], 0x79cdbc
// 005e885a  e897760400           call 0x62fef6
// 005e885f  83c408               add esp, 8
// 005e8862  85c0                 test eax, eax
// 005e8864  741e                 je 0x5e8884
// 005e8866  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005e886a  33c9                 xor ecx, ecx
// 005e886c  33d2                 xor edx, edx
// 005e886e  897808               mov dword ptr [eax + 8], edi
// 005e8871  c70048d97b00         mov dword ptr [eax], 0x7bd948
// 005e8877  897004               mov dword ptr [eax + 4], esi
// 005e887a  894810               mov dword ptr [eax + 0x10], ecx
// 005e887d  895014               mov dword ptr [eax + 0x14], edx
// 005e8880  8bf8                 mov edi, eax
// 005e8882  eb02                 jmp 0x5e8886
// 005e8884  33ff                 xor edi, edi
// 005e8886  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e8889  3bf8                 cmp edi, eax
// 005e888b  7409                 je 0x5e8896
// 005e888d  50                   push eax
// 005e888e  e8cf730400           call 0x62fc62
// 005e8893  83c404               add esp, 4
// 005e8896  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e889a  897e18               mov dword ptr [esi + 0x18], edi
// 005e889d  5f                   pop edi
// 005e889e  8bc6                 mov eax, esi
// 005e88a0  64890d00000000       mov dword ptr fs:[0], ecx
// 005e88a7  5e                   pop esi
// 005e88a8  83c414               add esp, 0x14
// 005e88ab  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
