// roc 2008-06 0072df10  unit: CXTPControlGallery  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072df10
//
// 0072df10  56                   push esi
// 0072df11  8bf1                 mov esi, ecx
// 0072df13  8b06                 mov eax, dword ptr [esi]
// 0072df15  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0072df1b  ffd2                 call edx
// 0072df1d  85c0                 test eax, eax
// 0072df1f  7424                 je 0x72df45
// 0072df21  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0072df27  8b5024               mov edx, dword ptr [eax + 0x24]
// 0072df2a  8d8e84010000         lea ecx, [esi + 0x184]
// 0072df30  ffd2                 call edx
// 0072df32  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072df36  8b10                 mov edx, dword ptr [eax]
// 0072df38  8b520c               mov edx, dword ptr [edx + 0xc]
// 0072df3b  56                   push esi
// 0072df3c  51                   push ecx
// 0072df3d  8bc8                 mov ecx, eax
// 0072df3f  ffd2                 call edx
// 0072df41  5e                   pop esi
// 0072df42  c20400               ret 4
// 0072df45  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0072df4b  8b5024               mov edx, dword ptr [eax + 0x24]
// 0072df4e  81c684010000         add esi, 0x184
// 0072df54  8bce                 mov ecx, esi
// 0072df56  ffd2                 call edx
// 0072df58  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072df5c  8b10                 mov edx, dword ptr [eax]
// 0072df5e  8b5208               mov edx, dword ptr [edx + 8]
// 0072df61  56                   push esi
// 0072df62  51                   push ecx
// 0072df63  8bc8                 mov ecx, eax
// 0072df65  ffd2                 call edx
// 0072df67  5e                   pop esi
// 0072df68  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlGallery.cpp (function ?DrawScrollBar@CXTPControlGallery@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp
