// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct MarshaledListener {
    void* vptr;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    void* field_14;
    int field_18;
    void* field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    int field_38;

    void construct(int a2, int a3, int a4, void* a5, int a6, void* a7, int a8, int a9);
};

void sub_454150(void* self, int arg);
void sub_41da00(void* p);

void MarshaledListener::construct(int a2, int a3, int a4, void* a5, int a6, void* a7, int a8, int a9)
{
    this->vptr = (void*)0x787f94;
    this->field_4 = 0;
    this->field_8 = 0;
    this->field_c = a2;
    this->field_10 = a3;
    this->field_14 = a5;
    if (a5 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)a5 + 4), 1);
    }
    this->field_18 = a6;
    this->field_1c = a7;
    if (a7 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)a7 + 4), 1);
    }
    sub_454150(this, a4);
    sub_41da00((char*)this + 0x24);
}
