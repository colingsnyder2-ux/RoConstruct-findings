// from server: 46% by colin
struct B_func_0069f160 {
    virtual ~B_func_0069f160();
};

struct Sub_0069f160 {
    char pad[0x440];
    B_func_0069f160 field_440;
    B_func_0069f160 field_448;
    B_func_0069f160 field_450;
    B_func_0069f160 field_458;
    B_func_0069f160 field_460;
};

struct CXTPWhidbeyTheme {
    void* vtable;
    char pad[0x43c];
    B_func_0069f160 field_440;
    B_func_0069f160 field_448;
    B_func_0069f160 field_450;
    B_func_0069f160 field_458;
    B_func_0069f160 field_460;
    void base_dtor();
    CXTPWhidbeyTheme();
};

void CXTPWhidbeyTheme::base_dtor()
{
    this->field_440.~B_func_0069f160();
    this->field_448.~B_func_0069f160();
    this->field_450.~B_func_0069f160();
    this->field_458.~B_func_0069f160();
    this->field_460.~B_func_0069f160();
}

CXTPWhidbeyTheme::CXTPWhidbeyTheme()
{
    this->vtable = (void*)0x7d71bc;
    this->field_460.~B_func_0069f160();
    this->field_458.~B_func_0069f160();
    this->field_450.~B_func_0069f160();
    this->field_448.~B_func_0069f160();
    this->field_440.~B_func_0069f160();
    this->base_dtor();
}
