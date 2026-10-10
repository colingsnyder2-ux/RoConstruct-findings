// from server: 38% by colin
extern "C" unsigned long __stdcall GetCurrentThreadId();

struct EventDataBase {
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    unsigned long field_14;
    int field_18;
    EventDataBase();
};

int sub_433A50();

EventDataBase::EventDataBase()
{
    vtable = (void*)0x787f74;
    field_8 = 0;
    field_c = 0;
    field_10 = 0;
    field_14 = GetCurrentThreadId();
    field_18 = sub_433A50();
}
