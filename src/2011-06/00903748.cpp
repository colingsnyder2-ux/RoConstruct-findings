// from server: 86% by atomic.potato
typedef unsigned long DWORD;
typedef int BOOL;

extern "C" BOOL __stdcall HeapDestroy(void*);

struct CXTIconHandle
{
    void f();
};

void CXTIconHandle::f()
{
    *reinterpret_cast<DWORD*>(this) = 0x00ae0428;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 8) != 0)
    {
        void* p = reinterpret_cast<void*>(*reinterpret_cast<DWORD*>(reinterpret_cast<char*>(this) + 4));
        if (p != 0)
            HeapDestroy(p);
    }
}
