// from server: 35% by colin
struct EventDataBase {
    void* vtable;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    unsigned long field1C;
    unsigned long field20;
    EventDataBase();
};

extern "C" void* __stdcall sub_6A0920(int);
extern "C" unsigned long __stdcall GetCurrentThreadId();
extern "C" void* __cdecl sub_432CE0();

EventDataBase::EventDataBase()
{
    this->vtable = (void*)0x80F86C;
    void* p = sub_6A0920(4);
    if (p != 0) {
        *(void**)p = &this->field4;
    } else {
        p = 0;
    }
    this->field4 = p;
    this->fieldC = 0;
    this->field10 = 0;
    this->field14 = 0;
    this->field1C = GetCurrentThreadId();
    this->field20 = (unsigned long)sub_432CE0();
}
