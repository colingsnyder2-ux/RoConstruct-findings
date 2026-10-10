// from server: 66% by colin
struct RakPeer {
    unsigned short field_8;
    char pad[0x22c - 0xa];
    int field_22c;
    int field_230;
    int sub_4bab00(int* a, int* b);
    int sub_4a3480(const char* s);
    int func(int a, int b, int c, int d);
};

int RakPeer::func(int a, int b, int c, int d)
{
    int local1;
    int local2;
    int i;
    int offset;
    int found;

    if (sub_4a3480((const char*)0x892f5c) != 0)
        return 0;

    if (*(char*)&a != 0) {
        sub_4bab00(&local1, &local2);
        if (*(char*)&local2 != 0) {
            int idx = local1 + local1 * 2;
            int* p = (int*)field_230;
            int v = *(int*)((char*)p + idx * 4 + 8);
            v *= 0x840;
            return v + field_22c;
        }
    } else {
        found = -1;
        if (field_8 > 0) {
            offset = 0;
            for (i = 0; i < field_8; i++) {
                if (sub_4a3480((const char*)(offset + field_22c + 4)) != 0) {
                    if (*(char*)(offset + field_22c) != 0) {
                        return offset + field_22c;
                    }
                    if (found == -1)
                        found = i;
                }
                offset += 0x840;
            }
            if (found != -1 && *(char*)&d == 0) {
                int v = found * 0x840;
                return v + field_22c;
            }
        }
    }
    return 0;
}
