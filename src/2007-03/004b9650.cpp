// roc 2007-03 004b9650  unit: seg_004b0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9650
//
// 004b9650  83ec10               sub esp, 0x10
// 004b9653  55                   push ebp
// 004b9654  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004b9658  83fdff               cmp ebp, -1
// 004b965b  7509                 jne 0x4b9666
// 004b965d  0bc5                 or eax, ebp
// 004b965f  5d                   pop ebp
// 004b9660  83c410               add esp, 0x10
// 004b9663  c21400               ret 0x14
// 004b9666  8b442428             mov eax, dword ptr [esp + 0x28]
// 004b966a  53                   push ebx
// 004b966b  56                   push esi
// 004b966c  57                   push edi
// 004b966d  50                   push eax
// 004b966e  ff1548f07700         call dword ptr [0x77f048]
// 004b9674  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b9678  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004b967c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004b9680  8b1d68f07700         mov ebx, dword ptr [0x77f068]
// 004b9686  6689442412           mov word ptr [esp + 0x12], ax
// 004b968b  894c2414             mov dword ptr [esp + 0x14], ecx
// 004b968f  66c74424100200       mov word ptr [esp + 0x10], 2
// 004b9696  6a10                 push 0x10
// 004b9698  8d542414             lea edx, [esp + 0x14]
// 004b969c  52                   push edx
// 004b969d  6a00                 push 0
// 004b969f  56                   push esi
// 004b96a0  57                   push edi
// 004b96a1  55                   push ebp
// 004b96a2  ffd3                 call ebx
// 004b96a4  85c0                 test eax, eax
// 004b96a6  74ee                 je 0x4b9696
// 004b96a8  83f8ff               cmp eax, -1
// 004b96ab  5f                   pop edi
// 004b96ac  5e                   pop esi
// 004b96ad  5b                   pop ebx
// 004b96ae  7409                 je 0x4b96b9
// 004b96b0  33c0                 xor eax, eax
// 004b96b2  5d                   pop ebp
// 004b96b3  83c410               add esp, 0x10
// 004b96b6  c21400               ret 0x14
// 004b96b9  ff1534f07700         call dword ptr [0x77f034]
// 004b96bf  5d                   pop ebp
// 004b96c0  83c410               add esp, 0x10
// 004b96c3  c21400               ret 0x14
// library rbxgs-raknet/SocketLayer.cpp (function ?SendTo@SocketLayer@@QAEHIPBDHIG@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
