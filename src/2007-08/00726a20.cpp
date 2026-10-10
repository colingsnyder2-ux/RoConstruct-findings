// from server: 68% by colin
extern "C" __declspec(dllimport) int __stdcall ReleaseMutex(void*);
extern "C" __declspec(dllimport) int __stdcall ReleaseSemaphore(void*, long, long*);
extern "C" __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(void*, unsigned long);

struct boost_thread_resource_error
{
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
    int field10;
    int field14;

    void destroy();
};

void boost_thread_resource_error::destroy()
{
    ReleaseMutex(field4);
    ReleaseMutex(field8);

    int count = field14;
    int old = fieldC;

    if (count != 0)
    {
        count--;
        field14 = count;
        if (count != 0)
        {
            if (field10 == count)
            {
                if (old != 0)
                {
                    fieldC = 0;
                }
            }
            else
            {
                ReleaseSemaphore(field0, 1, 0);
                count = 0;
            }
        }
    }
    else
    {
        old++;
        fieldC = old;
        if (old == 0x7fffffff)
        {
            ReleaseMutex(field0);
            field10 -= fieldC;
            ReleaseSemaphore(field0, 1, 0);
            fieldC = 0;
        }
    }

    WaitForSingleObject(field8, 0xffffffff);

    if (count == 1)
    {
        while (old != 0)
        {
            ReleaseMutex(field4);
            old--;
        }
        ReleaseSemaphore(field0, 1, 0);
    }
}
