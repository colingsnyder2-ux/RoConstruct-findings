// roc 2007-03 00498510  unit: seg_00490000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00498510
//
// 00498510  56                   push esi
// 00498511  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00498515  8b4614               mov eax, dword ptr [esi + 0x14]
// 00498518  57                   push edi
// 00498519  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049851d  6a01                 push 1
// 0049851f  6a20                 push 0x20
// 00498521  8d4c2418             lea ecx, [esp + 0x18]
// 00498525  51                   push ecx
// 00498526  8bcf                 mov ecx, edi
// 00498528  8944241c             mov dword ptr [esp + 0x1c], eax
// 0049852c  e87ff8ffff           call 0x497db0
// 00498531  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00498535  8b4614               mov eax, dword ptr [esi + 0x14]
// 00498538  7205                 jb 0x49853f
// 0049853a  8b7604               mov esi, dword ptr [esi + 4]
// 0049853d  eb03                 jmp 0x498542
// 0049853f  83c604               add esi, 4
// 00498542  6a00                 push 0
// 00498544  57                   push edi
// 00498545  83c001               add eax, 1
// 00498548  50                   push eax
// 00498549  56                   push esi
// 0049854a  e841180100           call 0x4a9d90
// 0049854f  8bc8                 mov ecx, eax
// 00498551  e89a1a0100           call 0x4a9ff0
// 00498556  8bc7                 mov eax, edi
// 00498558  5f                   pop edi
// 00498559  5e                   pop esi
// 0049855a  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
