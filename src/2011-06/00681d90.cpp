// from server: 76% by atomic.potato
extern "C" void __cdecl sub_80b15d(const char *);

int __cdecl f_681d90()
{
    static unsigned char initialized;
    static int global_1;
    static int global_2;

    if (initialized)
        return 0;

    initialized = 1;
    global_1 = 0;
    global_2 = 0;
    sub_80b15d("8csm");
    return 0;
}
