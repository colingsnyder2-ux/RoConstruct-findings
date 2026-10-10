// from server: 42% by colin
typedef unsigned int DWORD;
typedef int BOOL;

extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void* hModule, const char* lpProcName);

struct KernelData
{
    char pad0[8];
    void* field8;
    void* fieldC;
};

struct Kernel
{
    void* getKernelData();
    int step(int a1, int a2, int a3, int a4, int a5);
};

void* Kernel::getKernelData()
{
    return 0;
}

int Kernel::step(int a1, int a2, int a3, int a4, int a5)
{
    KernelData* kd = (KernelData*)getKernelData();
    if (kd->fieldC != 0 && kd->field8 == 0)
    {
        kd->field8 = GetProcAddress(kd->fieldC, "DwmExtendFrameIntoClientArea");
    }
    void* fn = kd->field8;
    if (fn == 0)
    {
        return (int)0x80004005;
    }
    int local[5];
    local[0] = a1;
    local[1] = a2;
    local[2] = a3;
    local[3] = a4;
    local[4] = a5;
    ((int (__stdcall*)(int, void*))fn)(a1, &local[1]);
    return 0;
}
