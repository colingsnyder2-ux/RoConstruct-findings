// from server: 20% by atomic.potato
struct UploadVideoVerb
{
    char pad0[4];
    char field4[0x1c];
    char field20[0x1c];
    void f();
};

extern "C" void __stdcall sub_b2263c();

void UploadVideoVerb::f()
{
    sub_b2263c();
    sub_b2263c();
}
