// from server: 100% by auto
// roc 2008-06 0072dec0  unit: CXTPControlGallery  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072dec0
//
// 0072dec0  56                   push esi
// 0072dec1  8bf1                 mov esi, ecx
// 0072dec3  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0072dec9  8b5024               mov edx, dword ptr [eax + 0x24]
// 0072decc  8d8e84010000         lea ecx, [esi + 0x184]
// 0072ded2  57                   push edi
// 0072ded3  ffd2                 call edx
// 0072ded5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072ded9  8b38                 mov edi, dword ptr [eax]
// 0072dedb  83ec10               sub esp, 0x10
// 0072dede  8bd4                 mov edx, esp
// 0072dee0  890a                 mov dword ptr [edx], ecx
// 0072dee2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072dee6  894a04               mov dword ptr [edx + 4], ecx
// 0072dee9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072deed  894a08               mov dword ptr [edx + 8], ecx
// 0072def0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0072def4  894a0c               mov dword ptr [edx + 0xc], ecx
// 0072def7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072defb  56                   push esi
// 0072defc  8bc8                 mov ecx, eax
// 0072defe  8b4704               mov eax, dword ptr [edi + 4]
// 0072df01  52                   push edx
// 0072df02  ffd0                 call eax
// 0072df04  5f                   pop edi
// 0072df05  5e                   pop esi
// 0072df06  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?FillControl@CXTPControlGallery@@IAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
