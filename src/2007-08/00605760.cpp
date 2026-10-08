// from server: 87% by colin
// roc 2007-08 00605760  unit: RBX::SleepStage  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00605760
//
// 00605760  83ec08               sub esp, 8
// 00605763  53                   push ebx
// 00605764  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 00605767  56                   push esi
// 00605768  57                   push edi
// 00605769  8d712c               lea esi, [ecx + 0x2c]
// 0060576c  8d442418             lea eax, [esp + 0x18]
// 00605770  50                   push eax
// 00605771  8d4c2410             lea ecx, [esp + 0x10]
// 00605775  51                   push ecx
// 00605776  8bce                 mov ecx, esi
// 00605778  e883aaf6ff           call 0x570200
// 0060577d  8bf8                 mov edi, eax
// 0060577f  8b07                 mov eax, dword ptr [edi]
// 00605781  85c0                 test eax, eax
// 00605783  7404                 je 0x605789
// 00605785  3bc6                 cmp eax, esi
// 00605787  7406                 je 0x60578f
// 00605789  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060578f  33c0                 xor eax, eax
// 00605791  395f04               cmp dword ptr [edi + 4], ebx
// 00605794  5f                   pop edi
// 00605795  5e                   pop esi
// 00605796  0f95c0               setne al
// 00605799  5b                   pop ebx
// 0060579a  83c408               add esp, 8
// 0060579d  c20400               ret 4

struct Assembly;

struct SleepStage {
    char pad0[0x2c];
    void* m_set;      // 0x2c
    int m_value;      // 0x30
    bool f(void* arg);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void* __stdcall sub_570200(void* self, void** out1, void** out2);

bool SleepStage::f(void* arg)
{
    void* local1;
    void* local2;
    int saved = m_value;
    void* node = sub_570200(&m_set, &local1, &local2);
    void* p = *(void**)node;
    if (p != 0 && p != &m_set) {
        _invalid_parameter_noinfo();
    }
    return *(int*)((char*)node + 4) != saved;
}
