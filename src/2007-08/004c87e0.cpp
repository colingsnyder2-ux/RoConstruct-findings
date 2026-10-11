// roc 2007-08 004c87e0  unit: seg_004c0000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c87e0
//
// 004c87e0  6aff                 push -1
// 004c87e2  6878bd7400           push 0x74bd78
// 004c87e7  64a100000000         mov eax, dword ptr fs:[0]
// 004c87ed  50                   push eax
// 004c87ee  51                   push ecx
// 004c87ef  56                   push esi
// 004c87f0  57                   push edi
// 004c87f1  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c87f6  33c4                 xor eax, esp
// 004c87f8  50                   push eax
// 004c87f9  8d442410             lea eax, [esp + 0x10]
// 004c87fd  64a300000000         mov dword ptr fs:[0], eax
// 004c8803  8bf1                 mov esi, ecx
// 004c8805  8974240c             mov dword ptr [esp + 0xc], esi
// 004c8809  8b4608               mov eax, dword ptr [esi + 8]
// 004c880c  85c0                 test eax, eax
// 004c880e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004c8816  743e                 je 0x4c8856
// 004c8818  3d00020000           cmp eax, 0x200
// 004c881d  7630                 jbe 0x4c884f
// 004c881f  8b06                 mov eax, dword ptr [esi]
// 004c8821  85c0                 test eax, eax
// 004c8823  741d                 je 0x4c8842
// 004c8825  8b48fc               mov ecx, dword ptr [eax - 4]
// 004c8828  8d78fc               lea edi, [eax - 4]
// 004c882b  6820cc4000           push 0x40cc20
// 004c8830  51                   push ecx
// 004c8831  6a08                 push 8
// 004c8833  50                   push eax
// 004c8834  e8be821600           call 0x630af7
// 004c8839  57                   push edi
// 004c883a  e823741600           call 0x62fc62
// 004c883f  83c404               add esp, 4
// 004c8842  c7460800000000       mov dword ptr [esi + 8], 0
// 004c8849  c70600000000         mov dword ptr [esi], 0
// 004c884f  c7460400000000       mov dword ptr [esi + 4], 0
// 004c8856  8bce                 mov ecx, esi
// 004c8858  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004c8860  e83bf4ffff           call 0x4c7ca0
// 004c8865  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c8869  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8870  59                   pop ecx
// 004c8871  5f                   pop edi
// 004c8872  5e                   pop esi
// 004c8873  83c410               add esp, 0x10
// 004c8876  c3                   ret 
// library openrbx-raknet/ReliabilityLayer.cpp (function ??1?$RangeList@I@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet ReliabilityLayer.cpp
