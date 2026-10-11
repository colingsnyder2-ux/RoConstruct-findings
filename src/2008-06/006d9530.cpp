// from server: 35% by colin
struct CXTPReportRecordItemDateTime {
    char pad[0x7c];
    int type;
    int f(int);
};

extern "C" char* __cdecl func_006d8810();
extern "C" void* __cdecl func_006a0c26(char*);
extern "C" int __cdecl func_006a17f0(double);
extern "C" char __cdecl func_006d9490(int*);

int CXTPReportRecordItemDateTime::f(int a)
{
    char* p = func_006d8810();
    void* q = func_006a0c26(p);
    if (q != 0)
        return 0;
    int* other = (int*)((char*)q + 0x7c);
    int* self = (int*)((char*)this + 0x7c);
    if (self[2] == other[2]) {
        if (self[2] == 0) {
            double d1 = *(double*)other;
            double d2 = *(double*)self;
            if (d1 == d2)
                return 0;
        } else if (self[2] == 2) {
            return 0;
        }
    }
    if (self[2] == 0 && other[2] == 0) {
        char r = func_006d9490(other);
        return (r != 0) ? 1 : -1;
    }
    double d1 = *(double*)self;
    double d2 = *(double*)other;
    return func_006a17f0(d1 - d2);
}
