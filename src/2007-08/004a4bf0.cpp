// from server: 49% by colin
struct GlobalSettingsItem {
    char pad0[0xec];
    float f_ec;
    float f_f0;
    char pad_f4[4];
    int i_f8;
    float f_fc;
    float f_100;
    int i_104;
    int i_108;
    int i_10c;
    GlobalSettingsItem();
};

struct String {
    char buf[0x10];
    String(const char*);
    ~String();
};

extern "C" {
    void __stdcall sub_77e698();
    void __stdcall sub_77e6ac();
}

extern float dword_797E9C;
extern float dword_787054;
extern float dword_79D078;

void sub_4a4ad0();
void sub_541bf0();

GlobalSettingsItem::GlobalSettingsItem()
{
    sub_4a4ad0();
    this->f_ec = 1.0f;
    this->f_f0 = dword_797E9C;
    this->f_fc = dword_787054;
    this->f_100 = dword_79D078;
    this->i_f8 = 4;
    this->i_104 = 0;
    this->i_108 = 0;
    this->i_10c = 0;
    String s("Network");
    sub_77e698();
    sub_541bf0();
    sub_77e6ac();
}
