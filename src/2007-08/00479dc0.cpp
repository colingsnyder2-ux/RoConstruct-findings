// from server: 89% by Viper
struct TextureArgs {
    bool f(void*);
};

struct Entry {
    int key;
    char pad[4];
    Entry* next;
};

struct Manager {
    char pad0[8];
    Entry** buckets;
    unsigned int bucketCount;
};

extern "C" bool __stdcall sub_479D60(void*, void*);

bool TextureArgs::f(void* arg)
{
    Manager* mgr = (Manager*)this;
    int key = (*(int (__thiscall **)(void*))*(void**)arg)(arg);
    unsigned int idx = (unsigned int)key % mgr->bucketCount;
    Entry* e = mgr->buckets[idx];
    while (e) {
        if (e->key == key) {
            if (sub_479D60((char*)e + 8, arg))
                return true;
        }
        e = *(Entry**)((char*)e + 0x48);
    }
    return false;
}
