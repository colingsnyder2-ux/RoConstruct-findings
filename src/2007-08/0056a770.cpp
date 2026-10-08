// roc 2007-08 0056a770  unit: ArchiveBinder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056a770
//
// 0056a770  56                   push esi
// 0056a771  57                   push edi
// 0056a772  8bf1                 mov esi, ecx
// 0056a774  8b5624               mov edx, dword ptr [esi + 0x24]
// 0056a777  56                   push esi
// 0056a778  8d4620               lea eax, [esi + 0x20]
// 0056a77b  b9209b5600           mov ecx, 0x569b20
// 0056a780  51                   push ecx
// 0056a781  52                   push edx
// 0056a782  8bfa                 mov edi, edx
// 0056a784  8b3f                 mov edi, dword ptr [edi]
// 0056a786  50                   push eax
// 0056a787  57                   push edi
// 0056a788  50                   push eax
// 0056a789  e812f0ffff           call 0x5697a0
// 0056a78e  83c418               add esp, 0x18
// 0056a791  8bce                 mov ecx, esi
// 0056a793  8bf8                 mov edi, eax
// 0056a795  e8268dedff           call 0x4434c0
// 0056a79a  84c0                 test al, al
// 0056a79c  740d                 je 0x56a7ab
// 0056a79e  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0056a7a1  7508                 jne 0x56a7ab
// 0056a7a3  5f                   pop edi
// 0056a7a4  b801000000           mov eax, 1
// 0056a7a9  5e                   pop esi
// 0056a7aa  c3                   ret 
// 0056a7ab  5f                   pop edi
// 0056a7ac  33c0                 xor eax, eax
// 0056a7ae  5e                   pop esi
// 0056a7af  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveRefs@ArchiveBinder@@UAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
