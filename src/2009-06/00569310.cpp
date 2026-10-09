// roc 2009-06 00569310  unit: RBX::RbxG3D::RenderScene  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00569310
//
// 00569310  6aff                 push -1
// 00569312  68b3fa8500           push 0x85fab3
// 00569317  64a100000000         mov eax, dword ptr fs:[0]
// 0056931d  50                   push eax
// 0056931e  64892500000000       mov dword ptr fs:[0], esp
// 00569325  51                   push ecx
// 00569326  56                   push esi
// 00569327  8bf1                 mov esi, ecx
// 00569329  57                   push edi
// 0056932a  89742408             mov dword ptr [esp + 8], esi
// 0056932e  8b4608               mov eax, dword ptr [esi + 8]
// 00569331  8b3da4e18900         mov edi, dword ptr [0x89e1a4]
// 00569337  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0056933f  85c0                 test eax, eax
// 00569341  7428                 je 0x56936b
// 00569343  83c004               add eax, 4
// 00569346  50                   push eax
// 00569347  ffd7                 call edi
// 00569349  85c0                 test eax, eax
// 0056934b  7517                 jne 0x569364
// 0056934d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00569350  e82bbaedff           call 0x444d80
// 00569355  8b4e08               mov ecx, dword ptr [esi + 8]
// 00569358  85c9                 test ecx, ecx
// 0056935a  7408                 je 0x569364
// 0056935c  8b01                 mov eax, dword ptr [ecx]
// 0056935e  8b10                 mov edx, dword ptr [eax]
// 00569360  6a01                 push 1
// 00569362  ffd2                 call edx
// 00569364  c7460800000000       mov dword ptr [esi + 8], 0
// 0056936b  8b4604               mov eax, dword ptr [esi + 4]
// 0056936e  c644241400           mov byte ptr [esp + 0x14], 0
// 00569373  85c0                 test eax, eax
// 00569375  7428                 je 0x56939f
// 00569377  83c004               add eax, 4
// 0056937a  50                   push eax
// 0056937b  ffd7                 call edi
// 0056937d  85c0                 test eax, eax
// 0056937f  7517                 jne 0x569398
// 00569381  8b4e04               mov ecx, dword ptr [esi + 4]
// 00569384  e8f7b9edff           call 0x444d80
// 00569389  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056938c  85c9                 test ecx, ecx
// 0056938e  7408                 je 0x569398
// 00569390  8b01                 mov eax, dword ptr [ecx]
// 00569392  8b10                 mov edx, dword ptr [eax]
// 00569394  6a01                 push 1
// 00569396  ffd2                 call edx
// 00569398  c7460400000000       mov dword ptr [esi + 4], 0
// 0056939f  8b06                 mov eax, dword ptr [esi]
// 005693a1  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005693a9  85c0                 test eax, eax
// 005693ab  7425                 je 0x5693d2
// 005693ad  83c004               add eax, 4
// 005693b0  50                   push eax
// 005693b1  ffd7                 call edi
// 005693b3  85c0                 test eax, eax
// 005693b5  7515                 jne 0x5693cc
// 005693b7  8b0e                 mov ecx, dword ptr [esi]
// 005693b9  e8c2b9edff           call 0x444d80
// 005693be  8b0e                 mov ecx, dword ptr [esi]
// 005693c0  85c9                 test ecx, ecx
// 005693c2  7408                 je 0x5693cc
// 005693c4  8b01                 mov eax, dword ptr [ecx]
// 005693c6  8b10                 mov edx, dword ptr [eax]
// 005693c8  6a01                 push 1
// 005693ca  ffd2                 call edx
// 005693cc  c70600000000         mov dword ptr [esi], 0
// 005693d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005693d6  5f                   pop edi
// 005693d7  5e                   pop esi
// 005693d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005693df  83c410               add esp, 0x10
// 005693e2  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??1DepthBlur@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
