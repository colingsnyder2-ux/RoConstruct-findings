// roc 2009-12 004f5d60  unit: RBX::GfxAttachement  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f5d60
//
// 004f5d60  56                   push esi
// 004f5d61  8bf1                 mov esi, ecx
// 004f5d63  8b06                 mov eax, dword ptr [esi]
// 004f5d65  83f8fc               cmp eax, -4
// 004f5d68  742a                 je 0x4f5d94
// 004f5d6a  57                   push edi
// 004f5d6b  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 004f5d71  85c0                 test eax, eax
// 004f5d73  7502                 jne 0x4f5d77
// 004f5d75  ffd7                 call edi
// 004f5d77  8b06                 mov eax, dword ptr [esi]
// 004f5d79  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004f5d7d  7205                 jb 0x4f5d84
// 004f5d7f  8b4804               mov ecx, dword ptr [eax + 4]
// 004f5d82  eb03                 jmp 0x4f5d87
// 004f5d84  8d4804               lea ecx, [eax + 4]
// 004f5d87  8b4014               mov eax, dword ptr [eax + 0x14]
// 004f5d8a  03c1                 add eax, ecx
// 004f5d8c  394604               cmp dword ptr [esi + 4], eax
// 004f5d8f  7202                 jb 0x4f5d93
// 004f5d91  ffd7                 call edi
// 004f5d93  5f                   pop edi
// 004f5d94  ff4604               inc dword ptr [esi + 4]
// 004f5d97  8bc6                 mov eax, esi
// 004f5d99  5e                   pop esi
// 004f5d9a  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
