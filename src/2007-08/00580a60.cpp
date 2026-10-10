// from server: 38% by colin
struct Log {
    float parseFloat(const char* str);
};

extern "C" {
    void __stdcall func_77e674(void*, int, int);
    void* __stdcall func_77e540(void*, const char*);
    void* __stdcall func_77e490(void*, void*);
    int __stdcall func_77e498(void*);
    void __stdcall func_77e678(void*);
    void* __stdcall func_77e710(void*, const char*);
}

void func_4f3940(void*);

float Log::parseFloat(const char* str)
{
    char buf[0xa4];
    float result;
    void* p;
    void* loc;

    func_77e674(buf + 0x1c, 3, 1);
    *(int*)(buf + 0x1c + 0x14) = 7;

    func_77e540(buf + 0x1c, str);

    p = func_77e490(buf + 0x1c, &result);
    if ((*(unsigned char*)((char*)p + 8) & 6) == 0) {
        loc = func_77e490(buf + 0x1c, &result);
        if ((*(unsigned char*)((char*)loc + 8) & 6) != 0) {
            if (func_77e498(buf + 0x1c) == -1) {
                func_77e678(buf + 0x1c);
                return result;
            }
        }
    }

    func_77e710(buf + 0x1c, "bad lexical cast: source type value could not be interpreted as target");
    *(void**)(buf + 8) = (void*)0x79f584;
    *(void**)(buf + 0x14) = (void*)0x8827f8;
    *(void**)(buf + 0x18) = (void*)0x8827ec;
    func_4f3940(buf + 8);

    return 0.0f;
}
