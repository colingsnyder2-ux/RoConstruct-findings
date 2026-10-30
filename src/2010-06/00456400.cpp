// roc 2010-06 00456400  unit: VCWorkspace::?$CComObject  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00456400
//
// 00456400  51                   push ecx
// 00456401  8b01                 mov eax, dword ptr [ecx]
// 00456403  85c0                 test eax, eax
// 00456405  7417                 je 0x45641e
// 00456407  8b4904               mov ecx, dword ptr [ecx + 4]
// 0045640a  51                   push ecx
// 0045640b  50                   push eax
// 0045640c  8d4c240b             lea ecx, [esp + 0xb]
// 00456410  ff1508a59e00         call dword ptr [0x9ea508]
// 00456416  8bc8                 mov ecx, eax
// 00456418  ff150ca59e00         call dword ptr [0x9ea50c]
// 0045641e  59                   pop ecx
// 0045641f  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_0044f480@CRobloxDoc@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
typedef void* (__thiscall *ReleaseFunction)(void*, char*, unsigned int);
typedef void (__thiscall *FinishFunction)(void*);

extern ReleaseFunction releaseFunction;
extern FinishFunction finishFunction;

struct CRobloxDoc
{
    char* data;
    unsigned int size;

    void func_0044f480();
};

void CRobloxDoc::func_0044f480()
{
    char allocator;
    if (data)
        finishFunction(releaseFunction(&allocator, data, size));
}