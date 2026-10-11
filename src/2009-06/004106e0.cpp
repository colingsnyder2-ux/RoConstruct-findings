// from server: 15% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    char pad0[4];
    volatile long ref1;
    volatile long ref2;
    void (__thiscall *vfn4)(Inner*);
    void (__thiscall *vfn8)(Inner*);
};

struct Vec {
    char* begin;
    char* end;
    char* cap;
    void grow(char* pos, unsigned int n, char* val);
    void insert(char* pos, unsigned int n, char* val);
    void erase(char* first, char* last);
};

struct Outer {
    char* begin;
    char* end;
    char* cap;
    void assign(unsigned int n, char* val);
    void insert(char* pos, unsigned int n, char* val);
    void erase(char* first, char* last);
};

void Vec::grow(char* pos, unsigned int n, char* val) {}
void Vec::insert(char* pos, unsigned int n, char* val) {}
void Vec::erase(char* first, char* last) {}
void Outer::insert(char* pos, unsigned int n, char* val) {}
void Outer::erase(char* first, char* last) {}

void Outer::assign(unsigned int n, char* val) {
    char* first = begin;
    char* last = end;
    unsigned int cur = (unsigned int)((last - first) >> 3);
    if (n > cur) {
        if (first > last) _invalid_parameter_noinfo();
        unsigned int add = n - (unsigned int)((end - begin) >> 3);
        Vec v;
        v.begin = begin;
        v.end = end;
        v.cap = cap;
        v.grow(end, add, val);
    } else if (n < cur) {
        if (first > last) _invalid_parameter_noinfo();
        char* newend = first + (n << 3);
        if (newend < end) {
            char* p = end;
            if (first > last) _invalid_parameter_noinfo();
            char* q = begin;
            char* r = end;
            Vec v;
            v.begin = q;
            v.end = r;
            v.cap = cap;
            v.erase(newend, end);
        }
    }
}
