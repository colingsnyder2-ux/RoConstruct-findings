// from server: 100% by tester
// roc 2008-06 007f9f0c  unit: seg_007f0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9f0c
//
// 007f9f0c  ff15b8228000         call dword ptr [0x8022b8]
// 007f9f12  6854198000           push 0x801954
// 007f9f17  c705e0f29700581f8700 mov dword ptr [0x97f2e0], 0x871f58
// 007f9f21  a3e4f29700           mov dword ptr [0x97f2e4], eax
// 007f9f26  c605e8f2970000       mov byte ptr [0x97f2e8], 0
// 007f9f2d  e87d78eaff           call 0x6a17af
// 007f9f32  59                   pop ecx
// 007f9f33  c3                   ret 

#include <stddef.h>

typedef void* HANDLE;
extern "C" __declspec(dllimport) HANDLE __stdcall GetProcessHeap();
extern "C" __declspec(dllimport) int __stdcall HeapDestroy(HANDLE hHeap);

namespace ATL {
__interface __declspec(uuid("654F7EF5-CFDF-4df9-A450-6C6A13C622C0")) IAtlMemMgr
{
public:
    void* Allocate(size_t nBytes);
    void Free(void* p);
    void* Reallocate(void* p, size_t nBytes);
    size_t GetSize(void* p);
};

class CWin32Heap : public IAtlMemMgr
{
public:
    CWin32Heap(HANDLE hHeap) throw() :
        m_hHeap(hHeap),
        m_bOwnHeap(false)
    {
    }
    ~CWin32Heap() throw()
    {
        if (m_bOwnHeap && (m_hHeap != NULL))
            ::HeapDestroy(m_hHeap);
    }

    virtual void* Allocate(size_t nBytes) throw();
    virtual void Free(void* p) throw();
    virtual void* Reallocate(void* p, size_t nBytes) throw();
    virtual size_t GetSize(void* p) throw();

public:
    HANDLE m_hHeap;
    bool m_bOwnHeap;
};
}

static ATL::CWin32Heap processHeap(::GetProcessHeap());
