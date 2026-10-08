// roc 2007-03 005660d0  unit: seg_00560000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005660d0
//
// 005660d0  56                   push esi
// 005660d1  57                   push edi
// 005660d2  8bf9                 mov edi, ecx
// 005660d4  8d7704               lea esi, [edi + 4]
// 005660d7  8bce                 mov ecx, esi
// 005660d9  c7070cb07a00         mov dword ptr [edi], 0x7ab00c
// 005660df  e89c200500           call 0x5b8180
// 005660e4  894604               mov dword ptr [esi + 4], eax
// 005660e7  c6401501             mov byte ptr [eax + 0x15], 1
// 005660eb  8b4604               mov eax, dword ptr [esi + 4]
// 005660ee  894004               mov dword ptr [eax + 4], eax
// 005660f1  8b4604               mov eax, dword ptr [esi + 4]
// 005660f4  8900                 mov dword ptr [eax], eax
// 005660f6  8b4604               mov eax, dword ptr [esi + 4]
// 005660f9  894008               mov dword ptr [eax + 8], eax
// 005660fc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00566100  c7460800000000       mov dword ptr [esi + 8], 0
// 00566107  894710               mov dword ptr [edi + 0x10], eax
// 0056610a  8bc7                 mov eax, edi
// 0056610c  5f                   pop edi
// 0056610d  5e                   pop esi
// 0056610e  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ??0VerbContainer@RBX@@QAE@PAV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
