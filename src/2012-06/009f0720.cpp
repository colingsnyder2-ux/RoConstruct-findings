// roc 2012-06 009f0720  unit: CXTPPropertyGridView  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f0720
//
// 009f0720  8b442404             mov eax, dword ptr [esp + 4]
// 009f0724  83ec10               sub esp, 0x10
// 009f0727  53                   push ebx
// 009f0728  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 009f072c  55                   push ebp
// 009f072d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 009f0731  56                   push esi
// 009f0732  57                   push edi
// 009f0733  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 009f0737  c70700000000         mov dword ptr [edi], 0
// 009f073d  c70300000000         mov dword ptr [ebx], 0
// 009f0743  8bf1                 mov esi, ecx
// 009f0745  c7450000000000       mov dword ptr [ebp], 0
// 009f074c  c70000000000         mov dword ptr [eax], 0
// 009f0752  8d46ac               lea eax, [esi - 0x54]
// 009f0755  85c0                 test eax, eax
// 009f0757  7455                 je 0x9f07ae
// 009f0759  83782000             cmp dword ptr [eax + 0x20], 0
// 009f075d  744f                 je 0x9f07ae
// 009f075f  8b56cc               mov edx, dword ptr [esi - 0x34]
// 009f0762  8d4c2410             lea ecx, [esp + 0x10]
// 009f0766  51                   push ecx
// 009f0767  52                   push edx
// 009f0768  ff15f83ab200         call dword ptr [0xb23af8]
// 009f076e  8d442434             lea eax, [esp + 0x34]
// 009f0772  50                   push eax
// 009f0773  8bce                 mov ecx, esi
// 009f0775  e87690fdff           call 0x9c97f0
// 009f077a  85c0                 test eax, eax
// 009f077c  740f                 je 0x9f078d
// 009f077e  5f                   pop edi
// 009f077f  5e                   pop esi
// 009f0780  5d                   pop ebp
// 009f0781  b857000780           mov eax, 0x80070057
// 009f0786  5b                   pop ebx
// 009f0787  83c410               add esp, 0x10
// 009f078a  c22000               ret 0x20
// 009f078d  8b442410             mov eax, dword ptr [esp + 0x10]
// 009f0791  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009f0795  8b542418             mov edx, dword ptr [esp + 0x18]
// 009f0799  8901                 mov dword ptr [ecx], eax
// 009f079b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009f079f  2bd0                 sub edx, eax
// 009f07a1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009f07a5  894d00               mov dword ptr [ebp], ecx
// 009f07a8  2bc1                 sub eax, ecx
// 009f07aa  8913                 mov dword ptr [ebx], edx
// 009f07ac  8907                 mov dword ptr [edi], eax
// 009f07ae  5f                   pop edi
// 009f07af  5e                   pop esi
// 009f07b0  5d                   pop ebp
// 009f07b1  33c0                 xor eax, eax
// 009f07b3  5b                   pop ebx
// 009f07b4  83c410               add esp, 0x10
// 009f07b7  c22000               ret 0x20
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AccessibleLocation@CXTPPropertyGridView@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
