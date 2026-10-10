// from server: 26% by colin
struct VMeshDirectedEdgeKeyTable {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int insert(int* key);
};

extern "C" int __cdecl sub_50F920(int* key);
extern "C" void* __cdecl sub_500010(unsigned int size);
extern "C" void __cdecl sub_4F4E10(void* dest, int* src);
extern "C" int __cdecl sub_50FAE0(void* node, int a, int b);
extern "C" int __cdecl sub_50F8E0(void* node, int* key);
extern "C" void __cdecl sub_4D0100(void* self, int size);

int VMeshDirectedEdgeKeyTable::insert(int* key) {
    int hash = sub_50F920(key);
    int idx = hash % this->fieldC;
    int* node = (int*)this->field8;
    int* slot = &node[idx];
    int* cur = (int*)*slot;
    if (cur == 0) {
        int* newNode = (int*)sub_500010(0x1c);
        if (newNode != 0) {
            sub_4F4E10(newNode, key);
            int a = key[0];
            int b = key[1];
            sub_50FAE0(newNode, a, b);
        }
        *slot = (int)newNode;
        this->field4++;
        return (int)newNode;
    }
    int depth = 1;
    int found = 0;
    while (cur != 0) {
        if (cur[0] == hash) {
            int match = 1;
            for (int i = 0; i < 2; i++) {
                if (cur[1 + i] != key[i]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                sub_50F8E0(cur + 3, key);
                return (int)cur;
            }
        }
        cur = (int*)cur[6];
        depth++;
    }
    if (depth > 5 && this->fieldC < this->field4 * 10) {
        sub_4D0100(this, this->fieldC * 2 + 1);
    }
    int newIdx = hash % this->fieldC;
    int* newNode = (int*)sub_500010(0x1c);
    if (newNode != 0) {
        int* head = (int*)((int*)this->field8)[newIdx];
        sub_4F4E10(newNode, key);
        int a = key[0];
        int b = key[1];
        sub_50FAE0(newNode, a, b);
        ((int*)this->field8)[newIdx] = (int)newNode;
    } else {
        ((int*)this->field8)[newIdx] = 0;
    }
    this->field4++;
    return (int)newNode;
}
