// from server: 63% by atomic.potato
struct CDataModelPropGrid
{
    void f(int);
    void Update();
    char padding[0xf8];
    unsigned char field_0xf8;
};

void CDataModelPropGrid::Update()
{
    f(field_0xf8 == 0);
}
