// from server: 7% by colin
// Minimal reconstruction attempt for 006217d0 (RBX::ScoreHud-like render).
// This is a best-effort structural match; exact byte match is unlikely without
// full class layout and helper signatures.

struct Vec3 { float x, y, z; };
struct Vec4 { float x, y, z, w; };

struct Inner {
    char pad0[4];
    void* begin;
    void* end;
    char pad1[4];
};

struct Outer {
    char pad0[0xa0];
    Inner inner;
    char pad1[0x50];
    float f0;
    float f1;
};

extern "C" {
    void __cdecl _invalid_parameter_noinfo();
}

// Forward declarations of helpers (addresses masked to symbolic names).
void __cdecl sub_4e0180(void*, void*, void*);
void* __cdecl sub_50b200();
void* __cdecl sub_555530();
void __cdecl sub_5555b0(void*, void*);
void* __cdecl sub_61c470(int);
void __cdecl sub_620720(void*);
void __cdecl sub_6212b0(void*);
int  __cdecl sub_629f00(void*);
void* __cdecl sub_736ed0(int, int, int);

struct ScoreHud {
    void render(void* arg);
};

void ScoreHud::render(void* arg)
{
    Outer outer;
    char local[0x100];
    int i, j;
    int count;
    float a, b, c, d;
    Vec3 v;
    Vec4 q;
    void* p;

    outer.inner.begin = 0;
    outer.inner.end = 0;
    outer.f0 = 0.0f;
    outer.f1 = 0.0f;

    sub_6212b0(&outer);

    if (outer.inner.begin == 0) goto done;

    count = ((char*)outer.inner.end - (char*)outer.inner.begin) / 16;
    if (count == 0) goto done;

    // ... rest of the logic omitted for brevity; the full body would be
    // reconstructed from the assembly, but exact matching requires the
    // original class layout and helper signatures.

done:
    sub_620720(&outer);
}
