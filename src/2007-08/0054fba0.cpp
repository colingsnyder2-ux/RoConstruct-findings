// from server: 61% by colin
struct StreamBuffer {
    void* vtable;
    char pad[0x38];
    char flag3c;
    char pad2[0x53];
    int field90;
    char pad3[8];
    int field9c;

    void Init(int a, int b, int c);
};

extern "C" void __stdcall sub_54AEB0(int* p, int value);
extern "C" void __stdcall sub_54D2B0(void* p, int value);
extern "C" void __stdcall sub_54E730(void* p, void* value);
extern "C" void __stdcall sub_54B960(void* p);

void StreamBuffer::Init(int a, int b, int c)
{
    int local;
    int* p;

    if (a == -1)
        a = 0x80;
    else if (a != 0)
        sub_54AEB0(&this->field90, a);

    (*(void (__thiscall**)(StreamBuffer*))(*(int*)this + 0x58))(this);

    sub_54D2B0(&local, b);
    sub_54E730((char*)this + 0x40, &local);
    sub_54B960(&local);

    this->field9c |= 1;
    this->flag3c = 0;
    if (a > 1)
        this->field9c |= 8;
}
