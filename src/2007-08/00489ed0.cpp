// from server: 74% by Viper
struct type_info
{
    bool __thiscall operator==(const type_info& other) const;
};

extern type_info type_info_88caa0;

int __cdecl func_0042c0c0(int, int, int);

struct Notifier
{
};

int __cdecl func(int a, int b)
{
    if (b == 2)
    {
        int result = a;
        if (!type_info_88caa0.operator==(*(const type_info*)&a))
            result = 0;
        return result;
    }
    return func_0042c0c0(a, b, 0);
}
