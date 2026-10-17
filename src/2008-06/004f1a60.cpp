// from server: 42% by colin
struct VMaterialBase {
    char pad[0x20];
    void* field20;
    char pad2[0x18];
    void* field3c;
    void* field40;
};

extern "C" {
    int __stdcall InterlockedDecrement(int*);
}

void __cdecl sub_557330(void*, void*);
void __cdecl sub_563090(void*);
void __cdecl sub_5630e0(void*);
void __cdecl sub_598fa0(void*, void*);
void* __cdecl sub_551730();
float* __cdecl sub_514a60(float, float, float, float);
void __cdecl sub_4f0d40(void*, void*, void*);
void* __cdecl sub_4e6c00(void*, void*);
void* __cdecl sub_4f1710(void*, void*, void*);
void __cdecl sub_4f0c40(void*, void*);
void __cdecl sub_45ad90(void*);

extern float g_941d5c;
extern float g_941d60;
extern void* g_972880;
extern void* g_972884;

struct S {
    void* f(float a, float b, float c, float d);
};

void* S::f(float a, float b, float c, float d)
{
    void* result = 0;
    void* local = 0;
    void* tmp = 0;

    sub_557330((void*)0x972884, (void*)0x4f1a00);

    VMaterialBase* vb = (VMaterialBase*)g_972880;
    void* lock = (char*)vb + 0x40;
    sub_563090(lock);

    float fa = a;
    float fb = b;

    void* out = 0;
    int code = 0xc2;

    void* base = (char*)vb + 0x20;
    sub_4f0d40(base, &tmp, &code);

    void* cur = tmp;
    void* target = *(void**)((char*)base + 0x18);
    void* head = *(void**)base;

    if (cur != 0 && cur == head) {
    } else {
        InterlockedDecrement((int*)0x802890);
    }

    if (tmp != target) {
        if (cur == 0) {
            InterlockedDecrement((int*)0x802890);
            void* n = tmp;
            if (n == *(void**)((char*)cur + 0x18)) {
                InterlockedDecrement((int*)0x802890);
            }
            void* src = (char*)tmp + 0x18;
            void* r = sub_4e6c00(src, &local);
            void* v = *(void**)r;
            sub_598fa0(&out, v);
            if (local != 0) {
                int* p = (int*)((char*)local + 4);
                int r2 = InterlockedDecrement(p);
                if (r2 == 0) {
                    sub_45ad90(local);
                    if (local != 0) {
                        void** vt = *(void***)local;
                        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                        fn(local, 1);
                    }
                }
            }
        } else {
            cur = *(void**)cur;
            void* n = tmp;
            if (n == *(void**)((char*)cur + 0x18)) {
                InterlockedDecrement((int*)0x802890);
            }
            void* src = (char*)tmp + 0x18;
            void* r = sub_4e6c00(src, &local);
            void* v = *(void**)r;
            sub_598fa0(&out, v);
            if (local != 0) {
                int* p = (int*)((char*)local + 4);
                int r2 = InterlockedDecrement(p);
                if (r2 == 0) {
                    sub_45ad90(local);
                    if (local != 0) {
                        void** vt = *(void***)local;
                        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                        fn(local, 1);
                    }
                }
            }
        }
    }

    if (out == 0) {
        void* g = sub_551730();
        sub_598fa0(&out, g);

        if (fa == 1.0f) {
            void** vt = *(void***)out;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(out);
        } else {
            void* obj = out;
            float* v = sub_514a60(g_941d5c, g_941d60, fb, fa);
            float vec[3];
            vec[0] = v[0];
            vec[1] = v[1];
            vec[2] = v[2];
            void* zero = 0;
            void* p = *(void**)obj;
            sub_598fa0(&zero, p);
            void** vt = *(void***)obj;
            void (*fn)(void*) = (void (*)(void*))vt[3];
            fn(obj);
        }
    }

    void* r = sub_4f1710(base, &out, &result);
    sub_4f0c40(r, &result);

    sub_5630e0(lock);

    return result;
}
