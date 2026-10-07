// roc 2010-06 00742810  unit: RBX::VHttp::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00742810
//
// 00742810  51                   push ecx
// 00742811  56                   push esi
// 00742812  8bf1                 mov esi, ecx
// 00742814  57                   push edi
// 00742815  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00742819  8d4604               lea eax, [esi + 4]
// 0074281c  50                   push eax
// 0074281d  8d4f04               lea ecx, [edi + 4]
// 00742820  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00742828  e8d3deccff           call 0x410700
// 0074282d  8b0e                 mov ecx, dword ptr [esi]
// 0074282f  890f                 mov dword ptr [edi], ecx
// 00742831  8bc7                 mov eax, edi
// 00742833  5f                   pop edi
// 00742834  5e                   pop esi
// 00742835  59                   pop ecx
// 00742836  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?shared_from_this@?$enable_shared_from_this@VInstance@RBX@@@boost@@QAE?AV?$shared_ptr@VInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
