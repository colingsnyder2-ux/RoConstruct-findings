// from server: 100% by tester
// roc 2008-06 005c3f20  unit: RBX::Profiling::Profiler  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3f20
//
// 005c3f20  d9ee                 fldz 
// 005c3f22  dc11                 fcom qword ptr [ecx]
// 005c3f24  dfe0                 fnstsw ax
// 005c3f26  f6c405               test ah, 5
// 005c3f29  7a07                 jp 0x5c3f32
// 005c3f2b  ddd8                 fstp st(0)
// 005c3f2d  db4110               fild dword ptr [ecx + 0x10]
// 005c3f30  dc31                 fdiv qword ptr [ecx]
// 005c3f32  c3                   ret 

namespace RBX {
namespace Profiling {
class Bucket
{
    double sampleTimeSpan;
    char gap8[0x8];
    int frames;
public:
    double getActualFPS() const;
};

double Bucket::getActualFPS() const
{
    return sampleTimeSpan > 0.0 ? frames / sampleTimeSpan : 0.0;
}
}
}
