// from server: 97% by king_originala
void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Mesh {
    unsigned char storage[136];
    Mesh(int, int, int, int, int, int, float);
};

struct Level {
    void configure(int, int, int, int, int, int, float);
};

struct Result {
    Mesh *pointer;
    Result() : pointer(0) {}
    ~Result();
    void reset(Mesh *);
};

extern unsigned char enabled;
extern unsigned char building;
extern float meshValue;
extern const float initialValue;
extern unsigned char meshType;
extern unsigned char levelType;

extern "C" void *__cdecl __RTDynamicCast(
    void *, long, void *, void *, int);

Result __cdecl func_004e54e0(
    int a, int b, int c, int d, int e, int f, float scale)
{
    Result result;
    building = 0;
    if (enabled) {
        meshValue = initialValue;
        result.reset(new Mesh(a, b, c, d, e, f, scale));
        meshValue = 0.0f;
        building = 1;
        static_cast<Level *>(
            __RTDynamicCast(result.pointer, 0, &meshType, &levelType, 0)
        )->configure(a, b, c, d, e, f, scale);
        building = 0;
    } else {
        meshValue = 0.0f;
        result.reset(new Mesh(a, b, c, d, e, f, scale));
    }
    return result;
}
