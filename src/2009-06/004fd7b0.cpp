// from server: 70% by colin
struct NetworkOwnerJob {
    char pad[8];
    struct Entry {
        int value;
        unsigned short weight;
        unsigned short pad2;
    };
    Entry table[256];
    void invalidateProjectileOwnership(int addr, const char* data, unsigned int len);
};

extern "C" void __stdcall sub_4d9c40(int a, int b, int c);

void NetworkOwnerJob::invalidateProjectileOwnership(int addr, const char* data, unsigned int len) {
    unsigned int i;
    for (i = 0; i < len; ++i) {
        unsigned char c = (unsigned char)data[i];
        unsigned short w = table[c].weight;
        int v = table[c].value;
        sub_4d9c40(v, w, 0);
    }
    int* p = (int*)addr;
    int val = *p;
    if ((val & 7) != 0) {
        unsigned char rem = (unsigned char)(val & 7);
        unsigned char shift = (unsigned char)(8 - rem);
        unsigned short mask = (unsigned short)shift;
        int idx = 0;
        Entry* t = table;
        while (idx < 256) {
            if (t->weight > mask) {
                int v = t->value;
                sub_4d9c40(v, shift, 0);
                break;
            }
            ++idx;
            ++t;
        }
    }
}
