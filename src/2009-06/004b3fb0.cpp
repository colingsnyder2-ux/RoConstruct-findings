// roc 2009-06 004b3fb0  unit: G3D::GWindow  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3fb0
//
// 004b3fb0  56                   push esi
// 004b3fb1  8bf1                 mov esi, ecx
// 004b3fb3  8b06                 mov eax, dword ptr [esi]
// 004b3fb5  83f8fc               cmp eax, -4
// 004b3fb8  742a                 je 0x4b3fe4
// 004b3fba  57                   push edi
// 004b3fbb  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 004b3fc1  85c0                 test eax, eax
// 004b3fc3  7502                 jne 0x4b3fc7
// 004b3fc5  ffd7                 call edi
// 004b3fc7  8b06                 mov eax, dword ptr [esi]
// 004b3fc9  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004b3fcd  7205                 jb 0x4b3fd4
// 004b3fcf  8b4804               mov ecx, dword ptr [eax + 4]
// 004b3fd2  eb03                 jmp 0x4b3fd7
// 004b3fd4  8d4804               lea ecx, [eax + 4]
// 004b3fd7  8b4014               mov eax, dword ptr [eax + 0x14]
// 004b3fda  03c1                 add eax, ecx
// 004b3fdc  394604               cmp dword ptr [esi + 4], eax
// 004b3fdf  7202                 jb 0x4b3fe3
// 004b3fe1  ffd7                 call edi
// 004b3fe3  5f                   pop edi
// 004b3fe4  ff4604               inc dword ptr [esi + 4]
// 004b3fe7  8bc6                 mov eax, esi
// 004b3fe9  5e                   pop esi
// 004b3fea  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??E?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
