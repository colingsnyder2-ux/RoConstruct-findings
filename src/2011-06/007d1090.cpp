// from server: 100% by auto
// roc 2011-06 007d1090  unit: RBX::ScoreHud  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d1090
//
// 007d1090  55                   push ebp
// 007d1091  8bec                 mov ebp, esp
// 007d1093  6aff                 push -1
// 007d1095  680001a000           push 0xa00100
// 007d109a  64a100000000         mov eax, dword ptr fs:[0]
// 007d10a0  50                   push eax
// 007d10a1  64892500000000       mov dword ptr fs:[0], esp
// 007d10a8  83ec08               sub esp, 8
// 007d10ab  53                   push ebx
// 007d10ac  56                   push esi
// 007d10ad  57                   push edi
// 007d10ae  8bf1                 mov esi, ecx
// 007d10b0  8965f0               mov dword ptr [ebp - 0x10], esp
// 007d10b3  8975ec               mov dword ptr [ebp - 0x14], esi
// 007d10b6  e865c5fbff           call 0x78d620
// 007d10bb  894604               mov dword ptr [esi + 4], eax
// 007d10be  c6402d01             mov byte ptr [eax + 0x2d], 1
// 007d10c2  8b4604               mov eax, dword ptr [esi + 4]
// 007d10c5  894004               mov dword ptr [eax + 4], eax
// 007d10c8  8b4604               mov eax, dword ptr [esi + 4]
// 007d10cb  8900                 mov dword ptr [eax], eax
// 007d10cd  8b4604               mov eax, dword ptr [esi + 4]
// 007d10d0  894008               mov dword ptr [eax + 8], eax
// 007d10d3  8b4508               mov eax, dword ptr [ebp + 8]
// 007d10d6  50                   push eax
// 007d10d7  8bce                 mov ecx, esi
// 007d10d9  c7460800000000       mov dword ptr [esi + 8], 0
// 007d10e0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007d10e7  e814ffffff           call 0x7d1000
// 007d10ec  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007d10ef  5f                   pop edi
// 007d10f0  8bc6                 mov eax, esi
// 007d10f2  5e                   pop esi
// 007d10f3  64890d00000000       mov dword ptr fs:[0], ecx
// 007d10fa  5b                   pop ebx
// 007d10fb  8be5                 mov esp, ebp
// 007d10fd  5d                   pop ebp
// 007d10fe  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
