// roc 2009-06 004696f0  unit: CTaskSchedulerPaneView  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004696f0
//
// 004696f0  8b542408             mov edx, dword ptr [esp + 8]
// 004696f4  d902                 fld dword ptr [edx]
// 004696f6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004696fa  d919                 fstp dword ptr [ecx]
// 004696fc  d94204               fld dword ptr [edx + 4]
// 004696ff  d95904               fstp dword ptr [ecx + 4]
// 00469702  d902                 fld dword ptr [edx]
// 00469704  d9ee                 fldz 
// 00469706  d8d1                 fcom st(1)
// 00469708  dfe0                 fnstsw ax
// 0046970a  d9e8                 fld1 
// 0046970c  d90594758b00         fld dword ptr [0x8b7594]
// 00469712  f6c405               test ah, 5
// 00469715  7a06                 jp 0x46971d
// 00469717  dddb                 fstp st(3)
// 00469719  d9c0                 fld st(0)
// 0046971b  eb11                 jmp 0x46972e
// 0046971d  d9cb                 fxch st(3)
// 0046971f  d8da                 fcomp st(2)
// 00469721  dfe0                 fnstsw ax
// 00469723  f6c405               test ah, 5
// 00469726  7a04                 jp 0x46972c
// 00469728  d9c2                 fld st(2)
// 0046972a  eb02                 jmp 0x46972e
// 0046972c  d9c1                 fld st(1)
// 0046972e  db44240c             fild dword ptr [esp + 0xc]
// 00469732  d9c0                 fld st(0)
// 00469734  deca                 fmulp st(2)
// 00469736  d9c9                 fxch st(1)
// 00469738  d801                 fadd dword ptr [ecx]
// 0046973a  d919                 fstp dword ptr [ecx]
// 0046973c  d94204               fld dword ptr [edx + 4]
// 0046973f  d8d3                 fcom st(3)
// 00469741  dfe0                 fnstsw ax
// 00469743  f6c441               test ah, 0x41
// 00469746  7511                 jne 0x469759
// 00469748  dddb                 fstp st(3)
// 0046974a  8bc1                 mov eax, ecx
// 0046974c  ddda                 fstp st(2)
// 0046974e  ddda                 fstp st(2)
// 00469750  dec9                 fmulp st(1)
// 00469752  d84104               fadd dword ptr [ecx + 4]
// 00469755  d95904               fstp dword ptr [ecx + 4]
// 00469758  c3                   ret 
// 00469759  ddda                 fstp st(2)
// 0046975b  d9c9                 fxch st(1)
// 0046975d  d8da                 fcomp st(2)
// 0046975f  dfe0                 fnstsw ax
// 00469761  f6c405               test ah, 5
// 00469764  7a0d                 jp 0x469773
// 00469766  ddd9                 fstp st(1)
// 00469768  8bc1                 mov eax, ecx
// 0046976a  dec9                 fmulp st(1)
// 0046976c  d84104               fadd dword ptr [ecx + 4]
// 0046976f  d95904               fstp dword ptr [ecx + 4]
// 00469772  c3                   ret 
// 00469773  ddda                 fstp st(2)
// 00469775  8bc1                 mov eax, ecx
// 00469777  d9c9                 fxch st(1)
// 00469779  dec9                 fmulp st(1)
// 0046977b  d84104               fadd dword ptr [ecx + 4]
// 0046977e  d95904               fstp dword ptr [ecx + 4]
// 00469781  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YA?AUVector2@@ABU1@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vector2 { volatile float x, y; Vector2(const Vector2& o) : x(o.x), y(o.y) {} };
Vector2 func_004672e0(const Vector2& v, int amount)
{
    Vector2 result = v;
    float x = v.x;
    result.x += (x > 0.0f ? 1.0f : (x < 0.0f ? -1.0f : 0.0f)) * amount;
    float y = v.y;
    result.y += (y > 0.0f ? 1.0f : (y < 0.0f ? -1.0f : 0.0f)) * amount;
    return result;
}