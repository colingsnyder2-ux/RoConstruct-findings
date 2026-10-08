// roc 2007-03 004b8870  unit: seg_004b0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8870
//
// 004b8870  8b442408             mov eax, dword ptr [esp + 8]
// 004b8874  53                   push ebx
// 004b8875  56                   push esi
// 004b8876  57                   push edi
// 004b8877  8bd9                 mov ebx, ecx
// 004b8879  8b33                 mov esi, dword ptr [ebx]
// 004b887b  33ff                 xor edi, edi
// 004b887d  85c0                 test eax, eax
// 004b887f  7648                 jbe 0x4b88c9
// 004b8881  55                   push ebp
// 004b8882  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004b8886  89442418             mov dword ptr [esp + 0x18], eax
// 004b888a  8d9b00000000         lea ebx, [ebx]
// 004b8890  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b8894  e867f0fdff           call 0x497900
// 004b8899  84c0                 test al, al
// 004b889b  7505                 jne 0x4b88a2
// 004b889d  8b7608               mov esi, dword ptr [esi + 8]
// 004b88a0  eb03                 jmp 0x4b88a5
// 004b88a2  8b760c               mov esi, dword ptr [esi + 0xc]
// 004b88a5  837e0800             cmp dword ptr [esi + 8], 0
// 004b88a9  7516                 jne 0x4b88c1
// 004b88ab  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004b88af  7510                 jne 0x4b88c1
// 004b88b1  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 004b88b5  7305                 jae 0x4b88bc
// 004b88b7  8a06                 mov al, byte ptr [esi]
// 004b88b9  88042f               mov byte ptr [edi + ebp], al
// 004b88bc  8b33                 mov esi, dword ptr [ebx]
// 004b88be  83c701               add edi, 1
// 004b88c1  836c241801           sub dword ptr [esp + 0x18], 1
// 004b88c6  75c8                 jne 0x4b8890
// 004b88c8  5d                   pop ebp
// 004b88c9  8bc7                 mov eax, edi
// 004b88cb  5f                   pop edi
// 004b88cc  5e                   pop esi
// 004b88cd  5b                   pop ebx
// 004b88ce  c21000               ret 0x10
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?DecodeArray@HuffmanEncodingTree@@QAEIPAVBitStream@RakNet@@IIPAE@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
