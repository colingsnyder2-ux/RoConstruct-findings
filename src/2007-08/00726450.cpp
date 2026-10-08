// from server: 100% by colin
// roc 2007-08 00726450  unit: boost::thread_resource_error  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00726450
//
// 00726450  56                   push esi
// 00726451  8bf1                 mov esi, ecx
// 00726453  8b06                 mov eax, dword ptr [esi]
// 00726455  6aff                 push -1
// 00726457  50                   push eax
// 00726458  ff15b4d27700         call dword ptr [0x77d2b4]
// 0072645e  8b0e                 mov ecx, dword ptr [esi]
// 00726460  51                   push ecx
// 00726461  ff153cd27700         call dword ptr [0x77d23c]
// 00726467  c6460800             mov byte ptr [esi + 8], 0
// 0072646b  5e                   pop esi
// 0072646c  c3                   ret 

extern "C" unsigned long (__stdcall *WaitForSingleObject)(void* handle, unsigned long ms);
extern "C" int (__stdcall *CloseHandle)(void* handle);

struct ThreadData {
    void* handle;
    int pad;
    unsigned char flag;
    void destroy();
};

void ThreadData::destroy()
{
    WaitForSingleObject(handle, 0xFFFFFFFF);
    CloseHandle(handle);
    flag = 0;
}
