// from server: 15% by colin
struct RBX_Name;

struct FactoryProductBase {
    void constructFromArgs(const void* args, int count);
};

struct FactoryProductCreator {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    char field14;

    void constructFromArgs(const void* args, int count);
};

void FactoryProductCreator::constructFromArgs(const void* args, int count)
{
    struct LocalArgs {
        const void* p0;
        int p1;
        int p2;
        int p3;
        int p4;
        char p5;
    };

    LocalArgs local;
    local.p0 = args;
    local.p1 = 0;
    local.p2 = 0;
    local.p3 = 0;
    local.p4 = 0;
    local.p5 = 0;

    if (count == 0) {
        typedef int (__stdcall *Fn)(const void*, int);
        Fn fn = (Fn)count;
        local.p3 = *(int*)((char*)args + 0x20);
        local.p1 = count;
        local.p2 = fn(args, 0);
    }

    local.p5 = *(char*)((char*)args + 0x2c);
    local.p4 = *(int*)((char*)args + 0x28);

    ((FactoryProductBase*)this)->constructFromArgs(&local, 0);

    if (count != 0) {
        typedef int (__stdcall *Fn2)(const void*, int);
        Fn2 fn2 = (Fn2)count;
        fn2(*(const void**)((char*)args + 8), 1);
    }
}
