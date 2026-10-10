// from server: 56% by colin
struct Sphere {
    void* vtable;
    int count;
    int capacity;
    void* data;
    void resize(int newCount);
};

extern "C" int __cdecl _ftol2(float);
extern "C" void __cdecl free(void*);
extern "C" void __cdecl unknown_50aa00();

int g_8bfbf8;
int g_8bfbfc;
float g_797b38;
float g_797b34;
float g_797988;

void Sphere::resize(int newCount) {
    int oldCount = count;
    count = newCount;
    if (!(g_8bfbfc & 1)) {
        g_8bfbfc |= 1;
        g_8bfbf8 = 10;
    }
    int minCap = g_8bfbf8;
    int cap = capacity;
    if (count > cap) {
        if (cap == 0) {
            capacity = newCount;
        } else if (count < minCap) {
            capacity = minCap;
        } else {
            float factor = g_797b38;
            unsigned int bytes = (unsigned int)cap * 80;
            if (bytes > 0x61a80) {
                factor = g_797b34;
            } else if (bytes > 0xfa00) {
                factor = g_797988;
            }
            int grown = _ftol2((float)cap * factor);
            grown = grown - count + cap;
            capacity = grown;
            if (capacity < g_8bfbf8) {
                capacity = g_8bfbf8;
            }
        }
    } else {
        int third = cap / 3;
        if (count <= third) {
            if (*(char*)&newCount != 0) {
                if (count > minCap) {
                    if (count < oldCount) {
                        oldCount = count;
                    }
                    resize(oldCount);
                }
            }
        }
    }
    if (oldCount < count) {
        int i = oldCount;
        while (i < count) {
            void* p = (char*)data + i * 80;
            int zero = 0;
            if (p != 0) {
                unknown_50aa00();
            }
            i++;
        }
    }
}
