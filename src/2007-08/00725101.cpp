// from server: 72% by colin
extern "C" __declspec(dllimport) void *__stdcall HeapAlloc(void *hHeap, unsigned long dwFlags, unsigned long dwBytes);

struct CXTIconHandle {
    void *field0;
    void *field4;
    void *method(unsigned long size);
};

void *CXTIconHandle::method(unsigned long size) {
    return HeapAlloc(0, 0, size);
}
