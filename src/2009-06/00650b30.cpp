// roc 2009-06 00650b30  unit: RBX::VExplosion::?$EventDesc  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00650b30
//
// 00650b30  d9ee                 fldz 
// 00650b32  dc5108               fcom qword ptr [ecx + 8]
// 00650b35  dfe0                 fnstsw ax
// 00650b37  f6c405               test ah, 5
// 00650b3a  7a08                 jp 0x650b44
// 00650b3c  ddd8                 fstp st(0)
// 00650b3e  db4110               fild dword ptr [ecx + 0x10]
// 00650b41  dc7108               fdiv qword ptr [ecx + 8]
// 00650b44  c3                   ret 
// copied from an identical function in another client (function ?getActualFPS@Profiler@Profiling@RBX@@QBENXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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