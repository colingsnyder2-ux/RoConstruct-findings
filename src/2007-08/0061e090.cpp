// roc 2007-08 0061e090  unit: RBX::ScoreHud  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061e090
//
// 0061e090  55                   push ebp
// 0061e091  8bec                 mov ebp, esp
// 0061e093  6aff                 push -1
// 0061e095  68f0c97500           push 0x75c9f0
// 0061e09a  64a100000000         mov eax, dword ptr fs:[0]
// 0061e0a0  50                   push eax
// 0061e0a1  64892500000000       mov dword ptr fs:[0], esp
// 0061e0a8  83ec08               sub esp, 8
// 0061e0ab  53                   push ebx
// 0061e0ac  56                   push esi
// 0061e0ad  57                   push edi
// 0061e0ae  8bf1                 mov esi, ecx
// 0061e0b0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0061e0b3  8975ec               mov dword ptr [ebp - 0x14], esi
// 0061e0b6  e8d5b7f5ff           call 0x579890
// 0061e0bb  894604               mov dword ptr [esi + 4], eax
// 0061e0be  c6402d01             mov byte ptr [eax + 0x2d], 1
// 0061e0c2  8b4604               mov eax, dword ptr [esi + 4]
// 0061e0c5  894004               mov dword ptr [eax + 4], eax
// 0061e0c8  8b4604               mov eax, dword ptr [esi + 4]
// 0061e0cb  8900                 mov dword ptr [eax], eax
// 0061e0cd  8b4604               mov eax, dword ptr [esi + 4]
// 0061e0d0  894008               mov dword ptr [eax + 8], eax
// 0061e0d3  8b4508               mov eax, dword ptr [ebp + 8]
// 0061e0d6  50                   push eax
// 0061e0d7  8bce                 mov ecx, esi
// 0061e0d9  c7460800000000       mov dword ptr [esi + 8], 0
// 0061e0e0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0061e0e7  e814ffffff           call 0x61e000
// 0061e0ec  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0061e0ef  5f                   pop edi
// 0061e0f0  8bc6                 mov eax, esi
// 0061e0f2  5e                   pop esi
// 0061e0f3  64890d00000000       mov dword ptr fs:[0], ecx
// 0061e0fa  5b                   pop ebx
// 0061e0fb  8be5                 mov esp, ebp
// 0061e0fd  5d                   pop ebp
// 0061e0fe  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
