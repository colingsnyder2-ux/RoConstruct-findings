// from server: 95% by colin
extern "C" void (__stdcall *free)(void*);

struct SpawnLocation {
    char pad[0x2b4];
    void* field_2b4;
    void* field_2b8;
    SpawnLocation* method(int arg);
};

void sub_5a1410();

SpawnLocation* SpawnLocation::method(int arg) {
    void* p;
    void* q;

    sub_5a1410();

    p = field_2b8;
    field_2b4 = (void*)0x7a4cac;
    q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 0x2b8) = (void*)0x7a4ca4;

    if (arg & 1) {
        free(this);
    }
    return this;
}
