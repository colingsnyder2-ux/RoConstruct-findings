// roc 2007-03 007272b0  unit: seg_00720000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007272b0
//
// 007272b0  56                   push esi
// 007272b1  8bf1                 mov esi, ecx
// 007272b3  8b06                 mov eax, dword ptr [esi]
// 007272b5  6aff                 push -1
// 007272b7  50                   push eax
// 007272b8  ff1574d27700         call dword ptr [0x77d274]
// 007272be  8b0e                 mov ecx, dword ptr [esi]
// 007272c0  83461001             add dword ptr [esi + 0x10], 1
// 007272c4  6a00                 push 0
// 007272c6  6a01                 push 1
// 007272c8  51                   push ecx
// 007272c9  ff1554d37700         call dword ptr [0x77d354]
// 007272cf  5e                   pop esi
// 007272d0  c3                   ret 
// copied from an identical function in another client (function ?release@boost_thread_resource_error@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
extern "C" {
    __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(void* hHandle, unsigned long dwMilliseconds);
    __declspec(dllimport) int __stdcall ReleaseSemaphore(void* hSemaphore, long lReleaseCount, long* lpPreviousCount);
}

struct boost_thread_resource_error {
    void* m_handle;
    int m_pad[3];
    int m_count;
    void release();
};

void boost_thread_resource_error::release() {
    WaitForSingleObject(m_handle, 0xFFFFFFFF);
    m_count += 1;
    ReleaseSemaphore(m_handle, 1, 0);
}
}
