// from server: 97% by colin
struct Name;

Name const& __cdecl getLocalScope();

struct Map {
    char data[84];
    void** lookup(void* const* key);
};

struct S_func_00451a10 {
    char pad[84];
    Map map;
    void f(void* key, void* node);
};

void S_func_00451a10::f(void* key, void* node)
{
    if (node) {
        void* value = *(void**)((char*)node + 4);
        void* k = key;
        *map.lookup(&k) = value;
    } else {
        void* value = (void*)&getLocalScope();
        void* k = key;
        *map.lookup(&k) = value;
    }
}
