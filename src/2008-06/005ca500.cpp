// from server: 76% by colin
struct Item
{
    int get() const;
    int pad0[3];
    int value;
};

struct S
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual bool check(int value);
    int f();
};

extern float g_float;

struct KeyboardPrimaryController
{
    char pad0[0xc];
    void* field_c;
    float method(int key);
};

float KeyboardPrimaryController::method(int key)
{
    int* p = (int*)this->field_c;
    if (p == 0)
        return 0.0f;
    S* s = (S*)p[0x130 / 4];
    if (s == 0)
        return 0.0f;

    switch (key)
    {
    case 6:
        if (s->check(0x20))
            return 1.0f;
        return 0.0f;
    case 7:
        if (s->check(0x31))
            return 1.0f;
        return 0.0f;
    case 8:
        if (s->check(0x32))
            return 1.0f;
        return 0.0f;
    case 9:
        if (s->check(0x33))
            return 1.0f;
        return 0.0f;
    case 10:
        if (s->check(0x34))
            return 1.0f;
        return 0.0f;
    case 11:
        if (s->check(0x33))
            return 1.0f;
        {
            Item* it = (Item*)this;
            int* q = (int*)it->get();
            S* s2 = (S*)q;
            if (s2->check(0x34))
                return g_float;
        }
        return 0.0f;
    default:
        if (s->check(0x133))
            return 0.0f;
        if (s->check(0x134))
            return 0.0f;
        {
            int* r = (int*)this->field_c;
            S* s3 = r ? (S*)r[0x130 / 4] : 0;
            if (s3->f())
                return 0.0f;
        }
        {
            int* r = (int*)this->field_c;
            S* s4 = r ? (S*)r[0x130 / 4] : 0;
            bool b75 = s4->check(0x75);
            int* r2 = (int*)this->field_c;
            S* s5 = r2 ? (S*)r2[0x130 / 4] : 0;
            bool b6a = s5->check(0x6a);
            int* r3 = (int*)this->field_c;
            S* s6 = r3 ? (S*)r3[0x130 / 4] : 0;
            bool b68 = s6->check(0x68);
            int* r4 = (int*)this->field_c;
            S* s7 = r4 ? (S*)r4[0x130 / 4] : 0;
            bool b6b = s7->check(0x6b);

            switch (key - 1)
            {
            case 0:
                if (b68)
                    return 1.0f;
                return 0.0f;
            case 1:
                if (b75)
                    return 1.0f;
                if (b6a)
                    return g_float;
                return 0.0f;
            case 2:
                if (b75 && !b68)
                    return 1.0f;
                if (b6a && !b6b)
                    return 1.0f;
                if (b75 && b6b)
                    return 1.0f;
                if (b6b && !b75)
                    return g_float;
                if (b6a && !b75)
                    return g_float;
                if (b6b && !b6a)
                    return g_float;
                return 0.0f;
            case 3:
                if (b75 && !b6b)
                    return 1.0f;
                if (b68 && !b6b)
                    return 1.0f;
                if (b75 && !b68)
                    return 1.0f;
                if (b6b && !b68)
                    return g_float;
                if (b6a && !b75)
                    return g_float;
                if (b6b && !b6a)
                    return g_float;
                return 0.0f;
            default:
                return 0.0f;
            }
        }
    }
}
