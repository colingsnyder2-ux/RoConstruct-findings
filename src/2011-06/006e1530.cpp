// from server: 37% by atomic.potato




extern "C" {
    void* __stdcall alloc_fn(void*, unsigned int, const void*);
    void __stdcall free_fn(void*, char*, unsigned int);
}

struct Alloc {
    char* allocate(unsigned int, const void*);
    void deallocate(char*, unsigned int);
};

struct S {
    char* field0;
    char* field4;
    void assign(char*);
};

void S::assign(char* p) {
    if (this->field4 != p) {
        char* tmp = ((Alloc*)this)->allocate(0, p);
        char* old4 = this->field4;
        this->field4 = p;
        char* old0 = this->field0;
        this->field0 = tmp;
        if (old0) {
            ((Alloc*)this)->deallocate(old0, (unsigned int)old4);
        }
    }
}
