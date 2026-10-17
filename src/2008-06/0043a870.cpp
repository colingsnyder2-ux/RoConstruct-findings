// from server: 26% by colin
struct EnumDescriptor;

struct Item {
    int value;
    int index;
    EnumDescriptor* owner;

    float convertToValue(int);
};

struct EnumDescriptor {
    char pad[0x10];
    Item* first;
    Item* last;
    char pad2[0x4];
    Item* end;

    bool convertToValue(int, float*);
    bool convertToString(int, float*, int*);
};

struct Target;

struct Base {
    char pad[0x10];
    Item* first;
    Item* last;
    char pad2[0x4];
    Item* end;

    void SetHidden(int);
    void SomeMethod(int);
    bool convertToString(int, float*, int*);
};

struct Target {
    char pad[0x10];
    Item* first;
    Item* last;
    char pad2[0x4];
    Item* end;

    void f(int*);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void Target::f(int* arg)
{
    int* p = arg;
    Item* begin = first;
    Item* end = last;
    Item* cur = end;
    bool found = false;

    if (begin > last)
        _invalid_parameter_noinfo();

    Item* b = first;
    Item* e = last;
    Item* c = end;

    if (first > last)
        _invalid_parameter_noinfo();

    Item* b2 = first;
    if (b != b2)
        _invalid_parameter_noinfo();

    if (c == e)
    {
        ((Base*)((char*)this - 0x10c))->SetHidden(!found);
        return;
    }

    while (true)
    {
        if (b == 0)
            _invalid_parameter_noinfo();

        int* tmp1;
        int* tmp2;
        ((Base*)((char*)this - 0x10c))->convertToString(0, (float*)&tmp1, (int*)&tmp2);

        if (tmp1 != 0 && tmp1 != p)
            _invalid_parameter_noinfo();

        if (tmp2 == p)
        {
            if (b != 0)
                _invalid_parameter_noinfo();

            if (c == e)
            {
                if (b != 0)
                    _invalid_parameter_noinfo();

                b += 1;
                continue;
            }

            if (!found)
            {
                if (b != 0)
                    _invalid_parameter_noinfo();

                float val = b->convertToValue(b->value);
                ((Base*)((char*)this - 0x10c))->SomeMethod(*(int*)&val);
            }
            else
            {
                if (b != 0)
                    _invalid_parameter_noinfo();

                float val = b->convertToValue(b->value);
                float out;
                int idx;
                if (((Base*)((char*)this - 0x10c))->convertToString(*(int*)&val, &out, &idx))
                {
                    found = true;
                    if (b != 0)
                        _invalid_parameter_noinfo();
                    b += 2;
                    continue;
                }
                else
                {
                    ((Base*)((char*)this - 0x10c))->SetHidden(0);
                    return;
                }
            }
            found = true;
            if (b != 0)
                _invalid_parameter_noinfo();
            b += 2;
            continue;
        }

        if (b != 0)
            _invalid_parameter_noinfo();

        b += 1;
    }
}
