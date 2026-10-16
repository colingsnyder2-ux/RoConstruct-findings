// from server: 52% by colin




extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __stdcall basic_string_ctor(void*);

struct Inner {
    char pad[0x18];
    void assign(const void*);
};

struct ScoreHud {
    char pad0[0xc];
    Inner* begin;
    Inner* end;
    char pad1[0x8];
    Inner tail;
    void func(int count, const void* arg);
};

void ScoreHud::func(int count, const void* arg)
{
    int i;
    Inner* it;
    char buf[0x1c];

    if (count > 0) {
        i = 0;
        it = begin;
        do {
            if ((unsigned int)i >= (unsigned int)((end - begin) / 0x18)) {
                _invalid_parameter_noinfo();
            }
            basic_string_ctor(buf);
            it->assign(arg);
            i++;
            it++;
        } while (i < count);
    }
    basic_string_ctor(buf);
    tail.assign(arg);
}
