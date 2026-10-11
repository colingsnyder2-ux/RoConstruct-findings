// from server: 1% by atomic.potato
struct CXTPControlGallery {
    void* vtable;
    char pad0[0x7c];
    int field_0x80;
    char pad1[0x74];
    int field_0xf8;
    char pad2[0x04];
    int field_0x100;
    char pad3[0xf4];
    int field_0x1f8;

    int sub_8785d0(int, int);
    int sub_87b290(int);
    int sub_87adf0(int, int);
    int sub_87afb0(int, int);
    int sub_87b150(int, int);
    int sub_8454d0(int, int, int, int, int);
    int sub_84c160(int, int*);
    int method_0x74();
    int method_0x98();
    int sub_87b6c0(int, int);
};

extern "C" short __stdcall GetKeyState(int);

int CXTPControlGallery::method_0x74()
{
    return 0;
}

int CXTPControlGallery::method_0x98()
{
    return 0;
}

int CXTPControlGallery::sub_8785d0(int, int)
{
    return 0;
}

int CXTPControlGallery::sub_87b290(int)
{
    return 0;
}

int CXTPControlGallery::sub_87adf0(int, int)
{
    return 0;
}

int CXTPControlGallery::sub_87afb0(int, int)
{
    return 0;
}

int CXTPControlGallery::sub_87b150(int, int)
{
    return 0;
}

int CXTPControlGallery::sub_8454d0(int, int, int, int, int)
{
    return 0;
}

int CXTPControlGallery::sub_84c160(int, int*)
{
    return 0;
}

int CXTPControlGallery::sub_87b6c0(int, int)
{
    int result;
    int local;
    int v;

    if (method_0x74() == 0)
        return 0;

    sub_84c160(field_0x100, &local);
    v = local - 9;
    if ((unsigned)v > 0x1f)
        return 0;

    switch (v)
    {
    case 0:
        result = sub_8785d0(-1, 1);
        sub_87b290(result);
        return 1;
    case 1:
        result = sub_8785d0(-1, 1);
        sub_87b290(result);
        return 1;
    case 2:
        result = sub_87adf0(field_0x1f8, -1);
        sub_87b290(result);
        return 1;
    case 3:
        result = sub_87adf0(field_0x1f8, 1);
        sub_87b290(result);
        return 1;
    case 4:
        result = sub_87b150(field_0x1f8, -1);
        if (result != -1)
        {
            sub_87b290(result);
            return 1;
        }
        if (sub_8454d0(field_0xf8, 1, 0, 1, field_0x80) != field_0x80)
            return 0;
        result = sub_8785d0(-1, -1);
        if (result == -1)
            return 0;
        sub_87b290(result);
        return 1;
    case 5:
        result = sub_87afb0(field_0x1f8, -1);
        sub_87b290(result);
        return 1;
    case 6:
        result = sub_87afb0(field_0x1f8, 1);
        sub_87b290(result);
        return 1;
    case 7:
        result = sub_87b150(field_0x1f8, 1);
        if (result != -1)
        {
            sub_87b290(result);
            return 1;
        }
        if (sub_8454d0(field_0xf8, 1, 0, 1, field_0x80) != field_0x80)
            return 0;
        result = sub_8785d0(1, -1);
        if (result == -1)
            return 0;
        sub_87b290(result);
        return 1;
    case 8:
        if (GetKeyState(0x10) >= 0)
        {
            result = sub_8785d0(field_0x1f8, 1);
            if (result <= field_0x1f8)
                return 0;
            sub_87b290(result);
            return 1;
        }
        else
        {
            result = sub_8785d0(field_0x1f8, -1);
            if (result >= field_0x1f8)
                return 0;
            sub_87b290(result);
            return 1;
        }
    case 9:
        method_0x98();
        return 0;
    }
    return 0;
}
