// from server: 69% by king_originala
extern "C" double __cdecl sqrt(double);
extern "C" void __cdecl alignedFree(void*);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
};

struct Array {
    void* data;
    int size;
    int capacity;
    ~Array();
};

inline Array::~Array() {
    alignedFree(0);
}

struct Hit {
    void* object;
    void* extra;
    Vector3 position;
};

struct GroupDragTool {
    char padding0[0x24];
    void* object;
    char padding1[4];
    Vector3 previous;
    char padding2[0x10];
    Vector3 origin;

    void query(Hit* result, const Array* objects, int flag);
    bool check();
};

bool GroupDragTool::check() {
    Array objects;
    objects.size = 0;
    objects.capacity = 0;
    objects.data = 0;

    Hit hit;
    query(&hit, &objects, 0);

    if (hit.object != 0 && hit.object != object) {
        float x = hit.position.x - origin.x;
        float y = hit.position.y - origin.y;
        float z = hit.position.z - origin.z;
        double distance = sqrt(x * x + y * y + z * z);

        float px = previous.x - origin.x;
        float py = previous.y - origin.y;
        float pz = previous.z - origin.z;

        if (sqrt(px * px + py * py + pz * pz) > distance)
            return true;
    }
    return false;
}
