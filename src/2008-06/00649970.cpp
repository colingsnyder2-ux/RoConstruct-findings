// roc 2008-06 00649970  unit: RBX::Ball  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649970
//
// 00649970  8b442404             mov eax, dword ptr [esp + 4]
// 00649974  d9ee                 fldz 
// 00649976  d910                 fst dword ptr [eax]
// 00649978  8b542408             mov edx, dword ptr [esp + 8]
// 0064997c  d95004               fst dword ptr [eax + 4]
// 0064997f  d95008               fst dword ptr [eax + 8]
// 00649982  d9500c               fst dword ptr [eax + 0xc]
// 00649985  d95010               fst dword ptr [eax + 0x10]
// 00649988  d95014               fst dword ptr [eax + 0x14]
// 0064998b  d95018               fst dword ptr [eax + 0x18]
// 0064998e  d9501c               fst dword ptr [eax + 0x1c]
// 00649991  d95020               fst dword ptr [eax + 0x20]
// 00649994  d95024               fst dword ptr [eax + 0x24]
// 00649997  d95028               fst dword ptr [eax + 0x28]
// 0064999a  d9582c               fstp dword ptr [eax + 0x2c]
// 0064999d  d94104               fld dword ptr [ecx + 4]
// 006499a0  d84a04               fmul dword ptr [edx + 4]
// 006499a3  d902                 fld dword ptr [edx]
// 006499a5  d809                 fmul dword ptr [ecx]
// 006499a7  dec1                 faddp st(1)
// 006499a9  d94108               fld dword ptr [ecx + 8]
// 006499ac  d84a08               fmul dword ptr [edx + 8]
// 006499af  dec1                 faddp st(1)
// 006499b1  d84224               fadd dword ptr [edx + 0x24]
// 006499b4  d94214               fld dword ptr [edx + 0x14]
// 006499b7  d84908               fmul dword ptr [ecx + 8]
// 006499ba  d94104               fld dword ptr [ecx + 4]
// 006499bd  d84a10               fmul dword ptr [edx + 0x10]
// 006499c0  dec1                 faddp st(1)
// 006499c2  d901                 fld dword ptr [ecx]
// 006499c4  d84a0c               fmul dword ptr [edx + 0xc]
// 006499c7  dec1                 faddp st(1)
// 006499c9  d84228               fadd dword ptr [edx + 0x28]
// 006499cc  d94218               fld dword ptr [edx + 0x18]
// 006499cf  d809                 fmul dword ptr [ecx]
// 006499d1  d94104               fld dword ptr [ecx + 4]
// 006499d4  d84a1c               fmul dword ptr [edx + 0x1c]
// 006499d7  dec1                 faddp st(1)
// 006499d9  d94108               fld dword ptr [ecx + 8]
// 006499dc  d84a20               fmul dword ptr [edx + 0x20]
// 006499df  dec1                 faddp st(1)
// 006499e1  d8422c               fadd dword ptr [edx + 0x2c]
// 006499e4  d9ca                 fxch st(2)
// 006499e6  d918                 fstp dword ptr [eax]
// 006499e8  d95804               fstp dword ptr [eax + 4]
// 006499eb  d95808               fstp dword ptr [eax + 8]
// 006499ee  d9410c               fld dword ptr [ecx + 0xc]
// 006499f1  d80a                 fmul dword ptr [edx]
// 006499f3  d94110               fld dword ptr [ecx + 0x10]
// 006499f6  d84a04               fmul dword ptr [edx + 4]
// 006499f9  dec1                 faddp st(1)
// 006499fb  d94114               fld dword ptr [ecx + 0x14]
// 006499fe  d84a08               fmul dword ptr [edx + 8]
// 00649a01  dec1                 faddp st(1)
// 00649a03  d84224               fadd dword ptr [edx + 0x24]
// 00649a06  d9410c               fld dword ptr [ecx + 0xc]
// 00649a09  d84a0c               fmul dword ptr [edx + 0xc]
// 00649a0c  d94214               fld dword ptr [edx + 0x14]
// 00649a0f  d84914               fmul dword ptr [ecx + 0x14]
// 00649a12  dec1                 faddp st(1)
// 00649a14  d94210               fld dword ptr [edx + 0x10]
// 00649a17  d84910               fmul dword ptr [ecx + 0x10]
// 00649a1a  dec1                 faddp st(1)
// 00649a1c  d84228               fadd dword ptr [edx + 0x28]
// 00649a1f  d9410c               fld dword ptr [ecx + 0xc]
// 00649a22  d84a18               fmul dword ptr [edx + 0x18]
// 00649a25  d94110               fld dword ptr [ecx + 0x10]
// 00649a28  d84a1c               fmul dword ptr [edx + 0x1c]
// 00649a2b  dec1                 faddp st(1)
// 00649a2d  d94114               fld dword ptr [ecx + 0x14]
// 00649a30  d84a20               fmul dword ptr [edx + 0x20]
// 00649a33  dec1                 faddp st(1)
// 00649a35  d8422c               fadd dword ptr [edx + 0x2c]
// 00649a38  d9ca                 fxch st(2)
// 00649a3a  d9580c               fstp dword ptr [eax + 0xc]
// 00649a3d  d95810               fstp dword ptr [eax + 0x10]
// 00649a40  d95814               fstp dword ptr [eax + 0x14]
// 00649a43  d94118               fld dword ptr [ecx + 0x18]
// 00649a46  d80a                 fmul dword ptr [edx]
// 00649a48  d9411c               fld dword ptr [ecx + 0x1c]
// 00649a4b  d84a04               fmul dword ptr [edx + 4]
// 00649a4e  dec1                 faddp st(1)
// 00649a50  d94120               fld dword ptr [ecx + 0x20]
// 00649a53  d84a08               fmul dword ptr [edx + 8]
// 00649a56  dec1                 faddp st(1)
// 00649a58  d84224               fadd dword ptr [edx + 0x24]
// 00649a5b  d94118               fld dword ptr [ecx + 0x18]
// 00649a5e  d84a0c               fmul dword ptr [edx + 0xc]
// 00649a61  d94214               fld dword ptr [edx + 0x14]
// 00649a64  d84920               fmul dword ptr [ecx + 0x20]
// 00649a67  dec1                 faddp st(1)
// 00649a69  d94210               fld dword ptr [edx + 0x10]
// 00649a6c  d8491c               fmul dword ptr [ecx + 0x1c]
// 00649a6f  dec1                 faddp st(1)
// 00649a71  d84228               fadd dword ptr [edx + 0x28]
// 00649a74  d94118               fld dword ptr [ecx + 0x18]
// 00649a77  d84a18               fmul dword ptr [edx + 0x18]
// 00649a7a  d9411c               fld dword ptr [ecx + 0x1c]
// 00649a7d  d84a1c               fmul dword ptr [edx + 0x1c]
// 00649a80  dec1                 faddp st(1)
// 00649a82  d94120               fld dword ptr [ecx + 0x20]
// 00649a85  d84a20               fmul dword ptr [edx + 0x20]
// 00649a88  dec1                 faddp st(1)
// 00649a8a  d8422c               fadd dword ptr [edx + 0x2c]
// 00649a8d  d9ca                 fxch st(2)
// 00649a8f  d95818               fstp dword ptr [eax + 0x18]
// 00649a92  d9581c               fstp dword ptr [eax + 0x1c]
// 00649a95  d95820               fstp dword ptr [eax + 0x20]
// 00649a98  d94124               fld dword ptr [ecx + 0x24]
// 00649a9b  d80a                 fmul dword ptr [edx]
// 00649a9d  d94128               fld dword ptr [ecx + 0x28]
// 00649aa0  d84a04               fmul dword ptr [edx + 4]
// 00649aa3  dec1                 faddp st(1)
// 00649aa5  d9412c               fld dword ptr [ecx + 0x2c]
// 00649aa8  d84a08               fmul dword ptr [edx + 8]
// 00649aab  dec1                 faddp st(1)
// 00649aad  d84224               fadd dword ptr [edx + 0x24]
// 00649ab0  d94124               fld dword ptr [ecx + 0x24]
// 00649ab3  d84a0c               fmul dword ptr [edx + 0xc]
// 00649ab6  d94214               fld dword ptr [edx + 0x14]
// 00649ab9  d8492c               fmul dword ptr [ecx + 0x2c]
// 00649abc  dec1                 faddp st(1)
// 00649abe  d94210               fld dword ptr [edx + 0x10]
// 00649ac1  d84928               fmul dword ptr [ecx + 0x28]
// 00649ac4  dec1                 faddp st(1)
// 00649ac6  d84228               fadd dword ptr [edx + 0x28]
// 00649ac9  d94124               fld dword ptr [ecx + 0x24]
// 00649acc  d84a18               fmul dword ptr [edx + 0x18]
// 00649acf  d94128               fld dword ptr [ecx + 0x28]
// 00649ad2  d84a1c               fmul dword ptr [edx + 0x1c]
// 00649ad5  dec1                 faddp st(1)
// 00649ad7  d9412c               fld dword ptr [ecx + 0x2c]
// 00649ada  d84a20               fmul dword ptr [edx + 0x20]
// 00649add  dec1                 faddp st(1)
// 00649adf  d8422c               fadd dword ptr [edx + 0x2c]
// 00649ae2  d9ca                 fxch st(2)
// 00649ae4  d95824               fstp dword ptr [eax + 0x24]
// 00649ae7  d95828               fstp dword ptr [eax + 0x28]
// 00649aea  d9582c               fstp dword ptr [eax + 0x2c]
// 00649aed  c20800               ret 8
// library rbxgs-dll/util\Face.cpp (function ?toWorldSpace@Face@RBX@@QBE?AV12@ABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Face.cpp
