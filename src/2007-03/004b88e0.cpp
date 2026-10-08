// roc 2007-03 004b88e0  unit: seg_004b0000  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b88e0
//
// 004b88e0  64a100000000         mov eax, dword ptr fs:[0]
// 004b88e6  6aff                 push -1
// 004b88e8  68ebc97400           push 0x74c9eb
// 004b88ed  50                   push eax
// 004b88ee  64892500000000       mov dword ptr fs:[0], esp
// 004b88f5  81ec14010000         sub esp, 0x114
// 004b88fb  53                   push ebx
// 004b88fc  57                   push edi
// 004b88fd  8bbc2430010000       mov edi, dword ptr [esp + 0x130]
// 004b8904  85ff                 test edi, edi
// 004b8906  8bd9                 mov ebx, ecx
// 004b8908  0f867e000000         jbe 0x4b898c
// 004b890e  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 004b8915  56                   push esi
// 004b8916  6a00                 push 0
// 004b8918  8d4707               lea eax, [edi + 7]
// 004b891b  c1e803               shr eax, 3
// 004b891e  50                   push eax
// 004b891f  51                   push ecx
// 004b8920  8d4c2418             lea ecx, [esp + 0x18]
// 004b8924  e817effdff           call 0x497840
// 004b8929  85ff                 test edi, edi
// 004b892b  8b33                 mov esi, dword ptr [ebx]
// 004b892d  c784242801000000000000 mov dword ptr [esp + 0x128], 0
// 004b8938  763d                 jbe 0x4b8977
// 004b893a  55                   push ebp
// 004b893b  8bac243c010000       mov ebp, dword ptr [esp + 0x13c]
// 004b8942  8d4c2410             lea ecx, [esp + 0x10]
// 004b8946  e8b5effdff           call 0x497900
// 004b894b  84c0                 test al, al
// 004b894d  7505                 jne 0x4b8954
// 004b894f  8b7608               mov esi, dword ptr [esi + 8]
// 004b8952  eb03                 jmp 0x4b8957
// 004b8954  8b760c               mov esi, dword ptr [esi + 0xc]
// 004b8957  837e0800             cmp dword ptr [esi + 8], 0
// 004b895b  7514                 jne 0x4b8971
// 004b895d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004b8961  750e                 jne 0x4b8971
// 004b8963  6a01                 push 1
// 004b8965  6a08                 push 8
// 004b8967  56                   push esi
// 004b8968  8bcd                 mov ecx, ebp
// 004b896a  e841f4fdff           call 0x497db0
// 004b896f  8b33                 mov esi, dword ptr [ebx]
// 004b8971  83ef01               sub edi, 1
// 004b8974  75cc                 jne 0x4b8942
// 004b8976  5d                   pop ebp
// 004b8977  8d4c240c             lea ecx, [esp + 0xc]
// 004b897b  c7842428010000ffffffff mov dword ptr [esp + 0x128], 0xffffffff
// 004b8986  e835effdff           call 0x4978c0
// 004b898b  5e                   pop esi
// 004b898c  8b8c241c010000       mov ecx, dword ptr [esp + 0x11c]
// 004b8993  5f                   pop edi
// 004b8994  5b                   pop ebx
// 004b8995  64890d00000000       mov dword ptr fs:[0], ecx
// 004b899c  81c420010000         add esp, 0x120
// 004b89a2  c20c00               ret 0xc
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?DecodeArray@HuffmanEncodingTree@@QAEXPAEIPAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
