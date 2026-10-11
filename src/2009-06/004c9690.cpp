// from server: 59% by atomic.potato
struct VPlayersRefPropDescriptor {
    char pad[0x1c];
    void* field_1c;
    void SetValue(int, int);
};

extern "C" void* __cdecl sub_4C01C0(void*);

void VPlayersRefPropDescriptor::SetValue(int a, int b)
{
    void* v;
    if (b != 0) {
        v = sub_4C01C0((void*)b);
    } else {
        v = 0;
    }
    void** p = (void**)field_1c;
    void* f = *p;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)f + 0xc);
    fn(field_1c, &v, (void*)a);
}
