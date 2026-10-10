// from server: 51% by colin
struct CXTPImageManagerIconSet {
    int sub_64CA40(int, int);
};

extern "C" int __stdcall sub_634A60(void*, int, int*);
extern "C" int __stdcall sub_6486A0(int);
extern "C" int __stdcall sub_6EBD30(void*, int*, int*, int*);

int CXTPImageManagerIconSet::sub_64CA40(int a, int b) {
    int v4 = 0;
    int v5 = 0;
    int v6 = 0;
    int v7 = 0;
    int v8 = 0;
    int v9 = 0;

    if (a != 1 || a == 0) {
        v9 = 1;
    } else {
        v8 = 0;
        if (sub_634A60((char*)this + 0x20, a, &v8)) {
            return v8;
        }
        if (v8 == 0) {
            return 0;
        }
        v5 = v8;
    }

    v8 = (*(int*)((char*)this + 0x2c) != 0) ? -1 : 0;
    if (v8 != 0) {
        char* p = (char*)this + 0x20;
        do {
            v4 = 0;
            v6 = 0;
            v7 = 0;
            sub_6EBD30(p, &v4, &v7, &v6);
            if (v6 != 0) {
                int r = sub_6486A0(v4);
                if (r == 0) {
                    if (v5 == 0 || (a == 0 && v7 >= v5) || (a == 1 && v7 <= v5)) {
                        v5 = v4;
                        v5 = v7;
                    }
                }
            } else {
                if (v5 == 0 || (v7 - a < 0 ? -(v7 - a) : (v7 - a)) < v5) {
                    v5 = v4;
                    v5 = (v7 - a < 0 ? -(v7 - a) : (v7 - a));
                }
            }
        } while (v8 != 0);
    }

    return v5;
}
