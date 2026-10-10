// from server: 63% by colin
extern "C" {
__declspec(dllimport) void* __stdcall WaitForSingleObject(void*, unsigned long);
__declspec(dllimport) int __stdcall ReleaseMutex(void*);
__declspec(dllimport) int __stdcall ReleaseSemaphore(void*, long, long*);
}

struct boost_thread_resource_error {
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
    int field10;
    int field14;
    void release();
};

void boost_thread_resource_error::release() {
    void* (__stdcall *wait)(void*, unsigned long) = *(void* (__stdcall**)(void*, unsigned long))0x77d2b4;
    int (__stdcall *releaseSem)(void*, long, long*) = *(int (__stdcall**)(void*, long, long*))0x77d1d4;
    int (__stdcall *releaseMutex)(void*) = *(int (__stdcall**)(void*))0x77d1c8;

    wait(field8, 0xFFFFFFFF);

    int flag = 0;
    if (field14 != 0) {
        if (field10 != 0) {
            field14 = field14 + 1;
            field10 = field10 - 1;
            flag = 1;
        } else {
            releaseMutex(field8);
            return;
        }
    } else {
        wait(field0, 0xFFFFFFFF);
        int a = field10;
        int b = fieldC;
        if (a > b) {
            if (b != 0) {
                field10 = a - b;
                fieldC = 0;
            }
            field10 = field10 - 1;
            flag = 1;
            field14 = flag;
        } else {
            releaseSem(field0, 1, 0);
        }
    }

    releaseMutex(field8);

    if (flag != 0) {
        releaseSem(field4, flag, 0);
    }
}
