// roc 2007-08 00602cd0  unit: RBX::FallingDown  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602cd0
//
// 00602cd0  6aff                 push -1
// 00602cd2  6898d27500           push 0x75d298
// 00602cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00602cdd  50                   push eax
// 00602cde  64892500000000       mov dword ptr fs:[0], esp
// 00602ce5  51                   push ecx
// 00602ce6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00602cea  56                   push esi
// 00602ceb  8bf1                 mov esi, ecx
// 00602ced  89742404             mov dword ptr [esp + 4], esi
// 00602cf1  894604               mov dword ptr [esi + 4], eax
// 00602cf4  d9ee                 fldz 
// 00602cf6  85c0                 test eax, eax
// 00602cf8  d95e08               fstp dword ptr [esi + 8]
// 00602cfb  d944241c             fld dword ptr [esp + 0x1c]
// 00602cff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00602d07  d95e0c               fstp dword ptr [esi + 0xc]
// 00602d0a  c706bc2b7c00         mov dword ptr [esi], 0x7c2bbc
// 00602d10  7405                 je 0x602d17
// 00602d12  83c004               add eax, 4
// 00602d15  eb02                 jmp 0x602d19
// 00602d17  33c0                 xor eax, eax
// 00602d19  50                   push eax
// 00602d1a  b980578c00           mov ecx, 0x8c5780
// 00602d1f  e84cd5f6ff           call 0x570270
// 00602d24  85c0                 test eax, eax
// 00602d26  740f                 je 0x602d37
// 00602d28  6a01                 push 1
// 00602d2a  8d4c241c             lea ecx, [esp + 0x1c]
// 00602d2e  51                   push ecx
// 00602d2f  8d4810               lea ecx, [eax + 0x10]
// 00602d32  e829bcfaff           call 0x5ae960
// 00602d37  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00602d3b  8bc6                 mov eax, esi
// 00602d3d  5e                   pop esi
// 00602d3e  64890d00000000       mov dword ptr fs:[0], ecx
// 00602d45  83c410               add esp, 0x10
// 00602d48  c20800               ret 8
// library rbxgs/humanoid\FallingDown.cpp (function ??0FallingDown@RBX@@QAE@PAVHumanoid@1@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
