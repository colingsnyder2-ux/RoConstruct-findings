// from server: 80% by atomic.potato
struct Instance
{
    int field44;
};

extern "C" int __cdecl G1_func_0080b2ea(int, int, int, int, int);

int func_0067e0c0(Instance* value)
{
    if (value != 0)
    {
        if (G1_func_0080b2ea(value->field44, 0, 0xc071f8, 0xc1a934, 0) != 0)
            return 0;
    }
    return 0;
}
