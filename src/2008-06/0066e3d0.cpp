// from server: 24% by colin
struct Vec3 { float x, y, z; };

struct GCamera {
    char pad[0x24];
    float f24, f28, f2c;
};

struct MouseCommand {
    char pad0[0x10];
    void* field10;
    void* field14;
    char pad18[0xc];
    void* field24;
    char pad28[0x1c];
    Vec3 field44;
};

struct GroupDragTool {
    char pad0[0x10];
    void* field10;
    void* field14;
    char pad18[0xc];
    void* field24;
    char pad28[0x1c];
    Vec3 field44;

    void baseInit();
    GCamera* getCamera();
    void* makeDragger(Vec3* out, void* a);
    void* getDragger();
    void updateDragger(Vec3* v);
    bool checkA();
    bool checkB();
    bool checkC();
    void finish();
    void cleanup();
    bool run(void* arg);
};

extern "C" void __cdecl freeAligned(void* p);
extern "C" void __cdecl vecCopy9(void* dst, void* src);
extern "C" void __cdecl vecPushBack(void* vec, void* val);
extern "C" void __cdecl vecInsert(void* vec, int idx, void* val);
extern "C" void __cdecl vecGrow(void* vec, int n, void* val);
extern "C" bool __cdecl checkHit(void* a, void* b, float f);

extern float g_float_82748c;

bool GroupDragTool::run(void* arg)
{
    baseInit();
    float* src = (float*)arg;
    field44.x = src[1];
    field44.y = src[2];
    field44.z = src[3];
    field44.x = src[4];
    field44.y = src[5];
    field44.z = src[6];

    GCamera* cam = getCamera();
    Vec3 camCopy;
    vecCopy9(&camCopy, cam);

    Vec3 hit;
    hit.x = cam->f24;
    hit.y = cam->f28;
    hit.z = cam->f2c;

    void* vec = 0;
    int count = 0;
    int cap = 0;
    void* dragger = 0;

    if (field24) {
        updateDragger(&field44);
    } else {
        void* r = makeDragger(&hit, &vec);
        field24 = *(void**)r;
        field44.x = *(float*)((char*)r + 8);
        field44.y = *(float*)((char*)r + 12);
        field44.z = *(float*)((char*)r + 16);
        field44.x = *(float*)((char*)r + 20);
        field44.y = *(float*)((char*)r + 24);
        field44.z = *(float*)((char*)r + 28);
    }

    while (true) {
        dragger = field24;
        if (!dragger) break;

        int i = 0;
        bool found = false;
        while (i < count) {
            if (((void**)vec)[i] == dragger) { found = true; break; }
            i++;
        }
        if (!found) break;

        if (count < cap) {
            ((void**)vec)[count] = dragger;
            count++;
        } else {
            if ((char*)&field24 >= (char*)vec && (char*)&field24 < (char*)vec + count*4) {
                void* tmp = field24;
                vecPushBack(&vec, &tmp);
            } else {
                vecGrow(&vec, count + 1, 0);
                ((void**)vec)[count] = field24;
                count++;
            }
        }

        bool a = checkA();
        char flag;
        checkB();
        if (a) {
            void* r = makeDragger(&hit, &vec);
            field24 = *(void**)r;
            field44.x = *(float*)((char*)r + 8);
            field44.y = *(float*)((char*)r + 12);
            field44.z = *(float*)((char*)r + 16);
            field44.x = *(float*)((char*)r + 20);
            field44.y = *(float*)((char*)r + 24);
            field44.z = *(float*)((char*)r + 28);
            continue;
        }
        if (checkHit(field10, field14, g_float_82748c)) {
            void* r = makeDragger(&hit, &vec);
            field24 = *(void**)r;
            field44.x = *(float*)((char*)r + 8);
            field44.y = *(float*)((char*)r + 12);
            field44.z = *(float*)((char*)r + 16);
            field44.x = *(float*)((char*)r + 20);
            field44.y = *(float*)((char*)r + 24);
            field44.z = *(float*)((char*)r + 28);
            continue;
        }
        if (checkC()) {
            void* r = makeDragger(&hit, &vec);
            field24 = *(void**)r;
            field44.x = *(float*)((char*)r + 8);
            field44.y = *(float*)((char*)r + 12);
            field44.z = *(float*)((char*)r + 16);
            field44.x = *(float*)((char*)r + 20);
            field44.y = *(float*)((char*)r + 24);
            field44.z = *(float*)((char*)r + 28);
            continue;
        }
        finish();
        freeAligned(vec);
        return false;
    }

    finish();
    cleanup();
    freeAligned(vec);
    return false;
}
