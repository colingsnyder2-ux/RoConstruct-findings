// from server: 72% by colin
struct CMap {
    int unknown0;
    int unknown4;
    unsigned int count8;
    int unknownC;
    void Serialize(void* ar);
};

extern "C" void __stdcall sub_68B860(void* ar, void* data, int flag);
extern "C" void* __stdcall sub_6306A6(void* ar);
extern "C" void __stdcall sub_6306AC(void* ar, int val);
extern "C" void* __stdcall sub_6353A0(CMap* map, int key);

void CMap::Serialize(void* ar) {
    int* pAr = (int*)ar;
    unsigned int flags = *(unsigned int*)((char*)ar + 0x18);
    if ((~flags & 1) == 0) {
        sub_6306AC(ar, unknownC);
        if (unknownC == 0)
            return;
        unsigned int i = 0;
        if (count8 == 0)
            return;
        do {
            int* node = (int*)((char*)unknown4 + i * 4);
            int* cur = (int*)*node;
            while (cur != 0) {
                sub_68B860(ar, cur, 1);
                sub_68B860(ar, (char*)cur + 4, 1);
                cur = (int*)cur[2];
            }
            i++;
        } while (i < count8);
    } else {
        int n = (int)sub_6306A6(ar);
        if (n == 0)
            return;
        do {
            int key;
            int val;
            n--;
            sub_68B860(ar, &key, 1);
            sub_68B860(ar, &val, 1);
            int* slot = (int*)sub_6353A0(this, key);
            *slot = val;
        } while (n != 0);
    }
}
