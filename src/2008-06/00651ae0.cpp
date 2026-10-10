// from server: 42% by colin
struct ScoreHud {
    char pad[0x1c];
    void* field_1c;
    ScoreHud* construct(void* a, void* b);
};

extern "C" void* __stdcall sub_80245c(void*);
extern "C" void sub_6515e0(void*, void*);

ScoreHud* ScoreHud::construct(void* a, void* b) {
    sub_80245c(a);
    sub_6515e0(&field_1c, b);
    return this;
}
