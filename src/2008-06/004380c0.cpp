// from server: 38% by colin
struct Str_00437ed0 { int words[8]; };

struct X_00437ed0 {
    char pad[0xa4];
    Str_00437ed0 value;
    Str_00437ed0* copy(Str_00437ed0* out);
};

extern "C" void* __stdcall sub_803EE0();
extern "C" void __stdcall sub_802458(void* dst, void* src);
extern "C" void __stdcall sub_802468(void* p);
extern "C" void __stdcall sub_803F14(void* p);
extern "C" bool __cdecl sub_5BE790(void* a, void* b);

struct Str_00437ed0_ctor {
    void __thiscall construct(Str_00437ed0* src);
};

struct Holder {
    float get();
};

float Holder::get()
{
    Str_00437ed0 local;
    Str_00437ed0 out;
    bool ok;

    X_00437ed0* src = (X_00437ed0*)sub_803EE0();
    sub_802458(&local, src);
    ok = sub_5BE790(&out, &local);
    sub_802468(&local);
    sub_803F14(&out);

    if (ok)
        return *(float*)&out;
    return 0.0f;
}
