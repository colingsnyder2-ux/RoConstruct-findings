// roc 2010-06 004e7440  unit: RBX::VSystemAddress::?$holder  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e7440
//
// 004e7440  6aff                 push -1
// 004e7442  68e8679900           push 0x9967e8
// 004e7447  64a100000000         mov eax, dword ptr fs:[0]
// 004e744d  50                   push eax
// 004e744e  64892500000000       mov dword ptr fs:[0], esp
// 004e7455  51                   push ecx
// 004e7456  56                   push esi
// 004e7457  8bd1                 mov edx, ecx
// 004e7459  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e745d  83ec08               sub esp, 8
// 004e7460  8bc4                 mov eax, esp
// 004e7462  8908                 mov dword ptr [eax], ecx
// 004e7464  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004e7468  894804               mov dword ptr [eax + 4], ecx
// 004e746b  8b442428             mov eax, dword ptr [esp + 0x28]
// 004e746f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004e7477  8964240c             mov dword ptr [esp + 0xc], esp
// 004e747b  85c0                 test eax, eax
// 004e747d  740c                 je 0x4e748b
// 004e747f  83c004               add eax, 4
// 004e7482  b901000000           mov ecx, 1
// 004e7487  f00fc108             lock xadd dword ptr [eax], ecx
// 004e748b  8b4a04               mov ecx, dword ptr [edx + 4]
// 004e748e  034c2420             add ecx, dword ptr [esp + 0x20]
// 004e7492  8b12                 mov edx, dword ptr [edx]
// 004e7494  ffd2                 call edx
// 004e7496  8b742420             mov esi, dword ptr [esp + 0x20]
// 004e749a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004e74a2  85f6                 test esi, esi
// 004e74a4  742a                 je 0x4e74d0
// 004e74a6  8d4604               lea eax, [esi + 4]
// 004e74a9  83c9ff               or ecx, 0xffffffff
// 004e74ac  f00fc108             lock xadd dword ptr [eax], ecx
// 004e74b0  751e                 jne 0x4e74d0
// 004e74b2  8b16                 mov edx, dword ptr [esi]
// 004e74b4  8b4204               mov eax, dword ptr [edx + 4]
// 004e74b7  8bce                 mov ecx, esi
// 004e74b9  ffd0                 call eax
// 004e74bb  8d4e08               lea ecx, [esi + 8]
// 004e74be  83caff               or edx, 0xffffffff
// 004e74c1  f00fc111             lock xadd dword ptr [ecx], edx
// 004e74c5  7509                 jne 0x4e74d0
// 004e74c7  8b06                 mov eax, dword ptr [esi]
// 004e74c9  8b5008               mov edx, dword ptr [eax + 8]
// 004e74cc  8bce                 mov ecx, esi
// 004e74ce  ffd2                 call edx
// 004e74d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e74d4  64890d00000000       mov dword ptr fs:[0], ecx
// 004e74db  5e                   pop esi
// 004e74dc  83c410               add esp, 0x10
// 004e74df  c20c00               ret 0xc
// library rbxgs-net/IdManager.cpp (function ??R?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@QBEXPAVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
