// roc 2007-08 00564be0  unit: RBX::RedoState  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564be0
//
// 00564be0  56                   push esi
// 00564be1  57                   push edi
// 00564be2  8bf9                 mov edi, ecx
// 00564be4  8d7704               lea esi, [edi + 4]
// 00564be7  8bce                 mov ecx, esi
// 00564be9  c707ec957a00         mov dword ptr [edi], 0x7a95ec
// 00564bef  e8bce90100           call 0x5835b0
// 00564bf4  894604               mov dword ptr [esi + 4], eax
// 00564bf7  c6401501             mov byte ptr [eax + 0x15], 1
// 00564bfb  8b4604               mov eax, dword ptr [esi + 4]
// 00564bfe  894004               mov dword ptr [eax + 4], eax
// 00564c01  8b4604               mov eax, dword ptr [esi + 4]
// 00564c04  8900                 mov dword ptr [eax], eax
// 00564c06  8b4604               mov eax, dword ptr [esi + 4]
// 00564c09  894008               mov dword ptr [eax + 8], eax
// 00564c0c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00564c10  c7460800000000       mov dword ptr [esi + 8], 0
// 00564c17  894710               mov dword ptr [edi + 0x10], eax
// 00564c1a  8bc7                 mov eax, edi
// 00564c1c  5f                   pop edi
// 00564c1d  5e                   pop esi
// 00564c1e  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ??0VerbContainer@RBX@@QAE@PAV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
