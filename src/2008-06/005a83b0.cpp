// roc 2008-06 005a83b0  unit: RBX::Log  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a83b0
//
// 005a83b0  53                   push ebx
// 005a83b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005a83b5  55                   push ebp
// 005a83b6  56                   push esi
// 005a83b7  57                   push edi
// 005a83b8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005a83bc  57                   push edi
// 005a83bd  53                   push ebx
// 005a83be  e86dffffff           call 0x5a8330
// 005a83c3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a83c7  8bf0                 mov esi, eax
// 005a83c9  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a83cd  50                   push eax
// 005a83ce  51                   push ecx
// 005a83cf  e85cffffff           call 0x5a8330
// 005a83d4  83c410               add esp, 0x10
// 005a83d7  8be8                 mov ebp, eax
// 005a83d9  8bcb                 mov ecx, ebx
// 005a83db  83fe01               cmp esi, 1
// 005a83de  7402                 je 0x5a83e2
// 005a83e0  8bcf                 mov ecx, edi
// 005a83e2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a83e6  83fd01               cmp ebp, 1
// 005a83e9  7404                 je 0x5a83ef
// 005a83eb  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a83ef  50                   push eax
// 005a83f0  51                   push ecx
// 005a83f1  e83affffff           call 0x5a8330
// 005a83f6  83c408               add esp, 8
// 005a83f9  83f8ff               cmp eax, -1
// 005a83fc  7436                 je 0x5a8434
// 005a83fe  85c0                 test eax, eax
// 005a8400  740f                 je 0x5a8411
// 005a8402  33d2                 xor edx, edx
// 005a8404  83f801               cmp eax, 1
// 005a8407  0f94c2               sete dl
// 005a840a  5f                   pop edi
// 005a840b  5e                   pop esi
// 005a840c  5d                   pop ebp
// 005a840d  5b                   pop ebx
// 005a840e  8bc2                 mov eax, edx
// 005a8410  c3                   ret 
// 005a8411  83fe01               cmp esi, 1
// 005a8414  7402                 je 0x5a8418
// 005a8416  8bfb                 mov edi, ebx
// 005a8418  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a841c  83fd01               cmp ebp, 1
// 005a841f  7404                 je 0x5a8425
// 005a8421  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a8425  50                   push eax
// 005a8426  57                   push edi
// 005a8427  e804ffffff           call 0x5a8330
// 005a842c  83c408               add esp, 8
// 005a842f  5f                   pop edi
// 005a8430  5e                   pop esi
// 005a8431  5d                   pop ebp
// 005a8432  5b                   pop ebx
// 005a8433  c3                   ret 
// 005a8434  5f                   pop edi
// 005a8435  5e                   pop esi
// 005a8436  5d                   pop ebp
// 005a8437  83c8ff               or eax, 0xffffffff
// 005a843a  5b                   pop ebx
// 005a843b  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?compare@Guid@RBX@@SAHPBV12@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
