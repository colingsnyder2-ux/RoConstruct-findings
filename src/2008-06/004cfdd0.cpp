// roc 2008-06 004cfdd0  unit: RBX::Network::PhysicsSender  size: 301 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cfdd0
//
// 004cfdd0  6aff                 push -1
// 004cfdd2  683bf47b00           push 0x7bf43b
// 004cfdd7  64a100000000         mov eax, dword ptr fs:[0]
// 004cfddd  50                   push eax
// 004cfdde  64892500000000       mov dword ptr fs:[0], esp
// 004cfde5  51                   push ecx
// 004cfde6  56                   push esi
// 004cfde7  8bf1                 mov esi, ecx
// 004cfde9  8b4608               mov eax, dword ptr [esi + 8]
// 004cfdec  57                   push edi
// 004cfded  394604               cmp dword ptr [esi + 4], eax
// 004cfdf0  0f85b7000000         jne 0x4cfead
// 004cfdf6  85c0                 test eax, eax
// 004cfdf8  7509                 jne 0x4cfe03
// 004cfdfa  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004cfe01  eb05                 jmp 0x4cfe08
// 004cfe03  03c0                 add eax, eax
// 004cfe05  894608               mov dword ptr [esi + 8], eax
// 004cfe08  55                   push ebp
// 004cfe09  8b6e08               mov ebp, dword ptr [esi + 8]
// 004cfe0c  33c9                 xor ecx, ecx
// 004cfe0e  8bc5                 mov eax, ebp
// 004cfe10  ba08000000           mov edx, 8
// 004cfe15  f7e2                 mul edx
// 004cfe17  0f90c1               seto cl
// 004cfe1a  f7d9                 neg ecx
// 004cfe1c  0bc8                 or ecx, eax
// 004cfe1e  33c0                 xor eax, eax
// 004cfe20  83c104               add ecx, 4
// 004cfe23  0f92c0               setb al
// 004cfe26  f7d8                 neg eax
// 004cfe28  0bc1                 or eax, ecx
// 004cfe2a  50                   push eax
// 004cfe2b  e8f00a1d00           call 0x6a0920
// 004cfe30  83c404               add esp, 4
// 004cfe33  8944240c             mov dword ptr [esp + 0xc], eax
// 004cfe37  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004cfe3f  85c0                 test eax, eax
// 004cfe41  741a                 je 0x4cfe5d
// 004cfe43  6810d44700           push 0x47d410
// 004cfe48  68c0887100           push 0x7188c0
// 004cfe4d  55                   push ebp
// 004cfe4e  8d7804               lea edi, [eax + 4]
// 004cfe51  6a08                 push 8
// 004cfe53  57                   push edi
// 004cfe54  8928                 mov dword ptr [eax], ebp
// 004cfe56  e83d171d00           call 0x6a1598
// 004cfe5b  eb02                 jmp 0x4cfe5f
// 004cfe5d  33ff                 xor edi, edi
// 004cfe5f  33c0                 xor eax, eax
// 004cfe61  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004cfe69  5d                   pop ebp
// 004cfe6a  394604               cmp dword ptr [esi + 4], eax
// 004cfe6d  7617                 jbe 0x4cfe86
// 004cfe6f  90                   nop 
// 004cfe70  8b0e                 mov ecx, dword ptr [esi]
// 004cfe72  8b14c1               mov edx, dword ptr [ecx + eax*8]
// 004cfe75  8914c7               mov dword ptr [edi + eax*8], edx
// 004cfe78  8b4cc104             mov ecx, dword ptr [ecx + eax*8 + 4]
// 004cfe7c  894cc704             mov dword ptr [edi + eax*8 + 4], ecx
// 004cfe80  40                   inc eax
// 004cfe81  3b4604               cmp eax, dword ptr [esi + 4]
// 004cfe84  72ea                 jb 0x4cfe70
// 004cfe86  8b06                 mov eax, dword ptr [esi]
// 004cfe88  85c0                 test eax, eax
// 004cfe8a  741f                 je 0x4cfeab
// 004cfe8c  8b50fc               mov edx, dword ptr [eax - 4]
// 004cfe8f  53                   push ebx
// 004cfe90  8d58fc               lea ebx, [eax - 4]
// 004cfe93  6810d44700           push 0x47d410
// 004cfe98  52                   push edx
// 004cfe99  6a08                 push 8
// 004cfe9b  50                   push eax
// 004cfe9c  e8ba171d00           call 0x6a165b
// 004cfea1  53                   push ebx
// 004cfea2  e8d3071d00           call 0x6a067a
// 004cfea7  83c404               add esp, 4
// 004cfeaa  5b                   pop ebx
// 004cfeab  893e                 mov dword ptr [esi], edi
// 004cfead  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cfeb0  8b542424             mov edx, dword ptr [esp + 0x24]
// 004cfeb4  3bca                 cmp ecx, edx
// 004cfeb6  741e                 je 0x4cfed6
// 004cfeb8  eb06                 jmp 0x4cfec0
// 004cfeba  8d9b00000000         lea ebx, [ebx]
// 004cfec0  8b06                 mov eax, dword ptr [esi]
// 004cfec2  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 004cfec6  8d04c8               lea eax, [eax + ecx*8]
// 004cfec9  8938                 mov dword ptr [eax], edi
// 004cfecb  8b78fc               mov edi, dword ptr [eax - 4]
// 004cfece  49                   dec ecx
// 004cfecf  897804               mov dword ptr [eax + 4], edi
// 004cfed2  3bca                 cmp ecx, edx
// 004cfed4  75ea                 jne 0x4cfec0
// 004cfed6  8b06                 mov eax, dword ptr [esi]
// 004cfed8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004cfedc  890cd0               mov dword ptr [eax + edx*8], ecx
// 004cfedf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004cfee3  894cd004             mov dword ptr [eax + edx*8 + 4], ecx
// 004cfee7  ff4604               inc dword ptr [esi + 4]
// 004cfeea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cfeee  5f                   pop edi
// 004cfeef  5e                   pop esi
// 004cfef0  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfef7  83c410               add esp, 0x10
// 004cfefa  c20c00               ret 0xc
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@U?$RangeNode@I@DataStructures@@@DataStructures@@QAEXU?$RangeNode@I@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
