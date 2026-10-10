// from server: 50% by colin
struct std_string {
    void construct(const std_string&);
};

extern "C" void __stdcall sub_556720(void*, const std_string*);
extern "C" void* __stdcall sub_77e69c();

struct EquationDisplay {
    char pad0[0x140];
    int field_140;
    char pad144[0x144];
    std_string equation;

    EquationDisplay(const std_string& title, const std_string& equation);
};

EquationDisplay::EquationDisplay(const std_string& title, const std_string& equation)
{
    sub_556720(this, &title);
    this->field_140 = 0;
    *(int*)((char*)this + 0x00) = 0x7c4674;
    *(int*)((char*)this + 0x04) = 0x7c466c;
    *(int*)((char*)this + 0x10) = 0x7c4664;
    *(int*)((char*)this + 0x14) = 0x7c4654;
    *(int*)((char*)this + 0x2c) = 0x7c4644;
    *(int*)((char*)this + 0x44) = 0x7c4634;
    *(int*)((char*)this + 0x5c) = 0x7c4624;
    *(int*)((char*)this + 0x74) = 0x7c4614;
    *(int*)((char*)this + 0x8c) = 0x7c4604;
    *(int*)((char*)this + 0xe8) = 0x7c45fc;
    this->field_140 = *(int*)&equation;
    sub_77e69c();
}
