// from server: 40% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Buf {
    char pad0[4];
    char* begin;
    char* end;
};

struct Src {
    char pad0[4];
    char* begin;
    char* end;
};

struct Alloc {
    int alloc(int);
    void dealloc(void*);
};

int __fastcall func_0054ea30(void* self, void* edx, Src* src, int n)
{
    char* p = src->begin;
    char* q = src->end;
    if (p != (char*)-2 && p != 0 && p != *(char**)n) {
        _invalid_parameter_noinfo();
    }
    int len = (int)(q - *(char**)(n + 4));
    int cap = *(int*)((char*)self + 0x28);
    int* sel;
    if (cap < len) {
        sel = &cap;
    } else {
        sel = &len;
    }
    int count = *sel;
    if (count != 0) {
        char* dst = *(char**)(n + 4);
        char* srcp = *(char**)n;
        int old = *(int*)((char*)self + 0x10);
        *(int*)((char*)self + 0x10) = (int)srcp;
        ((Alloc*)self)->alloc(count);
        char* newend = *(char**)(n + 4);
        char* newbegin = *(char**)n;
        if (newend != (char*)old) {
            int off = *(int*)((char*)self + 0x28) - (int)newend;
            char* d = (char*)(off + (int)newend);
            char* s = newend;
            while (s != (char*)old) {
                *d = *s;
                s++;
                d++;
            }
        }
    }
    ((Alloc*)self)->dealloc((void*)count);
    if (count != 0) {
        return count;
    }
    return -1;
}
