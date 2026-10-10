// from server: 36% by colin
struct Vector3 {
    float x, y, z;
};

struct Sphere {
    Vector3 center;
    float radius;
};

struct SphereArray {
    Sphere* data;
    int size;
    int capacity;
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl operator_delete(void* p);
extern "C" void __cdecl free(void* p);
extern "C" void __cdecl unknown_5095d0(void* dst, const void* src);
extern "C" void __cdecl unknown_62fc62(void* p);
extern "C" void __cdecl unknown_4ff810(void* p);
extern "C" long __stdcall InterlockedIncrement(volatile long* p);
extern "C" long __stdcall InterlockedDecrement(volatile long* p);

struct RefCounted {
    int refCount;
    virtual void destroy();
};

struct SphereArrayHolder {
    SphereArray* array;
};

struct SphereArrayOwner {
    Sphere* data;
    int size;
    int capacity;
    void assign(const SphereArrayOwner& other);
};

void SphereArrayOwner::assign(const SphereArrayOwner& other) {
    Sphere* oldData = data;
    int oldSize = size;
    int newSize = other.size;
    Sphere* newData = (Sphere*)operator_new(newSize * 68);
    data = newData;
    int copyCount = (newSize < oldSize) ? newSize : oldSize;
    Sphere* src = other.data;
    Sphere* dst = newData;
    Sphere* end = newData + copyCount;
    while (dst < end) {
        if (dst) {
            unknown_5095d0(dst, src);
            dst->center.x = src->center.x;
            dst->center.y = src->center.y;
            dst->center.z = src->center.z;
            dst->radius = src->radius;
            *(int*)((char*)dst + 0x34) = *(int*)((char*)src + 0x34);
            *(float*)((char*)dst + 0x38) = *(float*)((char*)src + 0x38);
            *(int*)((char*)dst + 0x3c) = *(int*)((char*)src + 0x3c);
            *(int*)((char*)dst + 0x40) = 0;
            int* ref = *(int**)((char*)src + 0x40);
            if (ref) {
                *(int**)((char*)dst + 0x40) = ref;
                InterlockedIncrement((volatile long*)(ref + 1));
            }
        }
        dst = (Sphere*)((char*)dst + 0x44);
        src = (Sphere*)((char*)src + 0x44);
    }
    Sphere* p = oldData;
    Sphere* pend = oldData + oldSize;
    while (p < pend) {
        int* ref = *(int**)((char*)p + 0x40);
        if (ref) {
            if (InterlockedDecrement((volatile long*)(ref + 1)) == 0) {
                RefCounted* obj = *(RefCounted**)((char*)p + 0x40);
                if (obj) {
                    RefCounted* node = (RefCounted*)obj->refCount;
                    while (node) {
                        RefCounted* next = (RefCounted*)node->refCount;
                        node->destroy();
                        unknown_62fc62(node);
                        node = next;
                    }
                    obj->destroy();
                }
            }
            *(int**)((char*)p + 0x40) = 0;
        }
        p = (Sphere*)((char*)p + 0x44);
    }
    unknown_4ff810(oldData);
}
