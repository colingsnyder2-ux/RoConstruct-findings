// from server: 44% by colin
// roc 2007-08 004f8bf0  unit: G3D::Sphere  size: 593 bytes

extern "C" {
    int __stdcall InterlockedDecrement(int*);
}

struct Vector3 {
    float x, y, z;
};

struct Sphere {
    Vector3 center;
    float radius;
};

struct ArrayBase {
    int* data;
    int size;
    int capacity;
};

struct Entry {
    int a, b, c, d;
    int e, f, g, h;
    int i, j, k, l;
    int m, n, o, p;
    int q;
    int* ptr;
};

struct SphereSet {
    Entry* data;
    int size;
    int capacity;

    void resize(int newSize);
    void reserve(int newCapacity);
    void remove(int index);
};

void SphereSet::resize(int newSize) {
    int oldSize = size;
    size = newSize;
    if (newSize < oldSize) {
        int count = oldSize - newSize;
        Entry* e = data + newSize;
        do {
            if (e->ptr) {
                if (InterlockedDecrement((int*)((char*)e->ptr + 4)) == 0) {
                    int* p = (int*)e->ptr;
                    int* child = (int*)p[2];
                    while (child) {
                        int* next = (int*)child[1];
                        (*(void(**)(int*))(*child))(child);
                        extern void __cdecl free(void*);
                        free(child);
                        child = next;
                    }
                    if (e->ptr) {
                        (*(void(**)(int*, int))*(int**)e->ptr)(e->ptr, 1);
                    }
                }
                e->ptr = 0;
            }
            e++;
        } while (--count);
    }
    extern int g_8bfc08;
    if (!(*(int*)0x8bfc0c & 1)) {
        *(int*)0x8bfc0c |= 1;
        g_8bfc08 = 10;
    }
    int minSize = g_8bfc08;
    if (size > capacity) {
        if (capacity == 0) {
            reserve(oldSize);
        } else if (size < minSize) {
            reserve(minSize);
        } else {
            float f = 1.5f;
            int bytes = capacity * 68;
            if (bytes > 0x61a80) {
                f = 2.0f;
            } else if (bytes > 0xfa00) {
                f = 1.75f;
            }
            int newCap = (int)(capacity * f);
            newCap = newCap - capacity + size;
            capacity = newCap;
            if (capacity < g_8bfc08) {
                capacity = g_8bfc08;
            }
            reserve(oldSize);
        }
    } else if (size <= capacity / 3 && *(char*)&oldSize != 0 && size > minSize && size < oldSize) {
        if (size >= oldSize) {
            size = oldSize;
        }
        reserve(size);
    }
    int i = oldSize;
    while (i < size) {
        Entry* e = data + i;
        if (e) {
            extern void* __cdecl operator_new(unsigned int);
            extern void __cdecl construct(void*, void*);
            construct(e, operator_new(0));
            e->q = 0;
            e->ptr = 0;
            e->m = 0;
            e->o = 0;
            e->n = 0;
            e->p = 0;
        }
        i++;
    }
}
