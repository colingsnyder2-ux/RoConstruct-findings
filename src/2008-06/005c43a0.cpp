// from server: 100% by king_originala
// roc 2008-06 005c43a0  unit: RBX::Profiling::Profiler  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c43a0
//
// 005c43a0  8b442404             mov eax, dword ptr [esp + 4]
// 005c43a4  56                   push esi
// 005c43a5  50                   push eax
// 005c43a6  8bf1                 mov esi, ecx
// 005c43a8  e893ffffff           call 0x5c4340
// 005c43ad  c7065c8c8300         mov dword ptr [esi], 0x838c5c
// 005c43b3  c78640c0000000000000 mov dword ptr [esi + 0xc040], 0
// 005c43bd  8bc6                 mov eax, esi
// 005c43bf  5e                   pop esi
// 005c43c0  c20400               ret 4

struct Base
{
    virtual void virtualFunction();
    char storage[0xc03c];

    Base(const char*);
};

struct Profiler : Base
{
    int count;

    virtual void virtualFunction();
    Profiler(const char*);
};

Profiler::Profiler(const char* name)
    : Base(name), count(0)
{
}
