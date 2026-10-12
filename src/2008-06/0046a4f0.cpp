// from server: 30% by colin
struct DxUserInput
{
    int f(char* path);
};

extern "C" unsigned long __stdcall GetModuleFileNameA(void* hModule, char* lpFilename, unsigned long nSize);
extern "C" void* __stdcall sub_803F10();
extern "C" void __stdcall sub_803F14(void* p);

struct DxUserInputHelper
{
    int sub_46A220(char* path);
};

int DxUserInput::f(char* path)
{
    char buffer[500];
    GetModuleFileNameA(0, buffer, 500);
    void* p = sub_803F10();
    int result = ((DxUserInputHelper*)this)->sub_46A220(path);
    sub_803F14(p);
    return result;
}
