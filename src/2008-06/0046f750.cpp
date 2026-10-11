// from server: 40% by colin
// roc 2008-06 0046f750  unit: RBX::LDraw2Lua::LDrawParser  size: 202 bytes

extern "C" {
    void* __stdcall sub_44A450(void*, const char*);
    void* __stdcall sub_802458(void*, const char*);
    void* __stdcall sub_802464(void*, const char*, const char*);
}

struct Str {
    char pad[0x1c];
    Str(const char*);
    const char* c_str() const;
};

struct Parser {
    char pad0[0xc];
    void* begin;
    void* end;
    void* sub_46F5A0(int);
    void sub_46F750(Str*);
};

void Parser::sub_46F750(Str* s) {
    void* p = sub_44A450(s, "part = Instance.new(\"Part\")");
    p = sub_44A450(p, "m.Name = \"");
    p = sub_44A450(p, "m.Parent = w");
    p = sub_44A450(p, "part = Instance.new(\"Part\")");
    p = sub_44A450(s, "m.Name = \"");
    p = sub_44A450(p, "m.Parent = w");
    p = sub_44A450(s, "part = Instance.new(\"Part\")");
    int n = ((char*)end - (char*)begin) >> 2;
    for (int i = 0; i < n; ++i) {
        void* e = sub_46F5A0(i);
        void* obj = *(void**)e;
        Str tmp("part = Instance.new(\"Part\")");
        void** vt = *(void***)obj;
        void (*fn)(void*, Str*) = (void (*)(void*, Str*))vt[1];
        fn(obj, s);
    }
}
