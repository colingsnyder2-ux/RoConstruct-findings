// from server: 47% by colin
struct RakPeer {
    unsigned short field_8;
    char pad_0[0x224];
    void* field_22c;
    char pad_230[0x230];
    int field_460;
    int sub_4bab00(void*, void*);
    int sub_4a3480(void*);
    int sub_4bcad0(void*, void*, void*);
};

int RakPeer::sub_4bcad0(void* a, void* b, void* c) {
    char local_10;
    char local_c;
    int result;
    unsigned int i;
    unsigned int count;
    char* ptr;
    int* arr;

    if (sub_4a3480(&local_c) != 0) {
        return -1;
    }

    if (local_10 != 0) {
        result = sub_4bab00(&local_c, &local_10);
        if (local_10 == 0) {
            return -1;
        }
        arr = *(int**)this;
        return arr[result * 3 + 2];
    }

    count = field_8;
    i = 0;
    if (count > 0) {
        ptr = (char*)field_22c;
        while (i < count) {
            if (ptr[0] != 0) {
                if (sub_4a3480(ptr + 4) != 0) {
                    return i;
                }
            }
            i++;
            ptr += 0x840;
        }
    }
    return -1;
}
