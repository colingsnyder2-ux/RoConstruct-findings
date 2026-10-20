// from server: 86% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client-dll roc_espeon_dragdistancelength_e5c7c8aa60a822b6.cpp

// Candidate translation unit (score above; library headers required).
#include <G3D/Vector2.h>
// from server: 83% by king_originala
// roc 2008-06 006659e0  unit: RBX::PartDragTool  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006659e0
//
// 006659e0  8b542404             mov edx, dword ptr [esp + 4]
// 006659e4  0fbf4208             movsx eax, word ptr [edx + 8]
// 006659e8  89442404             mov dword ptr [esp + 4], eax
// 006659ec  0fbf420a             movsx eax, word ptr [edx + 0xa]
// 006659f0  db442404             fild dword ptr [esp + 4]
// 006659f4  89442404             mov dword ptr [esp + 4], eax
// 006659f8  db442404             fild dword ptr [esp + 4]
// 006659fc  89542404             mov dword ptr [esp + 4], edx
// 00665a00  d9c9                 fxch st(1)
// 00665a02  d8612c               fsub dword ptr [ecx + 0x2c]
// 00665a05  d9c9                 fxch st(1)
// 00665a07  d86130               fsub dword ptr [ecx + 0x30]
// 00665a0a  d9c1                 fld st(1)
// 00665a0c  deca                 fmulp st(2)
// 00665a0e  dcc8                 fmul st(0), st(0)
// 00665a10  dec1                 faddp st(1)
// 00665a12  d9fa                 fsqrt 
// 00665a14  d81d6c6e8200         fcomp dword ptr [0x826e6c]
// 00665a1a  dfe0                 fnstsw ax
// 00665a1c  f6c441               test ah, 0x41
// 00665a1f  8b01                 mov eax, dword ptr [ecx]
// 00665a21  7505                 jne 0x665a28
// 00665a23  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00665a26  ffe2                 jmp edx
// 00665a28  8b5008               mov edx, dword ptr [eax + 8]
// 00665a2b  ffe2                 jmp edx

#pragma float_control(precise, off)

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern const float distanceThreshold;

struct Event {
    char pad[8];
    short x;
    short y;
};

struct S {
    virtual S* v0(Event*);
    virtual S* v1(Event*);
    virtual S* v2(Event*);
    virtual S* v3(Event*);
    virtual S* v4(Event*);
    virtual S* v5(Event*);
    virtual S* v6(Event*);
    virtual S* v7(Event*);

    char pad[40];
    G3D::Vector2 position;

    S* f(Event*);
};

S* S::f(Event* event)
{
    G3D::Vector2 point((float)event->x,(float)event->y);
    float distance=(point-position).length();
    if (distance > distanceThreshold)
        return v7(event);
    return v2(event);
}
