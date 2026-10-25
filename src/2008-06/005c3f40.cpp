// from server: 100% by tester
// roc 2008-06 005c3f40  unit: RBX::Profiling::Profiler  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3f40
//
// 005c3f40  d9ee                 fldz 
// 005c3f42  dc5108               fcom qword ptr [ecx + 8]
// 005c3f45  dfe0                 fnstsw ax
// 005c3f47  f6c405               test ah, 5
// 005c3f4a  7a08                 jp 0x5c3f54
// 005c3f4c  ddd8                 fstp st(0)
// 005c3f4e  db4110               fild dword ptr [ecx + 0x10]
// 005c3f51  dc7108               fdiv qword ptr [ecx + 8]
// 005c3f54  c3                   ret 

namespace RBX {
namespace Profiling {
class Profiler
{
    double lastSampleTime;
    double sampleTimeSpan;
    int frames;
public:
    double getActualFPS() const;
};

double Profiler::getActualFPS() const
{
    return sampleTimeSpan > 0.0 ? frames / sampleTimeSpan : 0.0;
}
}
}
