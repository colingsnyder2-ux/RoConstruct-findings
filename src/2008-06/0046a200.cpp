// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
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
    unsigned short zero = 0;
    unsigned int zero32 = 0;
    field0 = zero;
    field4 = zero32;
    field10 = zero32;
    field2 = 0x4E4;
    field8 = zero32;
    fieldC = zero32;
}
