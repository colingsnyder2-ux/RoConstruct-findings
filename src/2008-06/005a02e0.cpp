// from server: 100% by king_originala
// roc 2008-06 005a02e0  unit: RBX::Workspace  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a02e0
//
// 005a02e0  dd0540f69400         fld qword ptr [0x94f640]
// 005a02e6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a02ea  83ec18               sub esp, 0x18
// 005a02ed  83ec08               sub esp, 8
// 005a02f0  8d442408             lea eax, [esp + 8]
// 005a02f4  dd1c24               fstp qword ptr [esp]
// 005a02f7  50                   push eax
// 005a02f8  e8233e0200           call 0x5c4120
// 005a02fd  8bc8                 mov ecx, eax
// 005a02ff  e81c3c0200           call 0x5c3f20
// 005a0304  83c418               add esp, 0x18
// 005a0307  c3                   ret 

extern double sampleInterval;

namespace RBX {
namespace Profiling {

class Bucket
{
    double sampleTimeSpan;
    char gap8[8];
    int frames;
public:
    double getActualFPS() const;
};

class Profiler
{
public:
    Bucket getBucket(double interval);
};

}
}

double getActualFPS(RBX::Profiling::Profiler* profiler)
{
    return profiler->getBucket(sampleInterval).getActualFPS();
}
