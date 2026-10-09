// roc 2011-06 007b1750  unit: RBX::ManualJointSurfacePair  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b1750
//
// 007b1750  6aff                 push -1
// 007b1752  683b939f00           push 0x9f933b
// 007b1757  64a100000000         mov eax, dword ptr fs:[0]
// 007b175d  50                   push eax
// 007b175e  64892500000000       mov dword ptr fs:[0], esp
// 007b1765  51                   push ecx
// 007b1766  56                   push esi
// 007b1767  57                   push edi
// 007b1768  6a58                 push 0x58
// 007b176a  8bf1                 mov esi, ecx
// 007b176c  e8ed880500           call 0x80a05e
// 007b1771  83c404               add esp, 4
// 007b1774  89442408             mov dword ptr [esp + 8], eax
// 007b1778  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007b177c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007b1784  85c0                 test eax, eax
// 007b1786  740b                 je 0x7b1793
// 007b1788  57                   push edi
// 007b1789  56                   push esi
// 007b178a  8bc8                 mov ecx, eax
// 007b178c  e89fc90300           call 0x7ee130
// 007b1791  eb02                 jmp 0x7b1795
// 007b1793  33c0                 xor eax, eax
// 007b1795  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b1799  894e04               mov dword ptr [esi + 4], ecx
// 007b179c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b17a0  897e0c               mov dword ptr [esi + 0xc], edi
// 007b17a3  894608               mov dword ptr [esi + 8], eax
// 007b17a6  c70638d1ab00         mov dword ptr [esi], 0xabd138
// 007b17ac  5f                   pop edi
// 007b17ad  8bc6                 mov eax, esi
// 007b17af  5e                   pop esi
// 007b17b0  64890d00000000       mov dword ptr fs:[0], ecx
// 007b17b7  83c410               add esp, 0x10
// 007b17ba  c20800               ret 8
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??0ClumpStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
