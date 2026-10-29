// roc 2009-06 0044d6e0  unit: VCWorkspace::?$CComObject  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044d6e0
//
// 0044d6e0  51                   push ecx
// 0044d6e1  8b01                 mov eax, dword ptr [ecx]
// 0044d6e3  85c0                 test eax, eax
// 0044d6e5  7417                 je 0x44d6fe
// 0044d6e7  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044d6ea  51                   push ecx
// 0044d6eb  50                   push eax
// 0044d6ec  8d4c240b             lea ecx, [esp + 0xb]
// 0044d6f0  ff15c0e38900         call dword ptr [0x89e3c0]
// 0044d6f6  8bc8                 mov ecx, eax
// 0044d6f8  ff15bce38900         call dword ptr [0x89e3bc]
// 0044d6fe  59                   pop ecx
// 0044d6ff  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@CRobloxDoc@@QAEXXZ)

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