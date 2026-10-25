// from server: 100% by king_originala
// roc 2008-06 005c43d0  unit: RBX::Profiling::Profiler  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c43d0
//
// 005c43d0  8b442404             mov eax, dword ptr [esp + 4]
// 005c43d4  56                   push esi
// 005c43d5  50                   push eax
// 005c43d6  8bf1                 mov esi, ecx
// 005c43d8  e863ffffff           call 0x5c4340
// 005c43dd  c706648c8300         mov dword ptr [esi], 0x838c64
// 005c43e3  c78640c0000000000000 mov dword ptr [esi + 0xc040], 0
// 005c43ed  8bc6                 mov eax, esi
// 005c43ef  5e                   pop esi
// 005c43f0  c20400               ret 4

struct Profiler
{
    virtual void virtualFunction();
    char storage[0xc03c];

    Profiler(const char*);
};

struct DerivedProfiler : Profiler
{
    virtual void virtualFunction();
    int count;

    DerivedProfiler(const char*);
};

DerivedProfiler::DerivedProfiler(const char* name)
    : Profiler(name), count(0)
{
}
