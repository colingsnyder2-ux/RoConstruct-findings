// roc 2009-06 006937b0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006937b0
//
// 006937b0  6aff                 push -1
// 006937b2  6868eb8600           push 0x86eb68
// 006937b7  64a100000000         mov eax, dword ptr fs:[0]
// 006937bd  50                   push eax
// 006937be  64892500000000       mov dword ptr fs:[0], esp
// 006937c5  83ec08               sub esp, 8
// 006937c8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006937cc  56                   push esi
// 006937cd  57                   push edi
// 006937ce  8bf1                 mov esi, ecx
// 006937d0  89742408             mov dword ptr [esp + 8], esi
// 006937d4  50                   push eax
// 006937d5  51                   push ecx
// 006937d6  8bc4                 mov eax, esp
// 006937d8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006937e0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006937e8  89642414             mov dword ptr [esp + 0x14], esp
// 006937ec  c70000000000         mov dword ptr [eax], 0
// 006937f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006937f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006937fa  51                   push ecx
// 006937fb  52                   push edx
// 006937fc  c644242801           mov byte ptr [esp + 0x28], 1
// 00693801  e83a83f5ff           call 0x5ebb40
// 00693806  50                   push eax
// 00693807  8bce                 mov ecx, esi
// 00693809  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0069380e  e8edc8daff           call 0x440100
// 00693813  6a00                 push 0
// 00693815  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0069381a  e813520800           call 0x718a32
// 0069381f  6a18                 push 0x18
// 00693821  c706ac468c00         mov dword ptr [esi], 0x8c46ac
// 00693827  e80c520800           call 0x718a38
// 0069382c  83c408               add esp, 8
// 0069382f  85c0                 test eax, eax
// 00693831  741e                 je 0x693851
// 00693833  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693837  33c9                 xor ecx, ecx
// 00693839  33d2                 xor edx, edx
// 0069383b  897808               mov dword ptr [eax + 8], edi
// 0069383e  c70014708e00         mov dword ptr [eax], 0x8e7014
// 00693844  897004               mov dword ptr [eax + 4], esi
// 00693847  894810               mov dword ptr [eax + 0x10], ecx
// 0069384a  895014               mov dword ptr [eax + 0x14], edx
// 0069384d  8bf8                 mov edi, eax
// 0069384f  eb02                 jmp 0x693853
// 00693851  33ff                 xor edi, edi
// 00693853  8b4618               mov eax, dword ptr [esi + 0x18]
// 00693856  3bf8                 cmp edi, eax
// 00693858  7409                 je 0x693863
// 0069385a  50                   push eax
// 0069385b  e8d2510800           call 0x718a32
// 00693860  83c404               add esp, 4
// 00693863  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693867  897e18               mov dword ptr [esi + 0x18], edi
// 0069386a  5f                   pop edi
// 0069386b  8bc6                 mov eax, esi
// 0069386d  64890d00000000       mov dword ptr fs:[0], ecx
// 00693874  5e                   pop esi
// 00693875  83c414               add esp, 0x14
// 00693878  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
