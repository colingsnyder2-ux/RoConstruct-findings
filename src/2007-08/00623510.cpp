// from server: 44% by colin
struct ArrowPanel {
    void construct(const char* name, int a, int b);
};

extern "C" void* __stdcall malloc(unsigned int);
extern "C" void __stdcall free_string(void*);

void ArrowPanel::construct(const char* name, int a, int b)
{
    char buf[12];
    *(int*)(buf + 4) = 0;
    void* p = malloc(0x114);
    *(void**)(buf + 8) = p;
    if (p) {
        *(int*)(buf + 0) = 0;
        void* q = 0;
        *(void**)(buf + 0) = 0;
        free_string(buf + 0);
    } else {
        p = 0;
    }
    *(void**)(buf + 0) = p;
    free_string(buf + 0);
}
