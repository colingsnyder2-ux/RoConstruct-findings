// from server: 83% by king_originala
struct Pair {
    float x;
    float y;
    Pair& operator=(const Pair&);
};

extern const float initial_x;
extern const float initial_y;
extern const float scale;

extern Pair __cdecl transform(const Pair&);
extern "C" double __cdecl floor(double);
extern "C" long __cdecl _ftol(double);

#pragma intrinsic(floor, _ftol)

int __cdecl convert(int value)
{
    static Pair reference = { initial_x, initial_y };
    float result = (float)floor(value * transform(reference).x * scale);
    return _ftol(result);
}
