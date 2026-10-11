// from server: 50% by tester
struct Contact {
    char pad[8];
    int count;
};

struct Primitive {
    char pad[0x18];
};

struct Connector {
    char pad[0x18];
};

struct ContactConnector {
    char pad[0x18];
};

struct S_0060d140 {
    void* m_p0;
    int m_count;
    void* m_p8;
    void f(Primitive* p0, Primitive* p1, int a3);
};

extern "C" void __stdcall sub_00599a70(void* p, int a, int b);
extern "C" void __stdcall sub_0065ac60(void* a, void* b, void* c, void* d);
extern "C" void* __stdcall sub_005e7a50(void* p);
extern "C" void __stdcall sub_0059a190(void* p, void* q);

void S_0060d140::f(Primitive* p0, Primitive* p1, int a3)
{
    void* self = this;
    void* ebx = (char*)this + 8;
    sub_00599a70(ebx, 0, 0);
    sub_0065ac60(*(void**)this, p0, p1, ebx);
    int i = 0;
    if (m_count > 0) {
        do {
            void* arr = *(void**)ebx;
            int off = i * 4;
            void* elem = *(void**)((char*)arr + off);
            void* r = sub_005e7a50(elem);
            float* f = (float*)r;
            if (f[3] == *(float*)p0 &&
                f[4] == *((float*)p0 + 1) &&
                f[5] == *((float*)p0 + 2) &&
                f[1] > *((float*)p0 + 4) &&
                f[0] > *((float*)p0 + 3) &&
                f[2] > *((float*)p0 + 5)) {
                void* arr2 = *(void**)ebx;
                void* elem2 = (void*)((char*)arr2 + off);
                sub_0059a190(*(void**)((char*)self + 0x10), elem2);
            }
            i++;
        } while (i < m_count);
    }
}
