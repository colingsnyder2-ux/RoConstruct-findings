// roc 2009-12 008e0fe0  unit: CXTPOffice2007Image  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e0fe0
//
// 008e0fe0  6aff                 push -1
// 008e0fe2  683f5b9600           push 0x965b3f
// 008e0fe7  64a100000000         mov eax, dword ptr fs:[0]
// 008e0fed  50                   push eax
// 008e0fee  51                   push ecx
// 008e0fef  53                   push ebx
// 008e0ff0  56                   push esi
// 008e0ff1  57                   push edi
// 008e0ff2  a10052b600           mov eax, dword ptr [0xb65200]
// 008e0ff7  33c4                 xor eax, esp
// 008e0ff9  50                   push eax
// 008e0ffa  8d442414             lea eax, [esp + 0x14]
// 008e0ffe  64a300000000         mov dword ptr fs:[0], eax
// 008e1004  8bf1                 mov esi, ecx
// 008e1006  89742410             mov dword ptr [esp + 0x10], esi
// 008e100a  ff1574de9800         call dword ptr [0x98de74]
// 008e1010  33db                 xor ebx, ebx
// 008e1012  8d4e14               lea ecx, [esi + 0x14]
// 008e1015  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008e1019  e842a9f5ff           call 0x83b960
// 008e101e  8d7e2c               lea edi, [esi + 0x2c]
// 008e1021  6a0a                 push 0xa
// 008e1023  8bcf                 mov ecx, edi
// 008e1025  c644242001           mov byte ptr [esp + 0x20], 1
// 008e102a  e8b55d0400           call 0x926de4
// 008e102f  53                   push ebx
// 008e1030  68c7000000           push 0xc7
// 008e1035  8bcf                 mov ecx, edi
// 008e1037  c644242402           mov byte ptr [esp + 0x24], 2
// 008e103c  e89d5d0400           call 0x926dde
// 008e1041  895e10               mov dword ptr [esi + 0x10], ebx
// 008e1044  895e04               mov dword ptr [esi + 4], ebx
// 008e1047  895e08               mov dword ptr [esi + 8], ebx
// 008e104a  895e0c               mov dword ptr [esi + 0xc], ebx
// 008e104d  e8cc2af1ff           call 0x7f3b1e
// 008e1052  8b4008               mov eax, dword ptr [eax + 8]
// 008e1055  53                   push ebx
// 008e1056  53                   push ebx
// 008e1057  50                   push eax
// 008e1058  8bce                 mov ecx, esi
// 008e105a  e8d1f9ffff           call 0x8e0a30
// 008e105f  8bc6                 mov eax, esi
// 008e1061  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e1065  64890d00000000       mov dword ptr fs:[0], ecx
// 008e106c  59                   pop ecx
// 008e106d  5f                   pop edi
// 008e106e  5e                   pop esi
// 008e106f  5b                   pop ebx
// 008e1070  83c410               add esp, 0x10
// 008e1073  c3                   ret 
// copied from an identical function in another client (function ??0CXTPOffice2007Images@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp