// roc 2008-06 005f1dd0  unit: RBX::FaceInstance  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1dd0
//
// 005f1dd0  56                   push esi
// 005f1dd1  8bf1                 mov esi, ecx
// 005f1dd3  8b06                 mov eax, dword ptr [esi]
// 005f1dd5  6aff                 push -1
// 005f1dd7  50                   push eax
// 005f1dd8  ff1588228000         call dword ptr [0x802288]
// 005f1dde  8b0e                 mov ecx, dword ptr [esi]
// 005f1de0  ff4610               inc dword ptr [esi + 0x10]
// 005f1de3  6a00                 push 0
// 005f1de5  6a01                 push 1
// 005f1de7  51                   push ecx
// 005f1de8  ff15c0228000         call dword ptr [0x8022c0]
// 005f1dee  5e                   pop esi
// 005f1def  c3                   ret 
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
