// from server: 89% by colin
struct TextInput {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    bool wrongSymbol(int* key);
};

extern "C" int __stdcall sub_50f920(int* key);

bool TextInput::wrongSymbol(int* key) {
    int hash = sub_50f920(key);
    unsigned int idx = (unsigned int)hash % (unsigned int)field_c;
    int* node = *(int**)(field_8 + idx * 4);
    while (node != 0) {
        if (node[0] == hash) {
            int i = 0;
            int* p = node + 1;
            while (i < 2) {
                if (p[0] != key[i])
                    break;
                i++;
                p++;
            }
            if (i >= 2)
                return true;
        }
        node = *(int**)((char*)node + 0x18);
    }
    return false;
}
