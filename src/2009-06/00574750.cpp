// from server: 54% by atomic.potato
struct GCamera {
    char pad0[0xc];
    char name[0x14];
    int nameLen;
    char pad24[0xc];
    int pos;
    int size;
    int capacity;
    void* data;
    int offset;

    void sub_574750(int a, int b);
};

extern "C" void* __stdcall sub_4FCD90(void*, int);
extern "C" void __stdcall sub_719A4A(void*, void*);
extern "C" void* __stdcall sub_89E9C4(void*, void*);
extern "C" void* __stdcall sub_89E914(void*, const char*);
extern "C" int __stdcall sub_89E894(void*, void*, int, int);
extern "C" int __stdcall sub_89E880(void*, int, int, void*);
extern "C" int __stdcall sub_89E8A4(void*);

void GCamera::sub_574750(int a, int b) {
    int ebx = this->pos + this->offset;
    if (this->capacity < b) {
        this->capacity = b;
        void* p = sub_4FCD90(this->data, b);
        this->data = p;
        if (!p) {
            void* e = sub_89E9C4(0, 0);
            sub_719A4A(e, (void*)0x981b3c);
        }
    }
    this->pos = a;
    char* nm = (this->nameLen < 0x10) ? this->name : *(char**)this->name;
    void* f = sub_89E914(nm, (const char*)0x8c67ec);
    int sz = this->size - this->pos;
    int cap = this->capacity;
    if (cap < sz) sz = cap;
    sub_89E880(this->data, 1, sz, f);
    sub_89E8A4(f);
    this->offset = ebx - this->pos;
}
