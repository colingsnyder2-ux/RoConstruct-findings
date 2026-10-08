// roc 2010-06 004a3e50  unit: RBX::Network::Player  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a3e50
//
// 004a3e50  56                   push esi
// 004a3e51  8bf1                 mov esi, ecx
// 004a3e53  8b06                 mov eax, dword ptr [esi]
// 004a3e55  83f8fc               cmp eax, -4
// 004a3e58  742a                 je 0x4a3e84
// 004a3e5a  57                   push edi
// 004a3e5b  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 004a3e61  85c0                 test eax, eax
// 004a3e63  7502                 jne 0x4a3e67
// 004a3e65  ffd7                 call edi
// 004a3e67  8b06                 mov eax, dword ptr [esi]
// 004a3e69  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004a3e6d  7205                 jb 0x4a3e74
// 004a3e6f  8b4804               mov ecx, dword ptr [eax + 4]
// 004a3e72  eb03                 jmp 0x4a3e77
// 004a3e74  8d4804               lea ecx, [eax + 4]
// 004a3e77  8b4014               mov eax, dword ptr [eax + 0x14]
// 004a3e7a  03c1                 add eax, ecx
// 004a3e7c  394604               cmp dword ptr [esi + 4], eax
// 004a3e7f  7202                 jb 0x4a3e83
// 004a3e81  ffd7                 call edi
// 004a3e83  5f                   pop edi
// 004a3e84  ff4604               inc dword ptr [esi + 4]
// 004a3e87  8bc6                 mov eax, esi
// 004a3e89  5e                   pop esi
// 004a3e8a  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
