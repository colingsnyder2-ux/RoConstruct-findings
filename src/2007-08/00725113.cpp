// from server: 63% by colin
extern "C" int __stdcall HeapFree(int, unsigned int, void*);

struct CXTIconHandle {
    void* field_4;
    void destroy(void* p);
};

void CXTIconHandle::destroy(void* p)
{
    if (p != 0)
        HeapFree(0, 0, field_4);
}
