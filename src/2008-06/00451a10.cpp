// from server: 93% by colin




extern "C" void* __stdcall sub_554270();

struct Map {
    int* lookup(int* key);
};

struct VerbBinder {
    char pad[0x54];
    Map map;
    void insert(int a, int b);
};

void VerbBinder::insert(int a, int b) {
    int* p;
    if (a != 0) {
        int v = *(int*)(a + 4);
        int key = b;
        p = map.lookup(&key);
        *p = v;
    } else {
        int v = (int)sub_554270();
        int key = b;
        p = map.lookup(&key);
        *p = v;
    }
}
