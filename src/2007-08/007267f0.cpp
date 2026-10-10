// from server: 55% by colin
extern "C" __declspec(dllimport) void* __stdcall CreateMutexA(void* lpMutexAttributes, int bInitialOwner, const char* lpName);
extern "C" __declspec(dllimport) void* __stdcall CreateSemaphoreA(void* lpSemaphoreAttributes, long lInitialCount, long lMaximumCount, const char* lpName);
extern "C" __declspec(dllimport) int __stdcall CloseHandle(void* hObject);

void __stdcall sub_725810(void* p);
void __stdcall sub_630B9E(void* p1, void* p2);

struct boost_thread_resource_error {
    void* field_0;
    void* field_4;
    void* field_8;
    int field_C;
    int field_10;
    int field_14;
    boost_thread_resource_error* init();
};

boost_thread_resource_error* boost_thread_resource_error::init()
{
    void* (__stdcall *createMutex)(void*, int, const char*) = CreateMutexA;
    void* (__stdcall *createSemaphore)(void*, long, long, const char*) = CreateSemaphoreA;
    int (__stdcall *closeHandle)(void*) = CloseHandle;

    field_C = 0;
    field_10 = 0;
    field_14 = 0;

    field_0 = createMutex(0, 1, 0);
    field_4 = createSemaphore(0, 0x7fffffff, 0x7fffffff, 0);
    field_8 = (void*)closeHandle;

    if (field_0 == 0 && field_4 != 0 && field_8 != 0)
        return this;

    if (field_0 != 0)
        closeHandle(field_0);
    if (field_4 != 0)
        closeHandle(field_4);
    if (field_8 != 0)
        closeHandle(field_8);

    sub_725810(&field_C);
    sub_630B9E(&field_C, (void*)0x843a78);
    return this;
}
