// from server: 45% by colin
extern "C" {
    void __stdcall func_006305da();
    void __stdcall func_0077ddb8();
    void __stdcall func_0077ddac();
}

struct CXTPPropertyGridInplaceEdit
{
    char pad_0000[0x54];
    int field_0054;
    int field_0058;
    int field_005c;
    int field_0060;
    int field_0064;
    int field_0068;
    char field_006c;
    char pad_006d[3];
    char field_0070[4];
    char field_0074[4];
    char field_0078[4];
    char field_007c[4];
    char field_0080[4];
    char field_0084[4];
    int field_0088;

    CXTPPropertyGridInplaceEdit();
};

CXTPPropertyGridInplaceEdit::CXTPPropertyGridInplaceEdit()
{
    func_006305da();
    this->field_0054 = 0;
    this->field_0058 = 0;
    this->field_005c = 1;
    this->field_0060 = 0;
    this->field_0064 = 0;
    this->field_0068 = 0;
    this->field_006c = 0x5f;
    func_0077ddb8();
    func_0077ddb8();
    func_0077ddb8();
    func_0077ddac();
    func_0077ddb8();
    func_0077ddb8();
    this->field_0088 = 1;
}
