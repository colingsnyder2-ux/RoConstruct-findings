// roc 2009-06 00632d70  unit: std::strstream  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00632d70
//
// 00632d70  53                   push ebx
// 00632d71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00632d75  55                   push ebp
// 00632d76  56                   push esi
// 00632d77  57                   push edi
// 00632d78  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00632d7c  57                   push edi
// 00632d7d  53                   push ebx
// 00632d7e  e86dffffff           call 0x632cf0
// 00632d83  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00632d87  8bf0                 mov esi, eax
// 00632d89  8b442428             mov eax, dword ptr [esp + 0x28]
// 00632d8d  50                   push eax
// 00632d8e  51                   push ecx
// 00632d8f  e85cffffff           call 0x632cf0
// 00632d94  83c410               add esp, 0x10
// 00632d97  8be8                 mov ebp, eax
// 00632d99  8bcb                 mov ecx, ebx
// 00632d9b  83fe01               cmp esi, 1
// 00632d9e  7402                 je 0x632da2
// 00632da0  8bcf                 mov ecx, edi
// 00632da2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00632da6  83fd01               cmp ebp, 1
// 00632da9  7404                 je 0x632daf
// 00632dab  8b442420             mov eax, dword ptr [esp + 0x20]
// 00632daf  50                   push eax
// 00632db0  51                   push ecx
// 00632db1  e83affffff           call 0x632cf0
// 00632db6  83c408               add esp, 8
// 00632db9  83f8ff               cmp eax, -1
// 00632dbc  7436                 je 0x632df4
// 00632dbe  85c0                 test eax, eax
// 00632dc0  740f                 je 0x632dd1
// 00632dc2  33d2                 xor edx, edx
// 00632dc4  83f801               cmp eax, 1
// 00632dc7  0f94c2               sete dl
// 00632dca  5f                   pop edi
// 00632dcb  5e                   pop esi
// 00632dcc  5d                   pop ebp
// 00632dcd  5b                   pop ebx
// 00632dce  8bc2                 mov eax, edx
// 00632dd0  c3                   ret 
// 00632dd1  83fe01               cmp esi, 1
// 00632dd4  7402                 je 0x632dd8
// 00632dd6  8bfb                 mov edi, ebx
// 00632dd8  8b442420             mov eax, dword ptr [esp + 0x20]
// 00632ddc  83fd01               cmp ebp, 1
// 00632ddf  7404                 je 0x632de5
// 00632de1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00632de5  50                   push eax
// 00632de6  57                   push edi
// 00632de7  e804ffffff           call 0x632cf0
// 00632dec  83c408               add esp, 8
// 00632def  5f                   pop edi
// 00632df0  5e                   pop esi
// 00632df1  5d                   pop ebp
// 00632df2  5b                   pop ebx
// 00632df3  c3                   ret 
// 00632df4  5f                   pop edi
// 00632df5  5e                   pop esi
// 00632df6  5d                   pop ebp
// 00632df7  83c8ff               or eax, 0xffffffff
// 00632dfa  5b                   pop ebx
// 00632dfb  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?compare@Guid@RBX@@SAHPBV12@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
