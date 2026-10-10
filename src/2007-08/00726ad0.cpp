// from server: 54% by colin
extern "C" {
    int __stdcall WaitForSingleObject(void*, unsigned long);
    int __stdcall ReleaseMutex(void*);
    int __stdcall ReleaseSemaphore(void*, long, long*);
}

struct Inner {
    void method_007262e0(int*);
    void method_00726780(int*, int);
};

struct S {
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
    int field10;
    int field14;
    void method_00726ad0(int*);
};

void S::method_00726ad0(int* param)
{
    int local10;
    int local14;
    int local18;
    int local1C;
    char local20;
    int local24;
    int local28;
    int local2C;
    int local30;
    int local34;
    int local38;
    int local3C;

    void* (__stdcall *waitFn)(void*, unsigned long) = (void* (__stdcall *)(void*, unsigned long))WaitForSingleObject;

    int* p = param;
    int* pEnd = (int*)((char*)param + 0x10);

    for (;;) {
        int v0 = p[0];
        int v1 = p[1];
        int v2 = p[2];
        int v3 = p[3];

        local10 = v0;
        local14 = v1;
        local18 = v2;
        local1C = v3;

        ((Inner*)this)->method_007262e0(&local10);

        int r = (int)waitFn(field4, 0xFFFFFFFF);
        local20 = (r == 0);
        if (r == 0x102) {
            ((Inner*)this)->method_00726780(&local24, 1);
            if (p[0] == local24 && p[1] == local28 && p[2] - local2C > 0) {
                continue;
            }
        }
        break;
    }

    waitFn(field8, 0xFFFFFFFF);

    int count = field14;
    int oldCount = fieldC;

    if (count != 0) {
        if (local20 == 0) {
            if (field10 != 0) {
                field10 = field10 - 1;
            } else {
                fieldC = oldCount + 1;
            }
        }
        field14 = count - 1;
        if (field14 == 0) {
            if (field10 != field14) {
                ReleaseMutex(field0);
            } else if (fieldC != 0) {
                fieldC = 0;
            }
        }
    } else {
        fieldC = oldCount + 1;
        if (fieldC == 0x7FFFFFFF) {
            waitFn(field0, 0xFFFFFFFF);
            field10 -= fieldC;
            ReleaseSemaphore(field0, 1, 0);
            fieldC = 0;
        }
    }

    ReleaseSemaphore(field8, 1, 0);

    if (count == 1) {
        while (oldCount != 0) {
            waitFn(field4, 0xFFFFFFFF);
            oldCount--;
        }
        ReleaseSemaphore(field0, 1, 0);
    }
}
