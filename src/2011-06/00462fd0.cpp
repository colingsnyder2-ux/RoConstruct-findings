// roc 2011-06 00462fd0  unit: CRobloxApp  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00462fd0
//
// 00462fd0  51                   push ecx
// 00462fd1  8b01                 mov eax, dword ptr [ecx]
// 00462fd3  85c0                 test eax, eax
// 00462fd5  7417                 je 0x462fee
// 00462fd7  8b4904               mov ecx, dword ptr [ecx + 4]
// 00462fda  51                   push ecx
// 00462fdb  50                   push eax
// 00462fdc  8d4c240b             lea ecx, [esp + 0xb]
// 00462fe0  ff152405a400         call dword ptr [0xa40524]
// 00462fe6  8bc8                 mov ecx, eax
// 00462fe8  ff152805a400         call dword ptr [0xa40528]
// 00462fee  59                   pop ecx
// 00462fef  c3                   ret 
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