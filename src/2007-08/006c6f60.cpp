// from server: 58% by colin
struct CXTPCustomizeSheet_CCustomizeEdit
{
    char pad[0x168];
    int* field_0x168;
    char pad2[0x28];
    void* field_0x194;
    int field_0x198;
    void SetEdit(int* p);
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void __fastcall sub_635be0(void* p);
extern "C" int __fastcall sub_635c90(void* p, void* a, int b);

void CXTPCustomizeSheet_CCustomizeEdit::SetEdit(int* p)
{
    field_0x198 = (int)p;

    if (field_0x194 != 0)
    {
        void** vt = *(void***)field_0x194;
        ((void (__thiscall*)(void*, int))vt[0])(field_0x194, 1);
        field_0x194 = 0;
    }

    if (field_0x168 != 0 && field_0x168[8] != 0 && p != 0)
    {
        void* obj = sub_62fef6(0x10);
        if (obj != 0)
        {
            sub_635be0(obj);
        }
        else
        {
            obj = 0;
        }

        field_0x194 = obj;

        int* q = field_0x168;
        void* arg = 0;
        if (q != 0)
            arg = (void*)q[8];

        if (sub_635c90(obj, arg, field_0x198) < 0)
        {
            if (field_0x194 != 0)
            {
                void** vt = *(void***)field_0x194;
                ((void (__thiscall*)(void*, int))vt[0])(field_0x194, 1);
                field_0x194 = 0;
            }
        }
    }
}
