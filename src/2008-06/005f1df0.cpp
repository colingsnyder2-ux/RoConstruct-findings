// from server: 60% by tester
extern "C" __declspec(dllimport) int __stdcall ReleaseMutex(void*);
extern "C" __declspec(dllimport) int __stdcall ReleaseSemaphore(void*, long, long*);
extern "C" __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(void*, unsigned long);

extern void* g_802280;
extern void* g_802288;
extern void* g_8022c0;

struct S {
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
    int field10;
    int field14;
    void method();
};

void S::method() {
    void* ebx = g_802288;
    int ebp = fieldC;
    int edi = field14;

    ReleaseMutex(field4);
    ReleaseMutex(field8);

    if (edi != 0) {
        edi = edi - 1;
        field14 = edi;
        if (edi != 0) {
            if (field10 == edi) {
                if (ebp != 0) {
                    fieldC = 0;
                }
            } else {
                ReleaseSemaphore(field0, 1, 0);
                edi = 0;
            }
        }
    } else {
        ebp = ebp + 1;
        fieldC = ebp;
        if (ebp == 0x7fffffff) {
            ReleaseMutex(field0);
            field10 -= fieldC;
            ReleaseSemaphore(field0, 1, 0);
            fieldC = 0;
        }
    }

    WaitForSingleObject(field8, 0xffffffff);

    if (edi == 1) {
        while (ebp != 0) {
            ReleaseMutex(field4);
            ebp = ebp - 1;
        }
        ReleaseSemaphore(field0, 1, 0);
    }
}
