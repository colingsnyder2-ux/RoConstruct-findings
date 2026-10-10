// from server: 66% by colin
extern "C" {
    char* __cdecl strchr(const char* s, int c);
    int __cdecl sub_00617400(int);
    int __cdecl sub_006132F0(int*);
}

struct Seg_00610000 {
    int field0;
    char pad[0x34];
    int* field38;
    int method_00617750();
};

int Seg_00610000::method_00617750() {
    int result;
    int* p;
    int count;
    int ch;

    result = strchr((const char*)field0, 0x68) != 0;
    if (!result) {
        return 0;
    }

    sub_00617400(field0);

    p = field38;
    count = *p;
    *p = count - 1;
    if (count - 1 > 0) {
        char* q = (char*)p[1];
        ch = (unsigned char)*q;
        p[1] = (int)(q + 1);
        field0 = ch;
        return 1;
    }

    field0 = sub_006132F0(p);
    return 1;
}
