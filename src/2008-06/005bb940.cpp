// from server: 24% by colin
struct SoundService {
    char pad[0x18];
    void* field18;
    void construct(void* a, void* b, void* c, void* d, void* e, void* f);
};

extern "C" void* __stdcall sub_5BB7F0(void* a, void* b);
extern "C" void __stdcall sub_445610(void* a, void* b);
extern "C" void* __stdcall sub_6A0920(unsigned int size);
extern "C" void __stdcall sub_6A067A(void* p);

void SoundService::construct(void* a, void* b, void* c, void* d, void* e, void* f)
{
    void* v = sub_5BB7F0(d, e);
    sub_445610(this, v);
    this->field18 = 0;
    *(void**)this = (void*)0x824134;
    void* mem = sub_6A0920(0x18);
    if (mem == 0) {
        *(void**)mem = (void*)0x83760C;
        *(void**)((char*)mem + 4) = this;
        *(void**)((char*)mem + 8) = c;
        *(void**)((char*)mem + 0x10) = d;
        *(void**)((char*)mem + 0x14) = e;
    } else {
        mem = 0;
    }
    void* old = this->field18;
    if (mem != old && old != 0) {
        sub_6A067A(old);
    }
    this->field18 = mem;
}
