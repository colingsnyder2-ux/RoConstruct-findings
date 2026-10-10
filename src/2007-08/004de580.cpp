// from server: 34% by colin
// roc 2007-08 004de580  unit: RBX::Render::Mesh::Level  size: 339 bytes

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Level {
    char pad0[4];
    void* end;
    void* begin;
    char pad1[4];
    float x;
    float y;
    float z;
    int a;
    int b;
};

struct Alloc {
    void* alloc(int);
    void free(void*);
};

struct Vec {
    void* first;
    void* last;
    void* end;
};

struct Tree {
    void* head;
    void* size;
    void insert(void*, void*, void*, void*);
};

struct Level2 {
    char pad0[4];
    void* end;
    void* begin;
    char pad1[4];
    float x;
    float y;
    float z;
    int a;
    int b;
};

extern "C" void* __cdecl sub_4d9740(void*);
extern "C" int __cdecl sub_4d9510(void*, void*);
extern "C" void __cdecl sub_630bdc(void*, int, int, void*, void*);
extern "C" void __cdecl sub_631134(void*, void*, int, int, void*, void*);
extern "C" void __cdecl sub_630af7(void*, int, int, void*);
extern "C" void* __cdecl sub_4de270(void*, void*, void*, void*, void*);

struct Level3 {
    char pad0[4];
    void* end;
    void* begin;
    char pad1[4];
    float x;
    float y;
    float z;
    int a;
    int b;
    void* find_or_insert(void*);
};

void* Level3::find_or_insert(void* key) {
    void* result = sub_4d9740(key);
    void* node = result;
    if (this != 0) {
        _invalid_parameter_noinfo();
    }
    if (node == this->end) {
        goto insert;
    }
    {
        int cmp = sub_4d9510((char*)node + 0xc, key);
        if (cmp < 0) goto insert;
        if (cmp > 0) goto done;
        {
            int* k = (int*)key;
            int* n = (int*)((char*)node + 0xc);
            if (k[3] < n[3]) goto insert;
            if (k[3] > n[3]) goto done;
            if (k[4] >= n[4]) goto done;
        }
    }
insert:
    {
        void* tmp = 0;
        sub_630bdc(&tmp, 4, 4, (void*)0x4cff40, (void*)0x4637f0);
        float fx = *(float*)key;
        int kd = *(int*)((char*)key + 0xc);
        int ke = *(int*)((char*)key + 0x10);
        float fy = *(float*)((char*)key + 4);
        float fz = *(float*)((char*)key + 8);
        void* tmp2 = 0;
        sub_631134(&tmp2, &tmp, 4, 4, (void*)0x4d04c0, (void*)0x4637f0);
        void* out = 0;
        sub_4de270(this, &out, node, key, &tmp2);
        void* r1 = *(void**)out;
        void* r2 = *(void**)((char*)out + 4);
        sub_630af7(&tmp2, 4, 4, (void*)0x4637f0);
        sub_630af7(&tmp, 4, 4, (void*)0x4637f0);
        node = r1;
        result = r2;
    }
done:
    if (node == 0) {
        _invalid_parameter_noinfo();
    }
    if (result == *(void**)((char*)node + 4)) {
        _invalid_parameter_noinfo();
    }
    return (char*)result + 0x20;
}
