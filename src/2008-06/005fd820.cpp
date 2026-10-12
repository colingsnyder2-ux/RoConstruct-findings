// from server: 93% by king_originala
struct CameraBase {
    unsigned int data[9];
    CameraBase(const CameraBase&);
};

struct Camera : CameraBase {
    float x;
    float y;
    float z;
};

struct S {
    unsigned int reserved[2];
    const Camera& (__thiscall *getter)(void*);
    int adjustment;
    int tableOffset;

    Camera get(void*);
};

Camera S::get(void* input)
{
    char* object = input ? static_cast<char*>(input) - 20 : 0;
    int* table = *reinterpret_cast<int**>(object + 448);
    int displacement =
        *reinterpret_cast<int*>(reinterpret_cast<char*>(table) + tableOffset);
    return getter(object + 448 + displacement + adjustment);
}
