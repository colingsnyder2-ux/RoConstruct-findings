// from server: 9% by colin
struct ArrowPanel {
    void construct(const void* src);
};

extern "C" void* __stdcall malloc(unsigned int size);
extern "C" void __stdcall destroy_string(void* p);

void ArrowPanel::construct(const void* src)
{
    void* mem = malloc(0x138);
    if (mem) {
        void* tmp = 0;
        void* result = 0;
        // call 0x61be80 with (src, &tmp)
        // result = some_constructor(mem, src, &tmp)
        // then call 0x623310 with (this, result, tmp)
    }
}
