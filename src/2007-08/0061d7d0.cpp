// from server: 62% by colin
struct ChatOutput {
    char pad0[0xfc];
    int field_fc;
    int field_100;
    int field_104;
    int field_108;
    void func(int a, int b);
};

extern "C" int __stdcall sub_432530(int, int);
extern "C" int __stdcall sub_57aa50(int, int, int);
extern "C" int __stdcall sub_450ec0(int);
extern "C" int __stdcall sub_40e750(int);
extern "C" int __stdcall sub_423240(int, int);

void ChatOutput::func(int a, int b)
{
    int* p1;
    int* p2;
    int v1;
    int v2;

    if (this) {
        p1 = &this->field_100;
    } else {
        p1 = 0;
    }
    if (this->field_104) {
        sub_432530((int)((char*)this->field_104 + 0xe8), (int)p1);
    }

    if (this) {
        p2 = &this->field_fc;
    } else {
        p2 = 0;
    }
    if (this->field_108) {
        sub_432530((int)((char*)this->field_108 + 0xe8), (int)p2);
    }

    sub_57aa50((int)this, a, b);

    if (b) {
        v1 = sub_450ec0(b);
    } else {
        v1 = 0;
    }
    this->field_104 = v1;

    if (b) {
        v2 = sub_40e750(b);
    } else {
        v2 = 0;
    }
    this->field_108 = v2;

    if (this->field_104) {
        sub_423240((int)((char*)this->field_104 + 0xe8), (int)&this->field_100);
    }
    if (this->field_108) {
        sub_423240((int)((char*)this->field_108 + 0xe8), (int)&this->field_fc);
    }
}
