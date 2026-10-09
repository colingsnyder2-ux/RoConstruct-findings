// roc 2010-06 0054b8d0  unit: RBX::AggregateChunk  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b8d0
//
// 0054b8d0  6aff                 push -1
// 0054b8d2  6863079900           push 0x990763
// 0054b8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0054b8dd  50                   push eax
// 0054b8de  64892500000000       mov dword ptr fs:[0], esp
// 0054b8e5  51                   push ecx
// 0054b8e6  56                   push esi
// 0054b8e7  8bf1                 mov esi, ecx
// 0054b8e9  57                   push edi
// 0054b8ea  89742408             mov dword ptr [esp + 8], esi
// 0054b8ee  8b4608               mov eax, dword ptr [esi + 8]
// 0054b8f1  8b3d7ca39e00         mov edi, dword ptr [0x9ea37c]
// 0054b8f7  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0054b8ff  85c0                 test eax, eax
// 0054b901  7428                 je 0x54b92b
// 0054b903  83c004               add eax, 4
// 0054b906  50                   push eax
// 0054b907  ffd7                 call edi
// 0054b909  85c0                 test eax, eax
// 0054b90b  7517                 jne 0x54b924
// 0054b90d  8b4e08               mov ecx, dword ptr [esi + 8]
// 0054b910  e80b82f3ff           call 0x483b20
// 0054b915  8b4e08               mov ecx, dword ptr [esi + 8]
// 0054b918  85c9                 test ecx, ecx
// 0054b91a  7408                 je 0x54b924
// 0054b91c  8b01                 mov eax, dword ptr [ecx]
// 0054b91e  8b10                 mov edx, dword ptr [eax]
// 0054b920  6a01                 push 1
// 0054b922  ffd2                 call edx
// 0054b924  c7460800000000       mov dword ptr [esi + 8], 0
// 0054b92b  8b4604               mov eax, dword ptr [esi + 4]
// 0054b92e  c644241400           mov byte ptr [esp + 0x14], 0
// 0054b933  85c0                 test eax, eax
// 0054b935  7428                 je 0x54b95f
// 0054b937  83c004               add eax, 4
// 0054b93a  50                   push eax
// 0054b93b  ffd7                 call edi
// 0054b93d  85c0                 test eax, eax
// 0054b93f  7517                 jne 0x54b958
// 0054b941  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054b944  e8d781f3ff           call 0x483b20
// 0054b949  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054b94c  85c9                 test ecx, ecx
// 0054b94e  7408                 je 0x54b958
// 0054b950  8b01                 mov eax, dword ptr [ecx]
// 0054b952  8b10                 mov edx, dword ptr [eax]
// 0054b954  6a01                 push 1
// 0054b956  ffd2                 call edx
// 0054b958  c7460400000000       mov dword ptr [esi + 4], 0
// 0054b95f  8b06                 mov eax, dword ptr [esi]
// 0054b961  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054b969  85c0                 test eax, eax
// 0054b96b  7425                 je 0x54b992
// 0054b96d  83c004               add eax, 4
// 0054b970  50                   push eax
// 0054b971  ffd7                 call edi
// 0054b973  85c0                 test eax, eax
// 0054b975  7515                 jne 0x54b98c
// 0054b977  8b0e                 mov ecx, dword ptr [esi]
// 0054b979  e8a281f3ff           call 0x483b20
// 0054b97e  8b0e                 mov ecx, dword ptr [esi]
// 0054b980  85c9                 test ecx, ecx
// 0054b982  7408                 je 0x54b98c
// 0054b984  8b01                 mov eax, dword ptr [ecx]
// 0054b986  8b10                 mov edx, dword ptr [eax]
// 0054b988  6a01                 push 1
// 0054b98a  ffd2                 call edx
// 0054b98c  c70600000000         mov dword ptr [esi], 0
// 0054b992  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054b996  5f                   pop edi
// 0054b997  5e                   pop esi
// 0054b998  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b99f  83c410               add esp, 0x10
// 0054b9a2  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??1DepthBlur@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
