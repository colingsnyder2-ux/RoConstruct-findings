// from server: 62% by colin
struct CXTColorHex {
    char pad[0x6c];
    int field_6c;
    int field_70;
    int field_74;
    char pad2[0x80 - 0x78];
    void* field_80;
    int method(int a, int b);
};

int CXTColorHex::method(int a, int b) {
    void* node = field_80;
    while (node != 0) {
        int* entry = *(int**)((char*)node + 8);
        if (entry != 0) {
            int count;
            if (entry[4] != 0) {
                count = 0x2b3;
            } else {
                count = 0xa8;
            }
            int i = 0;
            if (count > 0) {
                int* data = (int*)entry[5];
                do {
                    if (a == data[0] && b == data[1]) {
                        int* src = (int*)entry[5];
                        field_70 = src[0];
                        field_74 = src[1];
                        field_6c = entry[4];
                        return 0;
                    }
                    i++;
                    data += 2;
                } while (i < count);
            }
        }
        node = *(void**)node;
    }
    return -1;
}
