// roc 2009-06 00622f10  unit: ArchiveBinder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00622f10
//
// 00622f10  53                   push ebx
// 00622f11  55                   push ebp
// 00622f12  56                   push esi
// 00622f13  8bf1                 mov esi, ecx
// 00622f15  8b5e50               mov ebx, dword ptr [esi + 0x50]
// 00622f18  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00622f1b  8bcb                 mov ecx, ebx
// 00622f1d  8b29                 mov ebp, dword ptr [ecx]
// 00622f1f  57                   push edi
// 00622f20  bf00296200           mov edi, 0x622900
// 00622f25  8bc8                 mov ecx, eax
// 00622f27  85c0                 test eax, eax
// 00622f29  7404                 je 0x622f2f
// 00622f2b  8b00                 mov eax, dword ptr [eax]
// 00622f2d  eb02                 jmp 0x622f31
// 00622f2f  33c0                 xor eax, eax
// 00622f31  8b10                 mov edx, dword ptr [eax]
// 00622f33  85c9                 test ecx, ecx
// 00622f35  7404                 je 0x622f3b
// 00622f37  8b01                 mov eax, dword ptr [ecx]
// 00622f39  eb02                 jmp 0x622f3d
// 00622f3b  33c0                 xor eax, eax
// 00622f3d  8b00                 mov eax, dword ptr [eax]
// 00622f3f  56                   push esi
// 00622f40  57                   push edi
// 00622f41  53                   push ebx
// 00622f42  52                   push edx
// 00622f43  55                   push ebp
// 00622f44  50                   push eax
// 00622f45  e806f4ffff           call 0x622350
// 00622f4a  83c418               add esp, 0x18
// 00622f4d  8bce                 mov ecx, esi
// 00622f4f  8bf8                 mov edi, eax
// 00622f51  e80abae1ff           call 0x43e960
// 00622f56  84c0                 test al, al
// 00622f58  740f                 je 0x622f69
// 00622f5a  3b7e54               cmp edi, dword ptr [esi + 0x54]
// 00622f5d  750a                 jne 0x622f69
// 00622f5f  5f                   pop edi
// 00622f60  5e                   pop esi
// 00622f61  5d                   pop ebp
// 00622f62  b801000000           mov eax, 1
// 00622f67  5b                   pop ebx
// 00622f68  c3                   ret 
// 00622f69  5f                   pop edi
// 00622f6a  5e                   pop esi
// 00622f6b  5d                   pop ebp
// 00622f6c  33c0                 xor eax, eax
// 00622f6e  5b                   pop ebx
// 00622f6f  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveRefs@ArchiveBinder@@UAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
