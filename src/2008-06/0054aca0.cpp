// from server: 11% by atomic.potato
struct Mesh {
    char pad0[0xc];
    struct Inner {
        char pad0[4];
        int count;
    } inner;
    float f(float);
};

extern "C" int __stdcall clamp_range(int, int, int);
extern "C" int __cdecl float_to_int(float);

float Mesh::f(float a) {
    int n = inner.count;
    int m = inner.count - 1;
    return (float)clamp_range(m, 0, n) * a;
}
