// from server: 74% by colin
struct PartInstance {
    char pad_0[4];
    int field_4;

    void func(int arg);
};

extern "C" void __stdcall sub_564880(void* a, void* b);

void PartInstance::func(int arg)
{
    void* p;
    if (this != 0) {
        p = (char*)this + 4;
    } else {
        p = 0;
    }
    void* local[2];
    local[0] = p;
    local[1] = (void*)0x8c2958;
    sub_564880(local, &arg);
}
