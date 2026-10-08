// roc 2012-06 006fb7c0  unit: RBX::CameraZoomExtentsCommand  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006fb7c0
//
// 006fb7c0  56                   push esi
// 006fb7c1  57                   push edi
// 006fb7c2  8bf9                 mov edi, ecx
// 006fb7c4  8d7704               lea esi, [edi + 4]
// 006fb7c7  8bce                 mov ecx, esi
// 006fb7c9  c70794d0b900         mov dword ptr [edi], 0xb9d094
// 006fb7cf  e81c1a0d00           call 0x7cd1f0
// 006fb7d4  894604               mov dword ptr [esi + 4], eax
// 006fb7d7  c6401501             mov byte ptr [eax + 0x15], 1
// 006fb7db  8b4604               mov eax, dword ptr [esi + 4]
// 006fb7de  894004               mov dword ptr [eax + 4], eax
// 006fb7e1  8b4604               mov eax, dword ptr [esi + 4]
// 006fb7e4  8900                 mov dword ptr [eax], eax
// 006fb7e6  8b4604               mov eax, dword ptr [esi + 4]
// 006fb7e9  894008               mov dword ptr [eax + 8], eax
// 006fb7ec  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fb7f0  c7460800000000       mov dword ptr [esi + 8], 0
// 006fb7f7  894710               mov dword ptr [edi + 0x10], eax
// 006fb7fa  8bc7                 mov eax, edi
// 006fb7fc  5f                   pop edi
// 006fb7fd  5e                   pop esi
// 006fb7fe  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ??0VerbContainer@RBX@@QAE@PAV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
