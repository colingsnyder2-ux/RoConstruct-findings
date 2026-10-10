// from server: 72% by colin
struct CXTPControlGallery {
    void sub_6B7220();
};

extern "C" void* __stdcall sub_6B3580();
extern "C" void __stdcall sub_6B3D90(void*, int, int);
extern "C" void __stdcall sub_6B67C0(void*, int);
extern "C" void __stdcall sub_63C4A0(void*, int);

void CXTPControlGallery::sub_6B7220()
{
    int v1;

    *(int*)((char*)this + 0x1e8) = 1;
    *(int*)((char*)this + 0x1f4) = 0;

    if (*(int*)((char*)this + 0x1e4) != -1)
    {
        void* p = sub_6B3580();
        if (p != 0 && *(int*)((char*)p + 0x2c) != 0)
        {
            sub_6B67C0(&v1, *(int*)((char*)this + 0x1e4));
            sub_6B3D90(this, v1, 0);
        }
        else
        {
            sub_6B3D90(this, 0, 1);
        }
    }

    if (*(int*)((char*)this + 0x218) != 0)
    {
        if (*(int*)((char*)this + 0x1e4) != -1)
        {
            sub_63C4A0(this, 0x1013);
        }

        if (*(int*)((char*)this + 0x218) != 0)
        {
            *(int*)((char*)this + 0x218) = 0;
            sub_63C4A0(this, 0x1011);
        }
    }
}
