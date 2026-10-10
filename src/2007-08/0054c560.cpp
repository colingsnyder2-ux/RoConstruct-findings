// from server: 62% by colin
struct UString_sink_stream_buffer {
    void* data;
    void write(const char* s, int n);
};

extern "C" void __cdecl sub_401000(unsigned int);
extern "C" void __cdecl sub_413140(void*, int);
extern "C" void __cdecl sub_545160(void*);
extern "C" void* __stdcall sub_77e86c(void*, int);

void UString_sink_stream_buffer::write(const char* s, int n) {
    int* p = (int*)data;
    int start = p[-3];
    int end = p[-2];
    int cap = p[-1];
    int need = 1 - cap;
    int diff = end - start;
    if ((need | diff) < 0) {
        sub_413140(this, start);
    }
    int* q = (int*)data;
    void* r = sub_77e86c(q, start + 1);
    sub_545160(r);
    if (start >= 0 && start <= q[-2]) {
        q[-3] = start;
        ((char*)data)[start] = 0;
    } else {
        sub_401000(0x80070057);
    }
}
