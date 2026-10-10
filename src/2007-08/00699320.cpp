// from server: 71% by colin
struct PAVCXTPPropertyGridItemConstraint
{
    char pad[0x84];
    int field_84;
    char pad2[0x94 - 0x88];
    int field_94;
    char pad3[0x9c - 0x98];
    int field_9c;
    char pad4[0xb0 - 0xa0];
    int field_b0;
    int field_b4;
    int field_b8;

    PAVCXTPPropertyGridItemConstraint* __thiscall sub_699320(int index, PAVCXTPPropertyGridItemConstraint* other);
};

extern "C" int __stdcall sub_63B850(int, int, int, int);
extern "C" int __stdcall sub_69D340(int, int, int);
extern "C" int __stdcall InvalidateRect(int, int, int);

PAVCXTPPropertyGridItemConstraint* __thiscall PAVCXTPPropertyGridItemConstraint::sub_699320(int index, PAVCXTPPropertyGridItemConstraint* other)
{
    if (other != 0)
        return 0;

    if (this->field_b4 != 0)
    {
        int idx = index;
        if (idx < 0 || idx > *(int*)(this->field_b8 + 0x28))
            idx = *(int*)(this->field_b8 + 0x28);

        sub_63B850(this->field_b8 + 0x20, idx, (int)other, 1);

        int tmp = this->field_b4;
        int* vtbl = *(int**)other;
        other->field_b4 = tmp;
        int (*fn)(void*) = (int (*)(void*))*(int*)((char*)vtbl + 0xcc);
        other->field_b0 = (int)this;
        other->field_84 = this->field_84 + 1;
        fn(other);

        if (this->field_94 != 0)
        {
            if (this->field_9c != 0)
            {
                int ecx = this->field_b4;
                int edx = *(int*)(ecx + 0xdc);
                sub_69D340(edx, 1, 1);
                return other;
            }
            else
            {
                int eax = this->field_b4;
                if (eax != 0 && *(int*)(eax + 0x20) != 0)
                {
                    int ecx = this->field_b8;
                    if (*(int*)(ecx + 0x28) == 1)
                    {
                        int edx = *(int*)(eax + 0x20);
                        InvalidateRect(edx, 0, 0);
                    }
                }
            }
        }
    }

    return other;
}
