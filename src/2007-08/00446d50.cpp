// from server: 27% by colin
struct EnumDescriptor {
    void* vtable;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
};

struct EnumDesc {
    void* vtable;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;

    EnumDesc* construct(void* a, void* b, void* c, void* d);
};

extern "C" void __cdecl free(void*);
extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl unknown_62fc62(void*);
extern "C" void* __cdecl unknown_446820(void*);
extern "C" void __cdecl unknown_442d60(void);

EnumDesc* EnumDesc::construct(void* a, void* b, void* c, void* d)
{
    void* p = unknown_446820(d);
    unknown_442d60();
    unknown_62fc62(p);
    this->vtable = (void*)0x78f7cc;
    void* mem = malloc(0x18);
    if (mem) {
        *(void**)((char*)mem + 8) = c;
        *(void**)mem = (void*)0x78fbec;
        *(void**)((char*)mem + 4) = this;
        *(void**)((char*)mem + 0x10) = 0;
        *(void**)((char*)mem + 0x14) = 0;
    }
    void* old = this->field18;
    if (mem != old) {
        if (old) {
            unknown_62fc62(old);
        }
    }
    this->field18 = mem;
    return this;
}
