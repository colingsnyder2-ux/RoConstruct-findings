// from server: 100% by king_originala
// roc 2008-06 0044f480  unit: CRobloxDoc  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044f480
//
// 0044f480  51                   push ecx
// 0044f481  8b01                 mov eax, dword ptr [ecx]
// 0044f483  85c0                 test eax, eax
// 0044f485  7417                 je 0x44f49e
// 0044f487  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044f48a  51                   push ecx
// 0044f48b  50                   push eax
// 0044f48c  8d4c240b             lea ecx, [esp + 0xb]
// 0044f490  ff157c238000         call dword ptr [0x80237c]
// 0044f496  8bc8                 mov ecx, eax
// 0044f498  ff1578238000         call dword ptr [0x802378]
// 0044f49e  59                   pop ecx
// 0044f49f  c3                   ret 

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
