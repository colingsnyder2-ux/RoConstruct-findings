// from server: 40% by colin
struct Vec3 { float x, y, z; };

struct Box {
    float x0, y0, z0;
    float x1, y1, z1;
};

struct Source {
    char reserved[0x90];
    unsigned int version;
    const void* get();
};

struct Geometry {
    char reserved0[0x80];
    volatile Box bounds;
};

struct IntArray {
    int* data;
    int count;
    int cap;
    void push_back(int v);
    void reserve(int n);
};

struct Contact {
    char pad0[0x18];
    IntArray* m_array;
};

extern int g_count;
extern "C" void __cdecl alignedFree(void* p);
extern "C" void __cdecl arrayInit(IntArray* a, int n, int v);
extern "C" void __cdecl arrayGrow(IntArray* a, int n);
extern "C" void __cdecl arrayInsert(IntArray* a, int* pos);

struct BallBallContact {
    char pad0[0x18];
    IntArray m_list;
    void generateDataForMovingAssemblyStage(Vec3* p, IntArray* out, int a3);
};

void BallBallContact::generateDataForMovingAssemblyStage(Vec3* p, IntArray* out, int a3)
{
    int i;
    char* base = (char*)this + 0x18;
    for (i = 0; i < g_count; i++) {
        char* entry = base + i * 0x18;
        int diff = *(int*)(entry + 4) - *(int*)entry;
        if ((diff & 0xfffffff8) == 0)
            continue;
        Box box;
        int lo[3], hi[3];
        arrayInit((IntArray*)&lo, 0, 0);
        arrayInit((IntArray*)&hi, 0, 0);
        // compute box from entry
        {
            int* e = (int*)entry;
            (void)e;
        }
        // iterate
        int x;
        for (x = lo[0]; x <= hi[0]; x++) {
            int y;
            for (y = lo[1]; y <= hi[1]; y++) {
                int z;
                for (z = lo[2]; z <= hi[2]; z++) {
                    IntArray tmp;
                    arrayInit(&tmp, 0, 0);
                    // append
                    {
                        int idx = 0;
                        (void)idx;
                    }
                    int k;
                    for (k = 0; k < tmp.count; k++) {
                        int id = tmp.data[k];
                        if (id == a3)
                            continue;
                        int j;
                        bool found = false;
                        for (j = 0; j < out->count; j++) {
                            if (out->data[j] == id) { found = true; break; }
                        }
                        if (found)
                            continue;
                        const void* g = ((Source*)id)->get();
                        const Box* b = (const Box*)((char*)g + 0x80);
                        if (b->x0 == p->x) continue;
                        if (b->y0 == p->y) continue;
                        if (b->z0 == p->z) continue;
                        if (b->x1 <= p->x) continue;
                        if (b->y1 <= p->y) continue;
                        if (b->z1 <= p->z) continue;
                        if (out->count < out->cap) {
                            out->data[out->count] = id;
                            out->count++;
                        } else {
                            arrayGrow(out, out->count + 1);
                            out->data[out->count - 1] = id;
                        }
                    }
                }
            }
        }
    }
}
