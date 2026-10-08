// roc 2007-08 004cfde0  unit: RBX::TextureProxyBase  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cfde0
//
// 004cfde0  6aff                 push -1
// 004cfde2  68e8c27400           push 0x74c2e8
// 004cfde7  64a100000000         mov eax, dword ptr fs:[0]
// 004cfded  50                   push eax
// 004cfdee  64892500000000       mov dword ptr fs:[0], esp
// 004cfdf5  51                   push ecx
// 004cfdf6  56                   push esi
// 004cfdf7  8bf1                 mov esi, ecx
// 004cfdf9  89742404             mov dword ptr [esp + 4], esi
// 004cfdfd  c706f4f07900         mov dword ptr [esi], 0x79f0f4
// 004cfe03  8d4e0c               lea ecx, [esi + 0xc]
// 004cfe06  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cfe0e  ff15ace67700         call dword ptr [0x77e6ac]
// 004cfe14  f644241801           test byte ptr [esp + 0x18], 1
// 004cfe19  c70684797900         mov dword ptr [esi], 0x797984
// 004cfe1f  7409                 je 0x4cfe2a
// 004cfe21  56                   push esi
// 004cfe22  e83bfe1500           call 0x62fc62
// 004cfe27  83c404               add esp, 4
// 004cfe2a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cfe2e  8bc6                 mov eax, esi
// 004cfe30  5e                   pop esi
// 004cfe31  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfe38  83c410               add esp, 0x10
// 004cfe3b  c20400               ret 4
// library openrbx-client/Rendering\AppDraw\AdornG3D.cpp (function ??_GTextureProxyBase@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/AppDraw/AdornG3D.cpp
