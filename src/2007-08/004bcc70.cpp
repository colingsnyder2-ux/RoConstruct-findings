// from server: 97% by colin
struct RakPeer {
    char pad[0x7d4];
    unsigned short entries[5];
    int values[5];
};

extern "C" int __stdcall sub_4bcb80(int, int, int, int);

int __stdcall sub_4bcc70(int a, int b)
{
    RakPeer* p = (RakPeer*)sub_4bcb80(a, b, 1, 1);
    if (p == 0)
        return 0;

    int best = 0;
    int bestIndex = 0xffff;
    int i = 0;
    unsigned short* e = p->entries;
    do {
        unsigned short idx = *e;
        if (idx == 0xffff)
            break;
        int wide = idx;
        if (wide < bestIndex) {
            best = *(int*)(e + 2);
            bestIndex = wide;
        }
        ++i;
        e += 4;
    } while (i < 5);
    return best;
}
