// from server: 33% by colin
struct EventData
{
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;

    void method();
};

extern "C" void __cdecl sub_004574B0(void*);
extern "C" void __cdecl sub_004116F0(void*, void*);

void EventData::method()
{
    if (fieldC)
    {
        sub_004574B0(this);
        sub_004116F0(&field10, &field10);
        void** vtable = *(void***)fieldC;
        void (*fn)(void*, void*) = (void (*)(void*, void*))vtable[2];
        fn(fieldC, field4);
    }
}
