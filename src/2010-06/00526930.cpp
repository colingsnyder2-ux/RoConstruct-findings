// roc 2010-06 00526930  unit: RBX::ViewG3D  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00526930
//
// 00526930  53                   push ebx
// 00526931  55                   push ebp
// 00526932  56                   push esi
// 00526933  8bf1                 mov esi, ecx
// 00526935  57                   push edi
// 00526936  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052693a  d907                 fld dword ptr [edi]
// 0052693c  8d9f88000000         lea ebx, [edi + 0x88]
// 00526942  d91e                 fstp dword ptr [esi]
// 00526944  8dae88000000         lea ebp, [esi + 0x88]
// 0052694a  d94704               fld dword ptr [edi + 4]
// 0052694d  53                   push ebx
// 0052694e  d95e04               fstp dword ptr [esi + 4]
// 00526951  d94708               fld dword ptr [edi + 8]
// 00526954  d95e08               fstp dword ptr [esi + 8]
// 00526957  d9470c               fld dword ptr [edi + 0xc]
// 0052695a  d95e0c               fstp dword ptr [esi + 0xc]
// 0052695d  d94710               fld dword ptr [edi + 0x10]
// 00526960  d95e10               fstp dword ptr [esi + 0x10]
// 00526963  d94714               fld dword ptr [edi + 0x14]
// 00526966  d95e14               fstp dword ptr [esi + 0x14]
// 00526969  d94718               fld dword ptr [edi + 0x18]
// 0052696c  d95e18               fstp dword ptr [esi + 0x18]
// 0052696f  d9471c               fld dword ptr [edi + 0x1c]
// 00526972  d95e1c               fstp dword ptr [esi + 0x1c]
// 00526975  d94720               fld dword ptr [edi + 0x20]
// 00526978  d95e20               fstp dword ptr [esi + 0x20]
// 0052697b  d94724               fld dword ptr [edi + 0x24]
// 0052697e  d95e24               fstp dword ptr [esi + 0x24]
// 00526981  d94728               fld dword ptr [edi + 0x28]
// 00526984  d95e28               fstp dword ptr [esi + 0x28]
// 00526987  d9472c               fld dword ptr [edi + 0x2c]
// 0052698a  d95e2c               fstp dword ptr [esi + 0x2c]
// 0052698d  d94730               fld dword ptr [edi + 0x30]
// 00526990  d95e30               fstp dword ptr [esi + 0x30]
// 00526993  d94734               fld dword ptr [edi + 0x34]
// 00526996  d95e34               fstp dword ptr [esi + 0x34]
// 00526999  d94738               fld dword ptr [edi + 0x38]
// 0052699c  d95e38               fstp dword ptr [esi + 0x38]
// 0052699f  d9473c               fld dword ptr [edi + 0x3c]
// 005269a2  d95e3c               fstp dword ptr [esi + 0x3c]
// 005269a5  d94740               fld dword ptr [edi + 0x40]
// 005269a8  d95e40               fstp dword ptr [esi + 0x40]
// 005269ab  d94744               fld dword ptr [edi + 0x44]
// 005269ae  d95e44               fstp dword ptr [esi + 0x44]
// 005269b1  8b4748               mov eax, dword ptr [edi + 0x48]
// 005269b4  894648               mov dword ptr [esi + 0x48], eax
// 005269b7  8a4f4c               mov cl, byte ptr [edi + 0x4c]
// 005269ba  884e4c               mov byte ptr [esi + 0x4c], cl
// 005269bd  d94750               fld dword ptr [edi + 0x50]
// 005269c0  d95e50               fstp dword ptr [esi + 0x50]
// 005269c3  8bcd                 mov ecx, ebp
// 005269c5  d94754               fld dword ptr [edi + 0x54]
// 005269c8  d95e54               fstp dword ptr [esi + 0x54]
// 005269cb  d94758               fld dword ptr [edi + 0x58]
// 005269ce  d95e58               fstp dword ptr [esi + 0x58]
// 005269d1  d9475c               fld dword ptr [edi + 0x5c]
// 005269d4  d95e5c               fstp dword ptr [esi + 0x5c]
// 005269d7  d94760               fld dword ptr [edi + 0x60]
// 005269da  d95e60               fstp dword ptr [esi + 0x60]
// 005269dd  d94764               fld dword ptr [edi + 0x64]
// 005269e0  d95e64               fstp dword ptr [esi + 0x64]
// 005269e3  d94768               fld dword ptr [edi + 0x68]
// 005269e6  d95e68               fstp dword ptr [esi + 0x68]
// 005269e9  d9476c               fld dword ptr [edi + 0x6c]
// 005269ec  d95e6c               fstp dword ptr [esi + 0x6c]
// 005269ef  d94770               fld dword ptr [edi + 0x70]
// 005269f2  d95e70               fstp dword ptr [esi + 0x70]
// 005269f5  d94774               fld dword ptr [edi + 0x74]
// 005269f8  d95e74               fstp dword ptr [esi + 0x74]
// 005269fb  d94778               fld dword ptr [edi + 0x78]
// 005269fe  d95e78               fstp dword ptr [esi + 0x78]
// 00526a01  d9477c               fld dword ptr [edi + 0x7c]
// 00526a04  d95e7c               fstp dword ptr [esi + 0x7c]
// 00526a07  dd8780000000         fld qword ptr [edi + 0x80]
// 00526a0d  dd9e80000000         fstp qword ptr [esi + 0x80]
// 00526a13  e858f60200           call 0x556070
// 00526a18  d94324               fld dword ptr [ebx + 0x24]
// 00526a1b  d95d24               fstp dword ptr [ebp + 0x24]
// 00526a1e  d94328               fld dword ptr [ebx + 0x28]
// 00526a21  d95d28               fstp dword ptr [ebp + 0x28]
// 00526a24  d9432c               fld dword ptr [ebx + 0x2c]
// 00526a27  8d9fb8000000         lea ebx, [edi + 0xb8]
// 00526a2d  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00526a30  8daeb8000000         lea ebp, [esi + 0xb8]
// 00526a36  53                   push ebx
// 00526a37  8bcd                 mov ecx, ebp
// 00526a39  e832f60200           call 0x556070
// 00526a3e  d94324               fld dword ptr [ebx + 0x24]
// 00526a41  d95d24               fstp dword ptr [ebp + 0x24]
// 00526a44  8bc6                 mov eax, esi
// 00526a46  d94328               fld dword ptr [ebx + 0x28]
// 00526a49  d95d28               fstp dword ptr [ebp + 0x28]
// 00526a4c  d9432c               fld dword ptr [ebx + 0x2c]
// 00526a4f  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00526a52  d987e8000000         fld dword ptr [edi + 0xe8]
// 00526a58  d99ee8000000         fstp dword ptr [esi + 0xe8]
// 00526a5e  d987ec000000         fld dword ptr [edi + 0xec]
// 00526a64  d99eec000000         fstp dword ptr [esi + 0xec]
// 00526a6a  d987f0000000         fld dword ptr [edi + 0xf0]
// 00526a70  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 00526a76  d987f4000000         fld dword ptr [edi + 0xf4]
// 00526a7c  5f                   pop edi
// 00526a7d  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 00526a83  5e                   pop esi
// 00526a84  5d                   pop ebp
// 00526a85  5b                   pop ebx
// 00526a86  c20400               ret 4
// library rbxgs-view/View.cpp (function ??0LightingParameters@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
