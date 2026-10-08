// roc 2007-03 0048c810  unit: seg_00480000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048c810
//
// 0048c810  51                   push ecx
// 0048c811  56                   push esi
// 0048c812  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048c816  56                   push esi
// 0048c817  81c138010000         add ecx, 0x138
// 0048c81d  c744240800000000     mov dword ptr [esp + 8], 0
// 0048c825  e826c6f8ff           call 0x418e50
// 0048c82a  8bc6                 mov eax, esi
// 0048c82c  5e                   pop esi
// 0048c82d  59                   pop ecx
// 0048c82e  c20400               ret 4
// library rbxgs-net/Players.cpp (function ?getPlayers@Players@Network@RBX@@QAE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
