// from server: 58% by colin
struct CXTPImageEditorPicture {
    char pad[0x78];
    int field_78;
    char pad2[0x04];
    int field_80;
    char pad3[0x08];
    int field_8c;
    char pad4[0x0c];
    int field_9c;
    char pad5[0x08];
    int field_a8;
    void Clear();
};

extern "C" int __stdcall sub_6e4440(int);
extern "C" int __stdcall sub_709c90(int);
extern "C" int __stdcall sub_6e4770(int, int);
extern "C" int __stdcall sub_6f2890(int);

void CXTPImageEditorPicture::Clear()
{
    while (field_a8 != 0)
    {
        int r = sub_6e4440((int)(this->pad + 0x9c));
        if (r != 0)
        {
            int* vt = *(int**)r;
            int (*fn)(int, int) = (int (*)(int, int))vt[1];
            fn(r, 1);
        }
    }

    if (field_8c > 0xf)
    {
        int r = sub_709c90((int)(this->pad + 0x80));
        if (r != 0)
        {
            int* vt = *(int**)r;
            int (*fn)(int, int) = (int (*)(int, int))vt[1];
            fn(r, 1);
        }
    }

    sub_6e4770((int)(this->pad + 0x80), field_78);
    field_78 = 0;
    sub_6f2890((int)this);
}
