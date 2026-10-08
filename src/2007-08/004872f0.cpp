// roc 2007-08 004872f0  unit: G3D::GWindow  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004872f0
//
// 004872f0  56                   push esi
// 004872f1  8bf1                 mov esi, ecx
// 004872f3  8b06                 mov eax, dword ptr [esi]
// 004872f5  83f8fe               cmp eax, -2
// 004872f8  742a                 je 0x487324
// 004872fa  85c0                 test eax, eax
// 004872fc  57                   push edi
// 004872fd  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 00487303  7502                 jne 0x487307
// 00487305  ffd7                 call edi
// 00487307  8b06                 mov eax, dword ptr [esi]
// 00487309  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0048730d  7205                 jb 0x487314
// 0048730f  8b4804               mov ecx, dword ptr [eax + 4]
// 00487312  eb03                 jmp 0x487317
// 00487314  8d4804               lea ecx, [eax + 4]
// 00487317  8b4014               mov eax, dword ptr [eax + 0x14]
// 0048731a  03c1                 add eax, ecx
// 0048731c  394604               cmp dword ptr [esi + 4], eax
// 0048731f  7202                 jb 0x487323
// 00487321  ffd7                 call edi
// 00487323  5f                   pop edi
// 00487324  83460401             add dword ptr [esi + 4], 1
// 00487328  8bc6                 mov eax, esi
// 0048732a  5e                   pop esi
// 0048732b  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
