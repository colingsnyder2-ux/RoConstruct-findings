// from server: 30% by colin
struct VCoordinateFrame;

struct VCoordinateFrame {
    char pad[0x134];
    void* field_134;
    void func(void* out, void* arg);
};

extern "C" void* __cdecl sub_6A0920(unsigned int size);
extern "C" void __cdecl sub_6A067A(void* p);
extern "C" void __cdecl sub_60F340(void* a, void* b);
extern "C" void* __cdecl sub_583920();
extern "C" void __cdecl sub_583860();
extern "C" void* __cdecl sub_60F9B0(void* a, void* b);
extern "C" void __cdecl sub_57DEE0(void* a, void* b);
extern "C" void* __cdecl sub_5E82C0(void* a, void* b);
extern "C" void __cdecl _invalid_parameter_noinfo();

extern float g_819bac;

void VCoordinateFrame::func(void* out, void* arg) {
    void* local_0c = 0;
    void* local_18 = 0;
    void* local_1c = 0;
    void* local_20 = 0;

    void* p = sub_6A0920(4);
    if (p) {
        *(void**)p = &local_0c;
    } else {
        p = 0;
    }
    local_0c = p;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;

    sub_60F340(this, &local_0c);

    float* src = (float*)sub_583920();
    float tmp[6];
    tmp[0] = src[0];
    tmp[1] = src[1];
    tmp[2] = src[2];
    tmp[3] = src[3];
    tmp[4] = src[4];
    tmp[5] = src[5];

    void* base = local_18;
    void* end = local_1c;
    int count = ((char*)end - (char*)base) >> 2;

    unsigned int i = 0;
    if ((unsigned int)count > 0) {
        do {
            float scale = g_819bac;
            if (i >= (unsigned int)count) {
                _invalid_parameter_noinfo();
                base = local_18;
                scale = g_819bac;
            }
            void* elem = *(void**)((char*)base + i * 4);
            float* m = *(float**)((char*)elem + 0x9c);
            float a0 = m[1] * scale;
            float a1 = m[2] * scale;
            float a2 = m[3] * scale;
            float b0 = -a0;
            float b1 = -a1;
            float b2 = -a2;
            float c0 = -tmp[0];
            float c1 = -tmp[1];
            float c2 = -tmp[2];

            float mat[6];
            mat[0] = b0;
            mat[1] = b1;
            mat[2] = b2;
            mat[3] = c0;
            mat[4] = c1;
            mat[5] = c2;

            void* f134 = *(void**)((char*)this + 0x134);
            void* vtbl = *(void**)f134;
            void* outbuf;
            ((void (__thiscall*)(void*, void*))vtbl)(f134, &outbuf);

            void* r1 = sub_5E82C0(elem, outbuf);
            void* r2 = sub_60F9B0(&mat[3], r1);
            sub_57DEE0(&tmp[0], r2);

            base = local_18;
            end = local_1c;
            count = ((char*)end - (char*)base) >> 2;
            i++;
        } while (i < (unsigned int)count);
    }

    float* result;
    if (count > 0) {
        result = tmp;
    } else {
        sub_583860();
        result = (float*)local_18;
    }

    float* dst = (float*)out;
    dst[0] = result[0];
    dst[1] = result[1];
    dst[2] = result[2];
    dst[3] = result[3];
    dst[4] = result[4];
    dst[5] = result[5];

    if (local_18) {
        sub_6A067A(local_18);
    }
    if (local_0c) {
        sub_6A067A(local_0c);
    }
}
