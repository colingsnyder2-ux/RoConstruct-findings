// from server: 74% by tester
struct ChangePropertyItem {
    void* field0;
    void* field4;
    void Process(void* arg);
};

extern "C" void* __cdecl sub_6a17c6(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_6a158c(void*, void*);
extern "C" void* __stdcall sub_802864(void*);

void ChangePropertyItem::Process(void* arg)
{
    void* result = sub_6a17c6(field0, 0, (void*)0x9295b4, (void*)0x92fff4, 0);
    if (result == 0) {
        char buf[8];
        sub_802864((void*)0x80ba34);
        sub_6a158c((void*)0x8d362c, buf);
    }
    void* obj = *(void**)((char*)result + 0x18);
    void** vtbl = *(void***)obj;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[3];
    fn(obj, field4, arg);
}
