// roc 2008-06 0048a330  unit: G3D::GWindow  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a330
//
// 0048a330  56                   push esi
// 0048a331  8bf1                 mov esi, ecx
// 0048a333  8b06                 mov eax, dword ptr [esi]
// 0048a335  83f8fc               cmp eax, -4
// 0048a338  742a                 je 0x48a364
// 0048a33a  57                   push edi
// 0048a33b  8b3d90288000         mov edi, dword ptr [0x802890]
// 0048a341  85c0                 test eax, eax
// 0048a343  7502                 jne 0x48a347
// 0048a345  ffd7                 call edi
// 0048a347  8b06                 mov eax, dword ptr [esi]
// 0048a349  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0048a34d  7205                 jb 0x48a354
// 0048a34f  8b4804               mov ecx, dword ptr [eax + 4]
// 0048a352  eb03                 jmp 0x48a357
// 0048a354  8d4804               lea ecx, [eax + 4]
// 0048a357  8b4014               mov eax, dword ptr [eax + 0x14]
// 0048a35a  03c1                 add eax, ecx
// 0048a35c  394604               cmp dword ptr [esi + 4], eax
// 0048a35f  7202                 jb 0x48a363
// 0048a361  ffd7                 call edi
// 0048a363  5f                   pop edi
// 0048a364  ff4604               inc dword ptr [esi + 4]
// 0048a367  8bc6                 mov eax, esi
// 0048a369  5e                   pop esi
// 0048a36a  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
