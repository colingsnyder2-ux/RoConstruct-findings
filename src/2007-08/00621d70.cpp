// from server: 16% by colin
struct ScoreHud {
    char pad0[0x10];
    void* field10;
    char pad14[0x8];
    void* field1c;
    char pad20[0x8];
    void* field28;
    char pad2c[0x4];
    void* field30;

    void sub_621D70();
};

extern "C" void __stdcall sub_62FC62(void*);
extern "C" void __stdcall sub_40A260();
extern "C" void __stdcall sub_620AE0();
extern "C" void __stdcall sub_620A10();
extern "C" void __stdcall sub_61F920();

void ScoreHud::sub_621D70()
{
    void* p28 = this->field28;
    void* v28 = *(void**)p28;
    void* local;
    sub_620AE0();
    sub_62FC62(this->field28);
    this->field28 = 0;
    *(int*)((char*)this + 0x30) = 0;

    void* p1c = this->field1c;
    void* v1c = *(void**)p1c;
    sub_620A10();
    sub_62FC62(this->field1c);
    this->field1c = 0;
    *(int*)((char*)this + 0x24) = 0;

    void* p10 = this->field10;
    void* v10 = *(void**)p10;
    sub_61F920();
    sub_62FC62(this->field10);
    this->field10 = 0;
    *(int*)((char*)this + 0x18) = 0;

    sub_40A260();
}
