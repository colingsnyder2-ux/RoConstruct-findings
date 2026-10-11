// from server: 74% by atomic.potato
extern "C" int __stdcall G1_func_00495e60(void*, int);
extern "C" void __stdcall G2_func_005083d0();

extern double g_8190b8;

struct InsertModelFromRobloxVerb
{
    char pad[0x10];
    void* field10;
    char pad2[0x4];
    double field18;

    bool f();
};

bool InsertModelFromRobloxVerb::f()
{
    G2_func_005083d0();
    if (this->field18 + g_8190b8 < 0.0)
    {
        return false;
    }
    return G1_func_00495e60(this->field10, 1) == 0;
}
