// from server: 44% by colin




struct CXTPControlComboBox;

extern "C" int __stdcall sub_802fd8(void*);
extern "C" void __stdcall sub_803f14(void*);

struct CXTPControlComboBox
{
    void sub_6a7b40(void*);
    void* sub_6a6be0(void*);
    void sub_6a96f0(void*);
};

void CXTPControlComboBox::sub_6a96f0(void* arg)
{
    void* local;
    int flag = 0;
    void* result;

    if (sub_802fd8(arg))
    {
        result = this->sub_6a6be0(&local);
        flag = 1;
    }
    else
    {
        result = arg;
    }

    this->sub_6a7b40(result);

    if (flag & 1)
    {
        sub_803f14(&local);
    }
}
