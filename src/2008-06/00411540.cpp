// roc 2008-06 00411540  unit: CBrush  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411540
//
// 00411540  6aff                 push -1
// 00411542  68e8d67b00           push 0x7bd6e8
// 00411547  64a100000000         mov eax, dword ptr fs:[0]
// 0041154d  50                   push eax
// 0041154e  64892500000000       mov dword ptr fs:[0], esp
// 00411555  51                   push ecx
// 00411556  56                   push esi
// 00411557  57                   push edi
// 00411558  8bf9                 mov edi, ecx
// 0041155a  897c2408             mov dword ptr [esp + 8], edi
// 0041155e  8bb738010000         mov esi, dword ptr [edi + 0x138]
// 00411564  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041156c  85f6                 test esi, esi
// 0041156e  742a                 je 0x41159a
// 00411570  8d4604               lea eax, [esi + 4]
// 00411573  83c9ff               or ecx, 0xffffffff
// 00411576  f00fc108             lock xadd dword ptr [eax], ecx
// 0041157a  751e                 jne 0x41159a
// 0041157c  8b16                 mov edx, dword ptr [esi]
// 0041157e  8b4204               mov eax, dword ptr [edx + 4]
// 00411581  8bce                 mov ecx, esi
// 00411583  ffd0                 call eax
// 00411585  8d4e08               lea ecx, [esi + 8]
// 00411588  83caff               or edx, 0xffffffff
// 0041158b  f00fc111             lock xadd dword ptr [ecx], edx
// 0041158f  7509                 jne 0x41159a
// 00411591  8b06                 mov eax, dword ptr [esi]
// 00411593  8b5008               mov edx, dword ptr [eax + 8]
// 00411596  8bce                 mov ecx, esi
// 00411598  ffd2                 call edx
// 0041159a  8bcf                 mov ecx, edi
// 0041159c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004115a4  e8978f1400           call 0x55a540
// 004115a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004115ad  5f                   pop edi
// 004115ae  5e                   pop esi
// 004115af  64890d00000000       mov dword ptr fs:[0], ecx
// 004115b6  83c410               add esp, 0x10
// 004115b9  c3                   ret 
// library openrbx-client/App\gui\GUI.cpp (function ??1GuiItem@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
