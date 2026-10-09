// from server: 18% by colin
// roc 2007-08 0054c6e0  unit: UString_sink::?$stream_buffer  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c6e0

extern "C" int __stdcall pubsunc_helper(void*);

struct stream_buffer_base {
    int sync();
};

struct stream_buffer_derived : stream_buffer_base {
    int sync();
};

int stream_buffer_derived::sync()
{
    if (*(int*)((char*)this + 4) & 2) {
        int* p = *(int**)this;
        int* q = *(int**)p;
        int* r = *(int**)((char*)q + 8);
        int* s = *(int**)((char*)r + 4);
        int* t = *(int**)((char*)s + (int)q + 0x30);
        return pubsunc_helper(t);
    }
    return 0;
}
