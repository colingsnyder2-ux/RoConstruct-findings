// from server: 100% by king_originala
// roc 2008-06 005d1370  unit: RBX::HopperBin  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1370
//
// 005d1370  51                   push ecx
// 005d1371  56                   push esi
// 005d1372  8bf1                 mov esi, ecx
// 005d1374  80bea401000000       cmp byte ptr [esi + 0x1a4], 0
// 005d137b  7447                 je 0x5d13c4
// 005d137d  83bea001000000       cmp dword ptr [esi + 0x1a0], 0
// 005d1384  751f                 jne 0x5d13a5
// 005d1386  8d4614               lea eax, [esi + 0x14]
// 005d1389  50                   push eax
// 005d138a  b9689d9700           mov ecx, 0x979d68
// 005d138f  e88ca2f9ff           call 0x56b620
// 005d1394  85c0                 test eax, eax
// 005d1396  740d                 je 0x5d13a5
// 005d1398  8d4c2407             lea ecx, [esp + 7]
// 005d139c  51                   push ecx
// 005d139d  8d4810               lea ecx, [eax + 0x10]
// 005d13a0  e8ab45eeff           call 0x4b5950
// 005d13a5  56                   push esi
// 005d13a6  c686a401000000       mov byte ptr [esi + 0x1a4], 0
// 005d13ad  e89e0aecff           call 0x491e50
// 005d13b2  83c404               add esp, 4
// 005d13b5  85c0                 test eax, eax
// 005d13b7  740b                 je 0x5d13c4
// 005d13b9  8bc8                 mov ecx, eax
// 005d13bb  5e                   pop esi
// 005d13bc  83c404               add esp, 4
// 005d13bf  e96c13fdff           jmp 0x5a2730
// 005d13c4  5e                   pop esi
// 005d13c5  59                   pop ecx
// 005d13c6  c3                   ret 

namespace RBX {
    class Instance;
    class ServiceProvider {
    public:
        void notify();
    };
}

RBX::ServiceProvider* __cdecl func_00491e50(RBX::Instance*);

struct Signal {
    void invoke(char*);
};

struct LookupResult {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    LookupResult* find(void*);
};

extern Registry registry;

struct HopperBin {
    char padding[0x1a0];
    int state;
    bool active;

    void deactivate();
};

void HopperBin::deactivate()
{
    if (active) {
        if (state == 0) {
            LookupResult* result = registry.find((char*)this + 0x14);
            if (result) {
                char token;
                result->signal.invoke(&token);
            }
        }

        active = false;
        RBX::ServiceProvider* provider =
            func_00491e50((RBX::Instance*)this);
        if (provider)
            provider->notify();
    }
}
