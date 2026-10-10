// from server: 45% by colin
struct StreamBuffer
{
    char pad0[8];
    char field8[0x1c];
    char field24[0x1c];
    int field40;
    int field44;
    int field48;
    int field4c;
    int field50;

    void read(void* arg);
};

extern "C" int __stdcall sub_54e5b0(void*, void*);
extern "C" int __stdcall sub_54ffc0(void*);
extern "C" int __stdcall sub_550920(void*, int);
extern "C" int __stdcall sub_54fff0(void*, int);
extern "C" int __stdcall sub_550040(void*, void*);
extern "C" void __stdcall sub_54e090(void*, int);
extern "C" void __stdcall sub_630b9e(void*, void*);

extern "C" void __stdcall sub_77e634(void*);
extern "C" void __stdcall sub_77e690(void*, void*);
extern "C" void __stdcall sub_77e6ac(void*);

extern "C" void __stdcall std_string_dtor(void*);
extern "C" void __stdcall std_string_assign(void*, void*);
extern "C" void __stdcall std_string_clear(void*);

void StreamBuffer::read(void* arg)
{
    char buf[0x54];
    int result;
    int flags;
    int val;
    int i;
    int count;

    sub_77e634(&this->field8);
    sub_77e634(&this->field24);

    this->field48 = 0;
    this->field4c = 0;
    this->field40 = 0xff;

    result = sub_54e5b0(arg, buf);
    if (result != 1)
        goto fail;
    if ((char)buf[0] != 0x1f)
        goto fail;

    result = sub_54e5b0(arg, buf);
    if (result != 1)
        goto fail;
    if ((char)buf[0] != 0x8b)
        goto fail;

    result = sub_54e5b0(arg, buf);
    if (result == 1)
    {
        if ((char)buf[0] == 0xff)
            goto fail;
    }

    flags = sub_54ffc0(arg);
    if (flags == -1)
        goto fail;

    this->field48 = sub_550920(arg, 4);
    this->field4c = 0;

    sub_54fff0(arg, 4);
    val = sub_54fff0(arg, 4);
    this->field40 = (char)val;

    if (flags & 1)
        this->field50 |= 4;

    if (flags & 4)
    {
        int hi = sub_54fff0(arg, 4);
        int lo = sub_54fff0(arg, 4);
        hi = (char)hi << 8;
        lo = (char)lo;
        count = lo + hi;
        for (i = count; i != 0; i--)
        {
            result = sub_54e5b0(arg, buf);
            if (result == 1)
            {
                if ((char)buf[0] == 0xff)
                    break;
            }
        }
    }

    if (flags & 8)
    {
        char tmp[0x54];
        sub_550040(this, tmp);
        sub_77e690(&this->field8, tmp);
        sub_77e6ac(tmp);
    }

    if (flags & 0x10)
    {
        char tmp[0x54];
        sub_550040(this, tmp);
        sub_77e690(&this->field24, tmp);
        sub_77e6ac(tmp);
    }

    if (flags & 2)
    {
        sub_54fff0(arg, 4);
        sub_54fff0(arg, 4);
    }

    return;

fail:
    sub_54e090(buf, 4);
    sub_630b9e(buf, (void*)0x85a414);
}
