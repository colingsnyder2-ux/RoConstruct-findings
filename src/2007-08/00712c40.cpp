// from server: 42% by colin
struct CXTShadowWndList
{
    char pad0[0x1c];
    int field_1c;
    char pad20[0x8];
    int field_28;

    void sub_712ba0();
    void sub_712c40();
};

extern "C" int __stdcall sub_709c90(int);

void CXTShadowWndList::sub_712c40()
{
    if (field_28 != 0)
    {
        int* p = &field_1c;
        do
        {
            int r = sub_709c90((int)p);
            if (r != 0)
            {
                (*(void (__thiscall **)(int, int))(*(int*)r + 4))(r, 1);
            }
        } while (field_28 != 0);
    }
    ((CXTShadowWndList*)&field_1c)->sub_712ba0();
    this->sub_712ba0();
}
