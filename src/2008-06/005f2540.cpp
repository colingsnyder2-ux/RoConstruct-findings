// from server: 39% by colin
struct Alloc {
    char* allocate(unsigned int, const void*);
    void deallocate(char*, unsigned int);
};

extern Alloc* g_alloc;

struct S {
    char* field0;
    char* field4;
    void assign(char*);
};

void S::assign(char* p) {
    if (field4 != p) {
        char* tmp = g_alloc->allocate(1, 0);
        char* old = field4;
        field4 = p;
        char* old0 = field0;
        field0 = tmp;
        if (old0 != 0) {
            g_alloc->deallocate(old0, (unsigned int)old);
        }
    }
}
