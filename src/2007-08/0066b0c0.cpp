// from server: 70% by colin
struct MyXTPCommandBars
{
    char pad0[0x78];
    void* field_78;
    char pad7c[0x84 - 0x7c];
    int field_84;
    void Process(void* param, int arg2);
};

struct ItemA
{
    char pad0[0x188];
    int field_188;
    char pad18c[0x198 - 0x18c];
    int field_198;
    virtual int vfunc_1fc();
    virtual void vfunc_1d4(void* a, int b, void* c);
};

struct ItemB
{
    char pad0[0xf8];
    void* field_f8;
    virtual void vfunc_1d4(void* a, int b, void* c);
};

extern "C" void* __stdcall sub_00632910(void* self, int index);
extern "C" int __stdcall sub_0047b540(void* self);
extern "C" void* __stdcall sub_00430b20(void* self, int index);
extern "C" int __stdcall sub_0067be70(void* self);

void MyXTPCommandBars::Process(void* param, int arg2)
{
    int i;
    int local = 0x1000000;
    for (i = 0; i < this->field_84; i++)
    {
        ItemA* item = (ItemA*)sub_00632910(this, i);
        if (*(int*)((char*)param + 4) != 0)
        {
            if (item->field_188 != 0 && item->field_198 == 0)
            {
                if (item->vfunc_1fc() == 0)
                    continue;
            }
        }
        item->vfunc_1d4(&local, arg2, param);
    }

    for (i = 0; i < sub_0047b540(this->field_78); i++)
    {
        ItemB* item = (ItemB*)sub_00430b20(this->field_78, i);
        if (*(int*)((char*)param + 4) != 0)
        {
            if (sub_0067be70(item->field_f8) == 0)
                continue;
        }
        item->vfunc_1d4(&local, arg2, param);
    }
}
