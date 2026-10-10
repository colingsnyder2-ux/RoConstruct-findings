// from server: 44% by colin
extern "C" {
    void __stdcall sub_77DDAC(void*);
    void __stdcall sub_77D434(void*, void*);
    void __stdcall sub_77DDBC(void*);
    int __fastcall sub_69AAF0(void*, int, void*);
}

struct CXTPPropertyGridItem {
    char pad[0xb4];
    void* field_b4;
    int sub_697B10(void* arg);
};

int CXTPPropertyGridItem::sub_697B10(void* arg) {
    if (field_b4 == 0) {
        return 0;
    }

    char local1[4];
    char local2[4];
    char local3[4];

    sub_77DDAC(local1);

    void* p = arg;
    sub_77D434(local2, p);

    int result = 0;
    if (field_b4 != 0) {
        local3[0] = 0;
        local3[1] = 0;
        local3[2] = 0;
        local3[3] = 0;
        sub_69AAF0(field_b4, 12, local3);
        sub_77D434(p, local3);
    }

    result = (local3[0] == 0) ? 1 : 0;

    sub_77DDBC(local1);

    return result;
}
