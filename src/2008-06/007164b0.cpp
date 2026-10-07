// roc 2008-06 007164b0  unit: CXTPPropertyGridView  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007164b0
//
// 007164b0  8b442404             mov eax, dword ptr [esp + 4]
// 007164b4  83ec10               sub esp, 0x10
// 007164b7  53                   push ebx
// 007164b8  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007164bc  55                   push ebp
// 007164bd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007164c1  56                   push esi
// 007164c2  57                   push edi
// 007164c3  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007164c7  c70700000000         mov dword ptr [edi], 0
// 007164cd  c70300000000         mov dword ptr [ebx], 0
// 007164d3  8bf1                 mov esi, ecx
// 007164d5  c7450000000000       mov dword ptr [ebp], 0
// 007164dc  c70000000000         mov dword ptr [eax], 0
// 007164e2  8d46ac               lea eax, [esi - 0x54]
// 007164e5  85c0                 test eax, eax
// 007164e7  7455                 je 0x71653e
// 007164e9  83782000             cmp dword ptr [eax + 0x20], 0
// 007164ed  744f                 je 0x71653e
// 007164ef  8b56cc               mov edx, dword ptr [esi - 0x34]
// 007164f2  8d4c2410             lea ecx, [esp + 0x10]
// 007164f6  51                   push ecx
// 007164f7  52                   push edx
// 007164f8  ff15342e8000         call dword ptr [0x802e34]
// 007164fe  8d442434             lea eax, [esp + 0x34]
// 00716502  50                   push eax
// 00716503  8bce                 mov ecx, esi
// 00716505  e8961dfdff           call 0x6e82a0
// 0071650a  85c0                 test eax, eax
// 0071650c  740f                 je 0x71651d
// 0071650e  5f                   pop edi
// 0071650f  5e                   pop esi
// 00716510  5d                   pop ebp
// 00716511  b857000780           mov eax, 0x80070057
// 00716516  5b                   pop ebx
// 00716517  83c410               add esp, 0x10
// 0071651a  c22000               ret 0x20
// 0071651d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00716521  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00716525  8b542418             mov edx, dword ptr [esp + 0x18]
// 00716529  8901                 mov dword ptr [ecx], eax
// 0071652b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071652f  2bd0                 sub edx, eax
// 00716531  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00716535  894d00               mov dword ptr [ebp], ecx
// 00716538  2bc1                 sub eax, ecx
// 0071653a  8913                 mov dword ptr [ebx], edx
// 0071653c  8907                 mov dword ptr [edi], eax
// 0071653e  5f                   pop edi
// 0071653f  5e                   pop esi
// 00716540  5d                   pop ebp
// 00716541  33c0                 xor eax, eax
// 00716543  5b                   pop ebx
// 00716544  83c410               add esp, 0x10
// 00716547  c22000               ret 0x20
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AccessibleLocation@CXTPPropertyGridView@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
