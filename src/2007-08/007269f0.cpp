// from server: 100% by colin
// roc 2007-08 007269f0  unit: boost::thread_resource_error  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007269f0
//
// 007269f0  56                   push esi
// 007269f1  8bf1                 mov esi, ecx
// 007269f3  8b06                 mov eax, dword ptr [esi]
// 007269f5  6aff                 push -1
// 007269f7  50                   push eax
// 007269f8  ff15b4d27700         call dword ptr [0x77d2b4]
// 007269fe  8b0e                 mov ecx, dword ptr [esi]
// 00726a00  83461001             add dword ptr [esi + 0x10], 1
// 00726a04  6a00                 push 0
// 00726a06  6a01                 push 1
// 00726a08  51                   push ecx
// 00726a09  ff15d4d17700         call dword ptr [0x77d1d4]
// 00726a0f  5e                   pop esi
// 00726a10  c3                   ret 

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
