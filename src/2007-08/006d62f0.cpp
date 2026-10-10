// from server: 70% by colin
struct CXTPReportGroupRow {
    char pad[0x20];
    void* field_20;
    void func(int, int);
};

extern "C" int __cdecl sub_656830(int, int, int);
extern "C" int __cdecl sub_65A750(int, int);

void CXTPReportGroupRow::func(int a, int b) {
    if (field_20 != 0) {
        void* p = field_20;
        void* v = *(void**)((char*)p + 0xa0);
        int (*fn)(void*, int) = *(int (**)(void*, int))((char*)v + 0x74);
        int r = sub_656830(*(int*)((char*)p + 0x17c), a, b);
        int r2 = fn(*(void**)((char*)field_20 + 0xa0), r);
        sub_65A750((int)field_20, r2);
    }
}
