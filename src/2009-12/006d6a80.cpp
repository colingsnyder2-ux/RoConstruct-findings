// from server: 97% by atomic.potato
struct S {
    int pad0[3];
    void* data;
    int value();
};

extern "C" void* __cdecl sub_7f5286(void*);
extern "C" int (__thiscall *global_98b768)(void*, void*);

int S::value()
{
    void* a = *(void**)((char*)this + 0x0C);
    a = *(void**)((char*)a + 0xA90);
    void* b = *(void**)((char*)a + 0x1B4);
    if (b)
        return global_98b768((void*)0xB3FF7C, sub_7f5286(b));
    return 0;
}
