// from server: 64% by colin
struct Vector3 {
    float x, y, z;
};

struct Geometry {
    char pad0[0x60];
    void* ptr60;
    void* ptr64;
    char pad2[0x40];
    float fA8;
    float fAC;
    float fB0;

    void getCenterToCorner(Vector3* out);
};

extern "C" void __stdcall sub_530100(void* p);

void Geometry::getCenterToCorner(Vector3* out) {
    void* ebx = ptr64;
    sub_530100(ebx);
    void* esi = ptr64;
    sub_530100(esi);
    void* ecx = ptr60;
    void** vtbl = *(void***)ecx;
    void* fn = vtbl[5];
    char* ebx2 = (char*)ebx + 0x84;
    Vector3 tmp;
    ((void (__stdcall*)(Vector3*, char*))fn)(&tmp, ebx2);
    Vector3* eax = &tmp;
    out->x = eax->x + *(float*)((char*)esi + 0xA8);
    out->y = eax->y + *(float*)((char*)esi + 0xAC);
    out->z = eax->z + *(float*)((char*)esi + 0xB0);
    out[1].x = *(float*)((char*)esi + 0xA8) - eax->x;
    out[1].y = *(float*)((char*)esi + 0xAC) - eax->y;
    out[1].z = *(float*)((char*)esi + 0xB0) - eax->z;
    float half = *(float*)0x7a837c;
    out->x = out->x - half;
    out->y = out->y - half;
    out->z = out->z - half;
    out[1].x = out[1].x + half;
    out[1].y = out[1].y + half;
    out[1].z = out[1].z + half;
}
