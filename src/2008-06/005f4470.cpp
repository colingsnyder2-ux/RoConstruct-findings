// from server: 28% by tester
struct stream_buffer
{
    void* vtable;
    void* field4;
    void* field8;
    void destroy();
};

extern "C" int __stdcall pubsync(void*);
extern void func_005f37d0();

void stream_buffer::destroy()
{
    this->vtable = (void*)0x840adc;
    void* p = this->field8;
    int* q = *(int**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 8) = (void*)0x840ad4;
    int* r = *(int**)this->field4;
    if (*(unsigned char*)((char*)r + 0x2c) & 1)
    {
        void* s = this->field8;
        int* t = *(int**)((char*)s + 4);
        void* u = *(void**)((char*)t + (int)this + 0x30);
        pubsync(u);
    }
    func_005f37d0();
}
