// roc 2009-12 004550a0  unit: VCWorkspace::?$CComObject  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004550a0
//
// 004550a0  51                   push ecx
// 004550a1  8b01                 mov eax, dword ptr [ecx]
// 004550a3  85c0                 test eax, eax
// 004550a5  7417                 je 0x4550be
// 004550a7  8b4904               mov ecx, dword ptr [ecx + 4]
// 004550aa  51                   push ecx
// 004550ab  50                   push eax
// 004550ac  8d4c240b             lea ecx, [esp + 0xb]
// 004550b0  ff1500b69800         call dword ptr [0x98b600]
// 004550b6  8bc8                 mov ecx, eax
// 004550b8  ff15fcb59800         call dword ptr [0x98b5fc]
// 004550be  59                   pop ecx
// 004550bf  c3                   ret 
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