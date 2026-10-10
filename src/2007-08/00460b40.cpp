// from server: 38% by colin
extern "C" unsigned long __stdcall GetCurrentThreadId();

struct MarshaledListener
{
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    unsigned long field14;
    int field18;

    MarshaledListener();
};

extern "C" int __cdecl sub_433A50();

MarshaledListener::MarshaledListener()
{
    this->vtable = (void*)0x794b74;
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    this->field14 = GetCurrentThreadId();
    this->field18 = sub_433A50();
}
