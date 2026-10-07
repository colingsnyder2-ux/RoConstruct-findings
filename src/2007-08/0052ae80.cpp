// roc 2007-08 0052ae80  unit: seg_00520000  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ae80
//
// 0052ae80  83ec18               sub esp, 0x18
// 0052ae83  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052ae87  d900                 fld dword ptr [eax]
// 0052ae89  56                   push esi
// 0052ae8a  8bf1                 mov esi, ecx
// 0052ae8c  d86604               fsub dword ptr [esi + 4]
// 0052ae8f  d95c2404             fstp dword ptr [esp + 4]
// 0052ae93  d94004               fld dword ptr [eax + 4]
// 0052ae96  d86608               fsub dword ptr [esi + 8]
// 0052ae99  d95c2408             fstp dword ptr [esp + 8]
// 0052ae9d  d94008               fld dword ptr [eax + 8]
// 0052aea0  d8660c               fsub dword ptr [esi + 0xc]
// 0052aea3  d95c240c             fstp dword ptr [esp + 0xc]
// 0052aea7  d94614               fld dword ptr [esi + 0x14]
// 0052aeaa  d9442408             fld dword ptr [esp + 8]
// 0052aeae  d9c0                 fld st(0)
// 0052aeb0  deca                 fmulp st(2)
// 0052aeb2  d94610               fld dword ptr [esi + 0x10]
// 0052aeb5  d9442404             fld dword ptr [esp + 4]
// 0052aeb9  d9c0                 fld st(0)
// 0052aebb  deca                 fmulp st(2)
// 0052aebd  d9cb                 fxch st(3)
// 0052aebf  dec1                 faddp st(1)
// 0052aec1  d94618               fld dword ptr [esi + 0x18]
// 0052aec4  d944240c             fld dword ptr [esp + 0xc]
// 0052aec8  d9c0                 fld st(0)
// 0052aeca  deca                 fmulp st(2)
// 0052aecc  d9ca                 fxch st(2)
// 0052aece  dec1                 faddp st(1)
// 0052aed0  d95c2424             fstp dword ptr [esp + 0x24]
// 0052aed4  d9ee                 fldz 
// 0052aed6  d9442424             fld dword ptr [esp + 0x24]
// 0052aeda  d8d1                 fcom st(1)
// 0052aedc  dfe0                 fnstsw ax
// 0052aede  ddd9                 fstp st(1)
// 0052aee0  f6c401               test ah, 1
// 0052aee3  0f85a6000000         jne 0x52af8f
// 0052aee9  d94614               fld dword ptr [esi + 0x14]
// 0052aeec  d94610               fld dword ptr [esi + 0x10]
// 0052aeef  d94618               fld dword ptr [esi + 0x18]
// 0052aef2  dd5c2404             fstp qword ptr [esp + 4]
// 0052aef6  dcc8                 fmul st(0), st(0)
// 0052aef8  d9c1                 fld st(1)
// 0052aefa  deca                 fmulp st(2)
// 0052aefc  dec1                 faddp st(1)
// 0052aefe  dd442404             fld qword ptr [esp + 4]
// 0052af02  dcc8                 fmul st(0), st(0)
// 0052af04  dec1                 faddp st(1)
// 0052af06  d95c2424             fstp dword ptr [esp + 0x24]
// 0052af0a  d9442424             fld dword ptr [esp + 0x24]
// 0052af0e  d8d9                 fcomp st(1)
// 0052af10  dfe0                 fnstsw ax
// 0052af12  f6c401               test ah, 1
// 0052af15  7578                 jne 0x52af8f
// 0052af17  ddda                 fstp st(2)
// 0052af19  51                   push ecx
// 0052af1a  ddda                 fstp st(2)
// 0052af1c  8d442414             lea eax, [esp + 0x14]
// 0052af20  ddd9                 fstp st(1)
// 0052af22  8d4c2408             lea ecx, [esp + 8]
// 0052af26  d94614               fld dword ptr [esi + 0x14]
// 0052af29  d94610               fld dword ptr [esi + 0x10]
// 0052af2c  d94618               fld dword ptr [esi + 0x18]
// 0052af2f  d9c1                 fld st(1)
// 0052af31  deca                 fmulp st(2)
// 0052af33  d9c2                 fld st(2)
// 0052af35  decb                 fmulp st(3)
// 0052af37  d9c9                 fxch st(1)
// 0052af39  dec2                 faddp st(2)
// 0052af3b  dcc8                 fmul st(0), st(0)
// 0052af3d  dec1                 faddp st(1)
// 0052af3f  d95c2428             fstp dword ptr [esp + 0x28]
// 0052af43  d94610               fld dword ptr [esi + 0x10]
// 0052af46  d8c9                 fmul st(1)
// 0052af48  d95c2408             fstp dword ptr [esp + 8]
// 0052af4c  d94614               fld dword ptr [esi + 0x14]
// 0052af4f  d8c9                 fmul st(1)
// 0052af51  d95c240c             fstp dword ptr [esp + 0xc]
// 0052af55  d84e18               fmul dword ptr [esi + 0x18]
// 0052af58  d95c2410             fstp dword ptr [esp + 0x10]
// 0052af5c  d9442428             fld dword ptr [esp + 0x28]
// 0052af60  d91c24               fstp dword ptr [esp]
// 0052af63  50                   push eax
// 0052af64  e8c746feff           call 0x50f630
// 0052af69  d900                 fld dword ptr [eax]
// 0052af6b  d84604               fadd dword ptr [esi + 4]
// 0052af6e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052af72  d919                 fstp dword ptr [ecx]
// 0052af74  d94004               fld dword ptr [eax + 4]
// 0052af77  d84608               fadd dword ptr [esi + 8]
// 0052af7a  d95904               fstp dword ptr [ecx + 4]
// 0052af7d  d94008               fld dword ptr [eax + 8]
// 0052af80  8bc1                 mov eax, ecx
// 0052af82  d8460c               fadd dword ptr [esi + 0xc]
// 0052af85  5e                   pop esi
// 0052af86  d95908               fstp dword ptr [ecx + 8]
// 0052af89  83c418               add esp, 0x18
// 0052af8c  c20800               ret 8
// 0052af8f  ddd8                 fstp st(0)
// 0052af91  d9c2                 fld st(2)
// 0052af93  d86610               fsub dword ptr [esi + 0x10]
// 0052af96  d95c2404             fstp dword ptr [esp + 4]
// 0052af9a  d9c1                 fld st(1)
// 0052af9c  d86614               fsub dword ptr [esi + 0x14]
// 0052af9f  d95c2408             fstp dword ptr [esp + 8]
// 0052afa3  d9c0                 fld st(0)
// 0052afa5  d86618               fsub dword ptr [esi + 0x18]
// 0052afa8  d95c240c             fstp dword ptr [esp + 0xc]
// 0052afac  d9442408             fld dword ptr [esp + 8]
// 0052afb0  d9442404             fld dword ptr [esp + 4]
// 0052afb4  d944240c             fld dword ptr [esp + 0xc]
// 0052afb8  d9c5                 fld st(5)
// 0052afba  dece                 fmulp st(6)
// 0052afbc  d9c4                 fld st(4)
// 0052afbe  decd                 fmulp st(5)
// 0052afc0  d9cd                 fxch st(5)
// 0052afc2  dec4                 faddp st(4)
// 0052afc4  d9c2                 fld st(2)
// 0052afc6  decb                 fmulp st(3)
// 0052afc8  d9cb                 fxch st(3)
// 0052afca  dec2                 faddp st(2)
// 0052afcc  d9c9                 fxch st(1)
// 0052afce  d95c2424             fstp dword ptr [esp + 0x24]
// 0052afd2  d9442424             fld dword ptr [esp + 0x24]
// 0052afd6  d9c2                 fld st(2)
// 0052afd8  decb                 fmulp st(3)
// 0052afda  d9c1                 fld st(1)
// 0052afdc  deca                 fmulp st(2)
// 0052afde  d9ca                 fxch st(2)
// 0052afe0  dec1                 faddp st(1)
// 0052afe2  d9c2                 fld st(2)
// 0052afe4  decb                 fmulp st(3)
// 0052afe6  dec2                 faddp st(2)
// 0052afe8  d9c9                 fxch st(1)
// 0052afea  d95c2424             fstp dword ptr [esp + 0x24]
// 0052afee  d9442424             fld dword ptr [esp + 0x24]
// 0052aff2  ded9                 fcompp 
// 0052aff4  dfe0                 fnstsw ax
// 0052aff6  f6c441               test ah, 0x41
// 0052aff9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052affd  7518                 jne 0x52b017
// 0052afff  d94604               fld dword ptr [esi + 4]
// 0052b002  d918                 fstp dword ptr [eax]
// 0052b004  d94608               fld dword ptr [esi + 8]
// 0052b007  d95804               fstp dword ptr [eax + 4]
// 0052b00a  d9460c               fld dword ptr [esi + 0xc]
// 0052b00d  5e                   pop esi
// 0052b00e  d95808               fstp dword ptr [eax + 8]
// 0052b011  83c418               add esp, 0x18
// 0052b014  c20800               ret 8
// 0052b017  d94610               fld dword ptr [esi + 0x10]
// 0052b01a  d84604               fadd dword ptr [esi + 4]
// 0052b01d  d918                 fstp dword ptr [eax]
// 0052b01f  d94614               fld dword ptr [esi + 0x14]
// 0052b022  d84608               fadd dword ptr [esi + 8]
// 0052b025  d95804               fstp dword ptr [eax + 4]
// 0052b028  d94618               fld dword ptr [esi + 0x18]
// 0052b02b  d8460c               fadd dword ptr [esi + 0xc]
// 0052b02e  5e                   pop esi
// 0052b02f  d95808               fstp dword ptr [eax + 8]
// 0052b032  83c418               add esp, 0x18
// 0052b035  c20800               ret 8
// library g3d-6.09/G3Dcpp\LineSegment.cpp (function ?closestPoint@LineSegment@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/LineSegment.cpp
