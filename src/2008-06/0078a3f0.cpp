// roc 2008-06 0078a3f0  unit: CXTColorBase  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a3f0
//
// 0078a3f0  56                   push esi
// 0078a3f1  8bf1                 mov esi, ecx
// 0078a3f3  e87068f1ff           call 0x6a0c68
// 0078a3f8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078a3fc  8b06                 mov eax, dword ptr [esi]
// 0078a3fe  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078a402  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0078a408  51                   push ecx
// 0078a409  52                   push edx
// 0078a40a  8bce                 mov ecx, esi
// 0078a40c  ffd0                 call eax
// 0078a40e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078a411  8b35f82d8000         mov esi, dword ptr [0x802df8]
// 0078a417  51                   push ecx
// 0078a418  ffd6                 call esi
// 0078a41a  50                   push eax
// 0078a41b  e8be67f1ff           call 0x6a0bde
// 0078a420  8b5020               mov edx, dword ptr [eax + 0x20]
// 0078a423  52                   push edx
// 0078a424  ffd6                 call esi
// 0078a426  50                   push eax
// 0078a427  e8b267f1ff           call 0x6a0bde
// 0078a42c  6a01                 push 1
// 0078a42e  8bc8                 mov ecx, eax
// 0078a430  e84d250300           call 0x7bc982
// 0078a435  5e                   pop esi
// 0078a436  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPageCustom.cpp (function ?OnLButtonDblClk@CXTColorBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPageCustom.cpp
