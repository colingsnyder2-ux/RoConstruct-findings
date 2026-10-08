// roc 2011-06 0060a880  unit: CXTPDockingPaneAutoHidePanel  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060a880
//
// 0060a880  56                   push esi
// 0060a881  57                   push edi
// 0060a882  8bf9                 mov edi, ecx
// 0060a884  8d7704               lea esi, [edi + 4]
// 0060a887  8bce                 mov ecx, esi
// 0060a889  c7079836a900         mov dword ptr [edi], 0xa93698
// 0060a88f  e8ec2f0200           call 0x62d880
// 0060a894  894604               mov dword ptr [esi + 4], eax
// 0060a897  c6401501             mov byte ptr [eax + 0x15], 1
// 0060a89b  8b4604               mov eax, dword ptr [esi + 4]
// 0060a89e  894004               mov dword ptr [eax + 4], eax
// 0060a8a1  8b4604               mov eax, dword ptr [esi + 4]
// 0060a8a4  8900                 mov dword ptr [eax], eax
// 0060a8a6  8b4604               mov eax, dword ptr [esi + 4]
// 0060a8a9  894008               mov dword ptr [eax + 8], eax
// 0060a8ac  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060a8b0  c7460800000000       mov dword ptr [esi + 8], 0
// 0060a8b7  894710               mov dword ptr [edi + 0x10], eax
// 0060a8ba  8bc7                 mov eax, edi
// 0060a8bc  5f                   pop edi
// 0060a8bd  5e                   pop esi
// 0060a8be  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ??0VerbContainer@RBX@@QAE@PAV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
