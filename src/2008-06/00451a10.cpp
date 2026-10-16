// from server: 42% by colin
struct VerbBinder {
    char pad[0x54];
    void* map;
    void bind(void* a, void* b);
};

extern "C" void* __stdcall sub_554270();
extern "C" void* __stdcall sub_5644a0(void* map, void** key);

void VerbBinder::bind(void* a, void* b)
{
    void* v;
    if (a) {
        v = *(void**)((char*)a + 4);
    } else {
        v = sub_554270();
    }
    void* key = b;
    void** slot = (void**)sub_5644a0((char*)this + 0x54, &key);
    *slot = v;
}
