// from server: 85% by atomic.potato
struct ScreenGui
{
    int field00;
    int field04;
    int padding08[4];
    int field18;
    int field1c;
    int padding20[29];
    int field94;
    int field98;
    void Initialize();
};

extern "C" void __cdecl Function747A30(ScreenGui *);

void ScreenGui::Initialize()
{
    field00 = 0x009e505c;
    field04 = 0x009e5050;
    field18 = 0x009e5044;
    field1c = 0x009e503c;
    field94 = 0x009e502c;
    field98 = 0x009e5014;
    Function747A30(this);
}
