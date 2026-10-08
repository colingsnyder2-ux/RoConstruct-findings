// roc 2007-03 005690d0  unit: seg_00560000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005690d0
//
// 005690d0  56                   push esi
// 005690d1  57                   push edi
// 005690d2  8bf9                 mov edi, ecx
// 005690d4  8d7704               lea esi, [edi + 4]
// 005690d7  8bce                 mov ecx, esi
// 005690d9  c70728b27a00         mov dword ptr [edi], 0x7ab228
// 005690df  e89cf00400           call 0x5b8180
// 005690e4  894604               mov dword ptr [esi + 4], eax
// 005690e7  c6401501             mov byte ptr [eax + 0x15], 1
// 005690eb  8b4604               mov eax, dword ptr [esi + 4]
// 005690ee  894004               mov dword ptr [eax + 4], eax
// 005690f1  8b4604               mov eax, dword ptr [esi + 4]
// 005690f4  8900                 mov dword ptr [eax], eax
// 005690f6  8b4604               mov eax, dword ptr [esi + 4]
// 005690f9  894008               mov dword ptr [eax + 8], eax
// 005690fc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00569100  c7460800000000       mov dword ptr [esi + 8], 0
// 00569107  894710               mov dword ptr [edi + 0x10], eax
// 0056910a  8bc7                 mov eax, edi
// 0056910c  5f                   pop edi
// 0056910d  5e                   pop esi
// 0056910e  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ??0VerbContainer@RBX@@QAE@PAV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
