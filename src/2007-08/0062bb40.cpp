// from server: 55% by colin
struct Vector3 {
    float x, y, z;
};

struct SnapInfo {
    int a;
    int b;
    float c, d, e;
    float f, g, h;
};

struct GroupDragTool {
    char pad[0x14];
    void* instance;

    SnapInfo* snap(void* vec, int a, int b);
};

extern "C" void* __stdcall getGlobalVector();

extern "C" int __stdcall sub_5B4D40(void* p);
extern "C" int __stdcall sub_5B4D20(void* p, void* q);
extern "C" void __stdcall sub_62B650(void* p);
extern "C" void __stdcall sub_62B7E0(void* self, void* out, void* a, int b);

extern float g_7A837C;
extern float g_7C2F8C;

SnapInfo* GroupDragTool::snap(void* vec, int a, int b)
{
    SnapInfo* result = (SnapInfo*)a;
    result->a = 0;
    result->b = 6;

    float* p1 = (float*)getGlobalVector();
    result->c = p1[0];
    result->d = p1[1];
    result->e = p1[2];

    float* p2 = (float*)getGlobalVector();
    result->f = p2[0];
    result->g = p2[1];
    result->h = p2[2];

    void* mgr = this->instance;
    int node = sub_5B4D40(mgr);
    if (node == 0)
        return result;

    while (node != 0) {
        float threshold = g_7A837C;
        int ok = ((int (__thiscall*)(void*, float))((*(void***)node)[0x44/4]))((void*)node, threshold);
        if (ok) {
            void* candidate = *(void**)(node + 8);
            if (this->instance == candidate)
                candidate = *(void**)(node + 0xc);
            if (candidate != 0) {
                int found = 0;
                int count = *(int*)((char*)vec + 4);
                if (count > 0) {
                    void** data = *(void***)vec;
                    for (int i = 0; i < count; i++) {
                        if (data[i] == candidate) {
                            found = 1;
                            break;
                        }
                    }
                }
                if (found) {
                    SnapInfo tmp;
                    sub_62B7E0(this, &tmp, candidate, 0);
                    if (tmp.a != 0) {
                        sub_62B650(&tmp);
                        if (!(g_7C2F8C > tmp.c)) {
                            result->a = tmp.a;
                            result->b = tmp.b;
                            result->c = tmp.c;
                            result->d = tmp.d;
                            result->e = tmp.e;
                            result->f = tmp.f;
                            result->g = tmp.g;
                            result->h = tmp.h;
                        }
                    }
                }
            }
        }
        node = sub_5B4D20(mgr, (void*)node);
    }
    return result;
}
