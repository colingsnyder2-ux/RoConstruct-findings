// from server: 72% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct Geometry {
    char pad[0x94];
    void* field94[1];
    bool method(Vector3* arg1, int arg2);
};

extern "C" bool __stdcall sub_5b44e0(Vector3*);
extern "C" void __cdecl sub_62fc62(void*);
extern "C" void* __cdecl sub_62fef6(unsigned int);

extern float dword_7b54f0;
extern float dword_797e9c;

bool Geometry::method(Vector3* arg1, int arg2) {
    if (field94[arg2] == 0) {
        if (sub_5b44e0(arg1))
            return true;
    }
    void* p = field94[arg2];
    if (p != 0) {
        if (*(int*)p == *(int*)arg1) {
            if (*(float*)((char*)arg1 + 4) == *(float*)((char*)p + 4)) {
                if (*(float*)((char*)arg1 + 8) == *(float*)((char*)p + 8))
                    return true;
            }
        }
    }
    if (sub_5b44e0(arg1)) {
        sub_62fc62(field94[arg2]);
        field94[arg2] = 0;
        return false;
    }
    if (field94[arg2] == 0) {
        void* mem = sub_62fef6(0xc);
        if (mem != 0) {
            *(int*)mem = 0;
            *(float*)((char*)mem + 4) = dword_7b54f0;
            *(float*)((char*)mem + 8) = dword_797e9c;
        } else {
            mem = 0;
        }
        field94[arg2] = mem;
    }
    void* dst = field94[arg2];
    *(int*)dst = *(int*)arg1;
    *(float*)((char*)dst + 4) = *(float*)((char*)arg1 + 4);
    *(float*)((char*)dst + 8) = *(float*)((char*)arg1 + 8);
    return false;
}
