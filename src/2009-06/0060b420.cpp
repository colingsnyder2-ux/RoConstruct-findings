// from server: 94% by atomic.potato
struct Inner {
    char pad[0x118];
    void* field_118;
};

struct Outer {
    char pad[0xc];
    Inner* field_c;
};

struct Result {
    char pad[0x13c];
    int field_13c;
};

struct FollowCameraCommand {
    char pad[0xc];
    Inner* field_c;
    bool run();
};

bool FollowCameraCommand::run() {
    Inner* inner = this->field_c;
    void** vtbl = *(void***)((char*)inner + 0x118);
    typedef Result* (__thiscall *Fn)(void*);
    Fn fn = (Fn)vtbl[1];
    Result* r = fn((char*)inner + 0x118);
    return r->field_13c == 4;
}
