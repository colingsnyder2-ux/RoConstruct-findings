// roc 2009-12 0068b1e0  unit: ArchiveBinder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068b1e0
//
// 0068b1e0  53                   push ebx
// 0068b1e1  55                   push ebp
// 0068b1e2  56                   push esi
// 0068b1e3  8bf1                 mov esi, ecx
// 0068b1e5  8b5e50               mov ebx, dword ptr [esi + 0x50]
// 0068b1e8  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0068b1eb  8bcb                 mov ecx, ebx
// 0068b1ed  8b29                 mov ebp, dword ptr [ecx]
// 0068b1ef  57                   push edi
// 0068b1f0  bf10b06800           mov edi, 0x68b010
// 0068b1f5  8bc8                 mov ecx, eax
// 0068b1f7  85c0                 test eax, eax
// 0068b1f9  7404                 je 0x68b1ff
// 0068b1fb  8b00                 mov eax, dword ptr [eax]
// 0068b1fd  eb02                 jmp 0x68b201
// 0068b1ff  33c0                 xor eax, eax
// 0068b201  8b10                 mov edx, dword ptr [eax]
// 0068b203  85c9                 test ecx, ecx
// 0068b205  7404                 je 0x68b20b
// 0068b207  8b01                 mov eax, dword ptr [ecx]
// 0068b209  eb02                 jmp 0x68b20d
// 0068b20b  33c0                 xor eax, eax
// 0068b20d  8b00                 mov eax, dword ptr [eax]
// 0068b20f  56                   push esi
// 0068b210  57                   push edi
// 0068b211  53                   push ebx
// 0068b212  52                   push edx
// 0068b213  55                   push ebp
// 0068b214  50                   push eax
// 0068b215  e836fcffff           call 0x68ae50
// 0068b21a  83c418               add esp, 0x18
// 0068b21d  8bce                 mov ecx, esi
// 0068b21f  8bf8                 mov edi, eax
// 0068b221  e88a7ddbff           call 0x442fb0
// 0068b226  84c0                 test al, al
// 0068b228  740f                 je 0x68b239
// 0068b22a  3b7e54               cmp edi, dword ptr [esi + 0x54]
// 0068b22d  750a                 jne 0x68b239
// 0068b22f  5f                   pop edi
// 0068b230  5e                   pop esi
// 0068b231  5d                   pop ebp
// 0068b232  b801000000           mov eax, 1
// 0068b237  5b                   pop ebx
// 0068b238  c3                   ret 
// 0068b239  5f                   pop edi
// 0068b23a  5e                   pop esi
// 0068b23b  5d                   pop ebp
// 0068b23c  33c0                 xor eax, eax
// 0068b23e  5b                   pop ebx
// 0068b23f  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveRefs@ArchiveBinder@@UAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
