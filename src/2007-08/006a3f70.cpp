// from server: 83% by colin
struct CArray_HWND__
{
    char pad0[8];
    int field_8;
    char padC[4];
    int field_10;
    char pad14[0xC];
    int field_20;
    char pad24[0x20];
    int field_44;

    void InsertAt(int index, void* value);
    int Find(void* value);
};

extern "C" int __fastcall sub_62ff02(void* self);
extern "C" void __fastcall sub_643680(void* self);
extern "C" int __fastcall sub_6a37c0(void* self, int, void* value);
extern "C" void __fastcall sub_6d2910(void* self, int, void* value);

void CArray_HWND__::InsertAt(int index, void* value)
{
    int result;
    field_44 = sub_62ff02(this);
    if (field_10 == 0)
    {
        int p = field_20;
        if (p != 0 && p != (int)value)
        {
            sub_643680((void*)p);
        }
    }
    result = sub_6a37c0((char*)this + 8, index, value);
    if (result == -1)
    {
        sub_6d2910((char*)this + 8, field_8, value);
    }
}
