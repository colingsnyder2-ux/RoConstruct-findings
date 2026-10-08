// roc 2007-03 00461270  unit: seg_00460000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00461270
//
// 00461270  56                   push esi
// 00461271  8bf1                 mov esi, ecx
// 00461273  57                   push edi
// 00461274  c70674497900         mov dword ptr [esi], 0x794974
// 0046127a  33ff                 xor edi, edi
// 0046127c  3935a0778b00         cmp dword ptr [0x8b77a0], esi
// 00461282  7506                 jne 0x46128a
// 00461284  893da0778b00         mov dword ptr [0x8b77a0], edi
// 0046128a  8b4604               mov eax, dword ptr [esi + 4]
// 0046128d  50                   push eax
// 0046128e  e8ed200900           call 0x4f3380
// 00461293  83c404               add esp, 4
// 00461296  f644240c01           test byte ptr [esp + 0xc], 1
// 0046129b  897e04               mov dword ptr [esi + 4], edi
// 0046129e  897e08               mov dword ptr [esi + 8], edi
// 004612a1  897e0c               mov dword ptr [esi + 0xc], edi
// 004612a4  7409                 je 0x4612af
// 004612a6  56                   push esi
// 004612a7  e844ce1b00           call 0x61e0f0
// 004612ac  83c404               add esp, 4
// 004612af  5f                   pop edi
// 004612b0  8bc6                 mov eax, esi
// 004612b2  5e                   pop esi
// 004612b3  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ??_GGWindow@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp
