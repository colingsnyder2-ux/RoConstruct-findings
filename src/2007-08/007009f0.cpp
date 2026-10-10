// from server: 18% by colin
struct CXTPTabManagerAtom {
    int field0[64];
    int field100;
    void SetType(int type);
};

void* __cdecl sub_62FEF6(unsigned int size);
void __cdecl sub_71B180(void* p);
void __cdecl sub_6AE110(void* p);
void __cdecl sub_6FFE30(void* p);
void __cdecl sub_71D3A0(void* p);
void __cdecl sub_6FFF10(void* p);
void __cdecl sub_6AD430(void* p);
void __cdecl sub_6FF8D0(CXTPTabManagerAtom* self, void* p);

void CXTPTabManagerAtom::SetType(int type)
{
    void* obj;
    field100 = type;

    if (type != 2)
    {
        obj = sub_62FEF6(0x208);
        if (obj)
        {
            sub_71B180(obj);
            *(int*)obj = 0x7da464;
        }
    }
    else if (type == 4)
    {
        obj = sub_62FEF6(0x218);
        if (obj)
            sub_6AE110(obj);
    }
    else if (type == 8)
    {
        obj = sub_62FEF6(0x218);
        if (obj)
            sub_6FFE30(obj);
    }
    else if (type == 0x10)
    {
        obj = sub_62FEF6(0x21c);
        if (obj)
            sub_71D3A0(obj);
    }
    else if (type == 0x20)
    {
        obj = sub_62FEF6(0x218);
        if (obj)
            sub_6FFF10(obj);
    }
    else
    {
        obj = sub_62FEF6(0x208);
        if (obj)
            sub_6AD430(obj);
    }

    sub_6FF8D0(this, obj);
}
