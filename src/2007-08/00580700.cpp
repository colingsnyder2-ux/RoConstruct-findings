// from server: 18% by colin
extern "C" {
    int __stdcall sub_77E674(int, int, void*);
    void* __stdcall sub_77E540(void*, void*);
    void* __stdcall sub_77E58C(void*, void*);
    int __stdcall sub_77E498(void*);
    void __stdcall sub_77E678(void*);
    void* __stdcall sub_77E710(void*, const char*);
}

struct S {
    char pad[0x18];
    int f(int);
};

int S::f(int arg)
{
    char buf[0xa0];
    int local;
    void* p;

    sub_77E674(3, 1, buf);
    local = 0;
    p = sub_77E540(buf, &arg);
    if ((*(int*)((char*)p + 8) & 6) == 0) {
        void* q = sub_77E58C(buf, &local);
        if ((*(int*)((char*)q + 8) & 6) != 0) {
            if (sub_77E498(buf) == -1) {
                sub_77E678(buf);
                return arg;
            }
        }
    }
    sub_77E710(buf, "bad lexical cast: source type value could not be interpreted as target");
    return 0;
}
