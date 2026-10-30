// roc 2009-12 00893b70  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893b70
//
// 00893b70  6aff                 push -1
// 00893b72  68a2159600           push 0x9615a2
// 00893b77  64a100000000         mov eax, dword ptr fs:[0]
// 00893b7d  50                   push eax
// 00893b7e  83ec08               sub esp, 8
// 00893b81  53                   push ebx
// 00893b82  56                   push esi
// 00893b83  a10052b600           mov eax, dword ptr [0xb65200]
// 00893b88  33c4                 xor eax, esp
// 00893b8a  50                   push eax
// 00893b8b  8d442414             lea eax, [esp + 0x14]
// 00893b8f  64a300000000         mov dword ptr fs:[0], eax
// 00893b95  8bf1                 mov esi, ecx
// 00893b97  8974240c             mov dword ptr [esp + 0xc], esi
// 00893b9b  e830d8f7ff           call 0x8113d0
// 00893ba0  33db                 xor ebx, ebx
// 00893ba2  6a40                 push 0x40
// 00893ba4  895c2420             mov dword ptr [esp + 0x20], ebx
// 00893ba8  c7065444a000         mov dword ptr [esi], 0xa04454
// 00893bae  c746544444a000       mov dword ptr [esi + 0x54], 0xa04444
// 00893bb5  c7465ce443a000       mov dword ptr [esi + 0x5c], 0xa043e4
// 00893bbc  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 00893bc2  899ea8010000         mov dword ptr [esi + 0x1a8], ebx
// 00893bc8  899eac010000         mov dword ptr [esi + 0x1ac], ebx
// 00893bce  899eb4010000         mov dword ptr [esi + 0x1b4], ebx
// 00893bd4  899eb8010000         mov dword ptr [esi + 0x1b8], ebx
// 00893bda  899ec0010000         mov dword ptr [esi + 0x1c0], ebx
// 00893be0  899eb0010000         mov dword ptr [esi + 0x1b0], ebx
// 00893be6  899e9c010000         mov dword ptr [esi + 0x19c], ebx
// 00893bec  899e34010000         mov dword ptr [esi + 0x134], ebx
// 00893bf2  c786d800000001000000 mov dword ptr [esi + 0xd8], 1
// 00893bfc  c786ec0000005f000000 mov dword ptr [esi + 0xec], 0x5f
// 00893c06  e855fcf5ff           call 0x7f3860
// 00893c0b  83c404               add esp, 4
// 00893c0e  89442410             mov dword ptr [esp + 0x10], eax
// 00893c12  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00893c17  3bc3                 cmp eax, ebx
// 00893c19  740a                 je 0x893c25
// 00893c1b  56                   push esi
// 00893c1c  8bc8                 mov ecx, eax
// 00893c1e  e8cdfcffff           call 0x8938f0
// 00893c23  eb02                 jmp 0x893c27
// 00893c25  33c0                 xor eax, eax
// 00893c27  8bce                 mov ecx, esi
// 00893c29  885c241c             mov byte ptr [esp + 0x1c], bl
// 00893c2d  8986bc010000         mov dword ptr [esi + 0x1bc], eax
// 00893c33  e810280900           call 0x926448
// 00893c38  8bc6                 mov eax, esi
// 00893c3a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00893c3e  64890d00000000       mov dword ptr fs:[0], ecx
// 00893c45  59                   pop ecx
// 00893c46  5e                   pop esi
// 00893c47  5b                   pop ebx
// 00893c48  83c414               add esp, 0x14
// 00893c4b  c3                   ret 
// copied from an identical function in another client (function ??0CXTPMenuBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMenuBar.cpp