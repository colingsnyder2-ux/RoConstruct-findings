// from server: 33% by atomic.potato
extern "C" {
    void __stdcall sub_98B6F4(void*);
    void __stdcall sub_98B6E4(void*);
}

struct Str {
    char pad[0x20];
};

struct Base {
    void init(void*);
};

struct Derived : Base {
    void __cdecl construct(char*);
};

void Derived::construct(char* s)
{
    Str local;
    local.pad[0] = 0;
    sub_98B6F4(&local);
    init(&local);
    *(void**)this = (void*)0x9dfd1c;
    sub_98B6E4(&local);
}
