// from server: 33% by tester
struct Str_00437ed0 { int words[8]; };

struct X_00437ed0 {
    char pad[0xa4];
    Str_00437ed0 value;
    Str_00437ed0* copy(Str_00437ed0* out);
};

extern "C" void* __stdcall sub_803EE0();
extern "C" void __stdcall sub_802458();
extern "C" void __stdcall sub_802468();
extern "C" void __stdcall sub_803F14();
extern "C" bool __cdecl sub_5BEBB0(void*, void*);

struct VVector3 {
    float x;
    float y;
    float z;
};

struct XItem {
    bool get(VVector3* out);
};

bool XItem::get(VVector3* out)
{
    Str_00437ed0 local;
    X_00437ed0* src = (X_00437ed0*)((char*)this - 0xa4);
    src->copy(&local);

    void* p = sub_803EE0();
    sub_802458();
    bool ok = sub_5BEBB0(&local, &local);
    sub_802468();
    sub_803F14();

    if (ok) {
        out->x = 0.0f;
        out->y = 0.0f;
        out->z = 0.0f;
    } else {
        out->x = 0.0f;
        out->y = 0.0f;
        out->z = 0.0f;
    }
    return ok;
}
