// from server: 26% by colin
struct JointsService {
    void* vtable;
    char pad[0x150];
};

extern "C" void* __stdcall malloc(unsigned int size);
extern "C" void __stdcall sub_5E4B90(void* mem, void* arg);
extern "C" void __stdcall sub_4B2CC0(void* self, void* a, void* b);

JointsService* __fastcall JointsService_create(void* self, void* unused, void* arg)
{
    void* mem = malloc(0x154);
    void* obj = 0;
    if (mem != 0) {
        sub_5E4B90(mem, arg);
        obj = mem;
    }
    sub_4B2CC0(self, obj, 0);
    return (JointsService*)self;
}
