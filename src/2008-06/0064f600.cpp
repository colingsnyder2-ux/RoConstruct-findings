// from server: 2% by colin
struct RBX_ImageKeyButton {
    char pad[0x150];
    int field_150;
    void sub_5cf360();
    void sub_411540();
    ~RBX_ImageKeyButton();
};

void RBX_ImageKeyButton::sub_5cf360() {}

void RBX_ImageKeyButton::sub_411540() {}

RBX_ImageKeyButton::~RBX_ImageKeyButton()
{
    sub_5cf360();
    sub_411540();
}
