// from server: 86% by king_originala
struct DxUserInput
{
    unsigned short field0;
    unsigned short field2;
    unsigned int field4;
    unsigned int field8;
    unsigned int fieldC;
    unsigned int field10;

    DxUserInput();
};

DxUserInput::DxUserInput()
{
    field0 = 0;
    field4 = 0;
    field10 = 0;
    field2 = 0x4E4;
    field8 = 0;
    fieldC = 0;
}
