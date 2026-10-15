// roc 2008-06 0065ff20  unit: seg_00650000  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065ff20
//
// 0065ff20  81ec88000000         sub esp, 0x88
// 0065ff26  53                   push ebx
// 0065ff27  8bd9                 mov ebx, ecx
// 0065ff29  807b0400             cmp byte ptr [ebx + 4], 0
// 0065ff2d  0f8424020000         je 0x660157
// 0065ff33  55                   push ebp
// 0065ff34  56                   push esi
// 0065ff35  8b33                 mov esi, dword ptr [ebx]
// 0065ff37  d9868c000000         fld dword ptr [esi + 0x8c]
// 0065ff3d  57                   push edi
// 0065ff3e  d95b14               fstp dword ptr [ebx + 0x14]
// 0065ff41  8bce                 mov ecx, esi
// 0065ff43  d9868c000000         fld dword ptr [esi + 0x8c]
// 0065ff49  d95c241c             fstp dword ptr [esp + 0x1c]
// 0065ff4d  e80e94f3ff           call 0x599360
// 0065ff52  d986bc000000         fld dword ptr [esi + 0xbc]
// 0065ff58  8b03                 mov eax, dword ptr [ebx]
// 0065ff5a  d944241c             fld dword ptr [esp + 0x1c]
// 0065ff5e  33ff                 xor edi, edi
// 0065ff60  dcc9                 fmul st(1), st(0)
// 0065ff62  d986c0000000         fld dword ptr [esi + 0xc0]
// 0065ff68  d8c9                 fmul st(1)
// 0065ff6a  d986b8000000         fld dword ptr [esi + 0xb8]
// 0065ff70  deca                 fmulp st(2)
// 0065ff72  d9c9                 fxch st(1)
// 0065ff74  d95c2410             fstp dword ptr [esp + 0x10]
// 0065ff78  d9c9                 fxch st(1)
// 0065ff7a  d95c2414             fstp dword ptr [esp + 0x14]
// 0065ff7e  d95c2418             fstp dword ptr [esp + 0x18]
// 0065ff82  397820               cmp dword ptr [eax + 0x20], edi
// 0065ff85  0f8e8f000000         jle 0x66001a
// 0065ff8b  eb03                 jmp 0x65ff90
// 0065ff8d  8d4900               lea ecx, [ecx]
// 0065ff90  8b0b                 mov ecx, dword ptr [ebx]
// 0065ff92  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0065ff95  8b34ba               mov esi, dword ptr [edx + edi*4]
// 0065ff98  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 0065ff9b  85ed                 test ebp, ebp
// 0065ff9d  740c                 je 0x65ffab
// 0065ff9f  8bcd                 mov ecx, ebp
// 0065ffa1  e87affffff           call 0x65ff20
// 0065ffa6  d94514               fld dword ptr [ebp + 0x14]
// 0065ffa9  eb06                 jmp 0x65ffb1
// 0065ffab  d9868c000000         fld dword ptr [esi + 0x8c]
// 0065ffb1  d84314               fadd dword ptr [ebx + 0x14]
// 0065ffb4  d95b14               fstp dword ptr [ebx + 0x14]
// 0065ffb7  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 0065ffba  85ed                 test ebp, ebp
// 0065ffbc  740c                 je 0x65ffca
// 0065ffbe  8bcd                 mov ecx, ebp
// 0065ffc0  e85bffffff           call 0x65ff20
// 0065ffc5  d94514               fld dword ptr [ebp + 0x14]
// 0065ffc8  eb06                 jmp 0x65ffd0
// 0065ffca  d9868c000000         fld dword ptr [esi + 0x8c]
// 0065ffd0  8d442420             lea eax, [esp + 0x20]
// 0065ffd4  d95c241c             fstp dword ptr [esp + 0x1c]
// 0065ffd8  50                   push eax
// 0065ffd9  8bce                 mov ecx, esi
// 0065ffdb  e8a044fbff           call 0x614480
// 0065ffe0  d900                 fld dword ptr [eax]
// 0065ffe2  d944241c             fld dword ptr [esp + 0x1c]
// 0065ffe6  8b0b                 mov ecx, dword ptr [ebx]
// 0065ffe8  dcc9                 fmul st(1), st(0)
// 0065ffea  47                   inc edi
// 0065ffeb  d94004               fld dword ptr [eax + 4]
// 0065ffee  d8c9                 fmul st(1)
// 0065fff0  d94008               fld dword ptr [eax + 8]
// 0065fff3  deca                 fmulp st(2)
// 0065fff5  d9ca                 fxch st(2)
// 0065fff7  d8442410             fadd dword ptr [esp + 0x10]
// 0065fffb  d95c2410             fstp dword ptr [esp + 0x10]
// 0065ffff  d9c9                 fxch st(1)
// 00660001  d8442414             fadd dword ptr [esp + 0x14]
// 00660005  d95c2414             fstp dword ptr [esp + 0x14]
// 00660009  d8442418             fadd dword ptr [esp + 0x18]
// 0066000d  d95c2418             fstp dword ptr [esp + 0x18]
// 00660011  3b7920               cmp edi, dword ptr [ecx + 0x20]
// 00660014  0f8c76ffffff         jl 0x65ff90
// 0066001a  d94314               fld dword ptr [ebx + 0x14]
// 0066001d  51                   push ecx
// 0066001e  8d542424             lea edx, [esp + 0x24]
// 00660022  d91c24               fstp dword ptr [esp]
// 00660025  52                   push edx
// 00660026  8d4c2418             lea ecx, [esp + 0x18]
// 0066002a  e81187ebff           call 0x518740
// 0066002f  d900                 fld dword ptr [eax]
// 00660031  8b33                 mov esi, dword ptr [ebx]
// 00660033  d95c2410             fstp dword ptr [esp + 0x10]
// 00660037  d94004               fld dword ptr [eax + 4]
// 0066003a  8bce                 mov ecx, esi
// 0066003c  d95c2414             fstp dword ptr [esp + 0x14]
// 00660040  d94008               fld dword ptr [eax + 8]
// 00660043  d95c2418             fstp dword ptr [esp + 0x18]
// 00660047  e81493f3ff           call 0x599360
// 0066004c  d9442410             fld dword ptr [esp + 0x10]
// 00660050  8d442410             lea eax, [esp + 0x10]
// 00660054  d8a6b8000000         fsub dword ptr [esi + 0xb8]
// 0066005a  50                   push eax
// 0066005b  d9442418             fld dword ptr [esp + 0x18]
// 0066005f  8d4c2430             lea ecx, [esp + 0x30]
// 00660063  d8a6bc000000         fsub dword ptr [esi + 0xbc]
// 00660069  51                   push ecx
// 0066006a  d9442420             fld dword ptr [esp + 0x20]
// 0066006e  d8a6c0000000         fsub dword ptr [esi + 0xc0]
// 00660074  d986ac000000         fld dword ptr [esi + 0xac]
// 0066007a  d8c9                 fmul st(1)
// 0066007c  d986a0000000         fld dword ptr [esi + 0xa0]
// 00660082  d8cb                 fmul st(3)
// 00660084  dec1                 faddp st(1)
// 00660086  d98694000000         fld dword ptr [esi + 0x94]
// 0066008c  d8cc                 fmul st(4)
// 0066008e  dec1                 faddp st(1)
// 00660090  d986b0000000         fld dword ptr [esi + 0xb0]
// 00660096  d8ca                 fmul st(2)
// 00660098  d986a4000000         fld dword ptr [esi + 0xa4]
// 0066009e  d8cc                 fmul st(4)
// 006600a0  dec1                 faddp st(1)
// 006600a2  d98698000000         fld dword ptr [esi + 0x98]
// 006600a8  d8cd                 fmul st(5)
// 006600aa  dec1                 faddp st(1)
// 006600ac  d986b4000000         fld dword ptr [esi + 0xb4]
// 006600b2  decb                 fmulp st(3)
// 006600b4  d986a8000000         fld dword ptr [esi + 0xa8]
// 006600ba  decc                 fmulp st(4)
// 006600bc  d9ca                 fxch st(2)
// 006600be  dec3                 faddp st(3)
// 006600c0  d9869c000000         fld dword ptr [esi + 0x9c]
// 006600c6  decc                 fmulp st(4)
// 006600c8  d9ca                 fxch st(2)
// 006600ca  dec3                 faddp st(3)
// 006600cc  d9c9                 fxch st(1)
// 006600ce  d95b08               fstp dword ptr [ebx + 8]
// 006600d1  d95b0c               fstp dword ptr [ebx + 0xc]
// 006600d4  d95b10               fstp dword ptr [ebx + 0x10]
// 006600d7  8b0b                 mov ecx, dword ptr [ebx]
// 006600d9  e88244fbff           call 0x614560
// 006600de  8b13                 mov edx, dword ptr [ebx]
// 006600e0  33ed                 xor ebp, ebp
// 006600e2  396a20               cmp dword ptr [edx + 0x20], ebp
// 006600e5  7e3b                 jle 0x660122
// 006600e7  8b03                 mov eax, dword ptr [ebx]
// 006600e9  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 006600ec  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 006600ef  8d542410             lea edx, [esp + 0x10]
// 006600f3  52                   push edx
// 006600f4  8d442478             lea eax, [esp + 0x78]
// 006600f8  50                   push eax
// 006600f9  e8e244fbff           call 0x6145e0
// 006600fe  50                   push eax
// 006600ff  8d4c2454             lea ecx, [esp + 0x54]
// 00660103  51                   push ecx
// 00660104  8d4c2434             lea ecx, [esp + 0x34]
// 00660108  e8e331ebff           call 0x5132f0
// 0066010d  8b13                 mov edx, dword ptr [ebx]
// 0066010f  b909000000           mov ecx, 9
// 00660114  8bf0                 mov esi, eax
// 00660116  8d7c242c             lea edi, [esp + 0x2c]
// 0066011a  45                   inc ebp
// 0066011b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0066011d  3b6a20               cmp ebp, dword ptr [edx + 0x20]
// 00660120  7cc5                 jl 0x6600e7
// 00660122  8b33                 mov esi, dword ptr [ebx]
// 00660124  8bce                 mov ecx, esi
// 00660126  e83592f3ff           call 0x599360
// 0066012b  81c694000000         add esi, 0x94
// 00660131  56                   push esi
// 00660132  8d442430             lea eax, [esp + 0x30]
// 00660136  50                   push eax
// 00660137  8d4c2458             lea ecx, [esp + 0x58]
// 0066013b  51                   push ecx
// 0066013c  e8efd9f7ff           call 0x5ddb30
// 00660141  83c40c               add esp, 0xc
// 00660144  8d7b18               lea edi, [ebx + 0x18]
// 00660147  b909000000           mov ecx, 9
// 0066014c  8bf0                 mov esi, eax
// 0066014e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00660150  5f                   pop edi
// 00660151  5e                   pop esi
// 00660152  c6430400             mov byte ptr [ebx + 4], 0
// 00660156  5d                   pop ebp
// 00660157  5b                   pop ebx
// 00660158  81c488000000         add esp, 0x88
// 0066015e  c3                   ret 
// library rbxgs/roc_cofm_native_children_family_55828f600e8e5824.cpp (function ?updateIfDirty@Cofm@RBX@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_cofm_native_children_family_55828f600e8e5824.cpp
