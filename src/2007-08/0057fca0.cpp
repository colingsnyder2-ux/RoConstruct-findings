// from server: 28% by colin
struct RBX_Stats_Item {
    void* ctor(const char*, int, int, int);
};

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __stdcall sub_0057f710(void*, int, int);
extern "C" void __stdcall sub_0057b830(void*, void*, int);

void* RBX_Stats_Item::ctor(const char* name, int attributes, int value, int index)
{
    void* mem = malloc(0x110);
    void* obj;
    if (mem == 0) {
        sub_0057f710(mem, value, index);
        obj = mem;
    } else {
        obj = 0;
    }
    sub_0057b830(this, obj, 0);
    return this;
}
