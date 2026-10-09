// roc 2010-06 0060a510  unit: std::strstream  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a510
//
// 0060a510  53                   push ebx
// 0060a511  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0060a515  55                   push ebp
// 0060a516  56                   push esi
// 0060a517  57                   push edi
// 0060a518  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0060a51c  57                   push edi
// 0060a51d  53                   push ebx
// 0060a51e  e86dffffff           call 0x60a490
// 0060a523  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060a527  8bf0                 mov esi, eax
// 0060a529  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060a52d  50                   push eax
// 0060a52e  51                   push ecx
// 0060a52f  e85cffffff           call 0x60a490
// 0060a534  83c410               add esp, 0x10
// 0060a537  8be8                 mov ebp, eax
// 0060a539  8bcb                 mov ecx, ebx
// 0060a53b  83fe01               cmp esi, 1
// 0060a53e  7402                 je 0x60a542
// 0060a540  8bcf                 mov ecx, edi
// 0060a542  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060a546  83fd01               cmp ebp, 1
// 0060a549  7404                 je 0x60a54f
// 0060a54b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0060a54f  50                   push eax
// 0060a550  51                   push ecx
// 0060a551  e83affffff           call 0x60a490
// 0060a556  83c408               add esp, 8
// 0060a559  83f8ff               cmp eax, -1
// 0060a55c  7436                 je 0x60a594
// 0060a55e  85c0                 test eax, eax
// 0060a560  740f                 je 0x60a571
// 0060a562  33d2                 xor edx, edx
// 0060a564  83f801               cmp eax, 1
// 0060a567  0f94c2               sete dl
// 0060a56a  5f                   pop edi
// 0060a56b  5e                   pop esi
// 0060a56c  5d                   pop ebp
// 0060a56d  5b                   pop ebx
// 0060a56e  8bc2                 mov eax, edx
// 0060a570  c3                   ret 
// 0060a571  83fe01               cmp esi, 1
// 0060a574  7402                 je 0x60a578
// 0060a576  8bfb                 mov edi, ebx
// 0060a578  8b442420             mov eax, dword ptr [esp + 0x20]
// 0060a57c  83fd01               cmp ebp, 1
// 0060a57f  7404                 je 0x60a585
// 0060a581  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060a585  50                   push eax
// 0060a586  57                   push edi
// 0060a587  e804ffffff           call 0x60a490
// 0060a58c  83c408               add esp, 8
// 0060a58f  5f                   pop edi
// 0060a590  5e                   pop esi
// 0060a591  5d                   pop ebp
// 0060a592  5b                   pop ebx
// 0060a593  c3                   ret 
// 0060a594  5f                   pop edi
// 0060a595  5e                   pop esi
// 0060a596  5d                   pop ebp
// 0060a597  83c8ff               or eax, 0xffffffff
// 0060a59a  5b                   pop ebx
// 0060a59b  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?compare@Guid@RBX@@SAHPBV12@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
