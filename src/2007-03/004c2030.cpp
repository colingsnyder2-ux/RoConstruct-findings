// roc 2007-03 004c2030  unit: seg_004c0000  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2030
//
// 004c2030  53                   push ebx
// 004c2031  55                   push ebp
// 004c2032  56                   push esi
// 004c2033  8bf1                 mov esi, ecx
// 004c2035  57                   push edi
// 004c2036  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c203a  d907                 fld dword ptr [edi]
// 004c203c  8d9f88000000         lea ebx, [edi + 0x88]
// 004c2042  d91e                 fstp dword ptr [esi]
// 004c2044  8dae88000000         lea ebp, [esi + 0x88]
// 004c204a  d94704               fld dword ptr [edi + 4]
// 004c204d  53                   push ebx
// 004c204e  d95e04               fstp dword ptr [esi + 4]
// 004c2051  d94708               fld dword ptr [edi + 8]
// 004c2054  d95e08               fstp dword ptr [esi + 8]
// 004c2057  d9470c               fld dword ptr [edi + 0xc]
// 004c205a  d95e0c               fstp dword ptr [esi + 0xc]
// 004c205d  d94710               fld dword ptr [edi + 0x10]
// 004c2060  d95e10               fstp dword ptr [esi + 0x10]
// 004c2063  d94714               fld dword ptr [edi + 0x14]
// 004c2066  d95e14               fstp dword ptr [esi + 0x14]
// 004c2069  d94718               fld dword ptr [edi + 0x18]
// 004c206c  d95e18               fstp dword ptr [esi + 0x18]
// 004c206f  d9471c               fld dword ptr [edi + 0x1c]
// 004c2072  d95e1c               fstp dword ptr [esi + 0x1c]
// 004c2075  d94720               fld dword ptr [edi + 0x20]
// 004c2078  d95e20               fstp dword ptr [esi + 0x20]
// 004c207b  d94724               fld dword ptr [edi + 0x24]
// 004c207e  d95e24               fstp dword ptr [esi + 0x24]
// 004c2081  d94728               fld dword ptr [edi + 0x28]
// 004c2084  d95e28               fstp dword ptr [esi + 0x28]
// 004c2087  d9472c               fld dword ptr [edi + 0x2c]
// 004c208a  d95e2c               fstp dword ptr [esi + 0x2c]
// 004c208d  d94730               fld dword ptr [edi + 0x30]
// 004c2090  d95e30               fstp dword ptr [esi + 0x30]
// 004c2093  d94734               fld dword ptr [edi + 0x34]
// 004c2096  d95e34               fstp dword ptr [esi + 0x34]
// 004c2099  d94738               fld dword ptr [edi + 0x38]
// 004c209c  d95e38               fstp dword ptr [esi + 0x38]
// 004c209f  d9473c               fld dword ptr [edi + 0x3c]
// 004c20a2  d95e3c               fstp dword ptr [esi + 0x3c]
// 004c20a5  d94740               fld dword ptr [edi + 0x40]
// 004c20a8  d95e40               fstp dword ptr [esi + 0x40]
// 004c20ab  d94744               fld dword ptr [edi + 0x44]
// 004c20ae  d95e44               fstp dword ptr [esi + 0x44]
// 004c20b1  8b4748               mov eax, dword ptr [edi + 0x48]
// 004c20b4  894648               mov dword ptr [esi + 0x48], eax
// 004c20b7  8a4f4c               mov cl, byte ptr [edi + 0x4c]
// 004c20ba  884e4c               mov byte ptr [esi + 0x4c], cl
// 004c20bd  d94750               fld dword ptr [edi + 0x50]
// 004c20c0  d95e50               fstp dword ptr [esi + 0x50]
// 004c20c3  8bcd                 mov ecx, ebp
// 004c20c5  d94754               fld dword ptr [edi + 0x54]
// 004c20c8  d95e54               fstp dword ptr [esi + 0x54]
// 004c20cb  d94758               fld dword ptr [edi + 0x58]
// 004c20ce  d95e58               fstp dword ptr [esi + 0x58]
// 004c20d1  d9475c               fld dword ptr [edi + 0x5c]
// 004c20d4  d95e5c               fstp dword ptr [esi + 0x5c]
// 004c20d7  d94760               fld dword ptr [edi + 0x60]
// 004c20da  d95e60               fstp dword ptr [esi + 0x60]
// 004c20dd  d94764               fld dword ptr [edi + 0x64]
// 004c20e0  d95e64               fstp dword ptr [esi + 0x64]
// 004c20e3  d94768               fld dword ptr [edi + 0x68]
// 004c20e6  d95e68               fstp dword ptr [esi + 0x68]
// 004c20e9  d9476c               fld dword ptr [edi + 0x6c]
// 004c20ec  d95e6c               fstp dword ptr [esi + 0x6c]
// 004c20ef  d94770               fld dword ptr [edi + 0x70]
// 004c20f2  d95e70               fstp dword ptr [esi + 0x70]
// 004c20f5  d94774               fld dword ptr [edi + 0x74]
// 004c20f8  d95e74               fstp dword ptr [esi + 0x74]
// 004c20fb  d94778               fld dword ptr [edi + 0x78]
// 004c20fe  d95e78               fstp dword ptr [esi + 0x78]
// 004c2101  d9477c               fld dword ptr [edi + 0x7c]
// 004c2104  d95e7c               fstp dword ptr [esi + 0x7c]
// 004c2107  dd8780000000         fld qword ptr [edi + 0x80]
// 004c210d  dd9e80000000         fstp qword ptr [esi + 0x80]
// 004c2113  e868c80300           call 0x4fe980
// 004c2118  d94324               fld dword ptr [ebx + 0x24]
// 004c211b  d95d24               fstp dword ptr [ebp + 0x24]
// 004c211e  d94328               fld dword ptr [ebx + 0x28]
// 004c2121  d95d28               fstp dword ptr [ebp + 0x28]
// 004c2124  d9432c               fld dword ptr [ebx + 0x2c]
// 004c2127  8d9fb8000000         lea ebx, [edi + 0xb8]
// 004c212d  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004c2130  8daeb8000000         lea ebp, [esi + 0xb8]
// 004c2136  53                   push ebx
// 004c2137  8bcd                 mov ecx, ebp
// 004c2139  e842c80300           call 0x4fe980
// 004c213e  d94324               fld dword ptr [ebx + 0x24]
// 004c2141  d95d24               fstp dword ptr [ebp + 0x24]
// 004c2144  8bc6                 mov eax, esi
// 004c2146  d94328               fld dword ptr [ebx + 0x28]
// 004c2149  d95d28               fstp dword ptr [ebp + 0x28]
// 004c214c  d9432c               fld dword ptr [ebx + 0x2c]
// 004c214f  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004c2152  d987e8000000         fld dword ptr [edi + 0xe8]
// 004c2158  d99ee8000000         fstp dword ptr [esi + 0xe8]
// 004c215e  d987ec000000         fld dword ptr [edi + 0xec]
// 004c2164  d99eec000000         fstp dword ptr [esi + 0xec]
// 004c216a  d987f0000000         fld dword ptr [edi + 0xf0]
// 004c2170  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 004c2176  d987f4000000         fld dword ptr [edi + 0xf4]
// 004c217c  5f                   pop edi
// 004c217d  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 004c2183  5e                   pop esi
// 004c2184  5d                   pop ebp
// 004c2185  5b                   pop ebx
// 004c2186  c20400               ret 4
// library rbxgs-view/View.cpp (function ??0LightingParameters@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
