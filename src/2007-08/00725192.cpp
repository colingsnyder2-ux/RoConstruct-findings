// from server: 93% by colin
struct CXTIconHandle {
    void* field_0;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    int field_14;
    short field_18;
    short field_1a;
    CXTIconHandle* construct(void* arg);
};

CXTIconHandle* CXTIconHandle::construct(void* arg)
{
    field_4 = arg;
    field_0 = (void*)0x7e50e4;
    field_14 = 2;
    field_c = 0;
    field_10 = 0;
    field_18 = 0;
    field_1a = 0;
    field_8 = this;
    return this;
}
