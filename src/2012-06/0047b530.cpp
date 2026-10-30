// roc 2012-06 0047b530  unit: VCWorkspace::?$CComObject  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047b530
//
// 0047b530  51                   push ecx
// 0047b531  8b01                 mov eax, dword ptr [ecx]
// 0047b533  85c0                 test eax, eax
// 0047b535  7417                 je 0x47b54e
// 0047b537  8b4904               mov ecx, dword ptr [ecx + 4]
// 0047b53a  51                   push ecx
// 0047b53b  50                   push eax
// 0047b53c  8d4c240b             lea ecx, [esp + 0xb]
// 0047b540  ff15e825b200         call dword ptr [0xb225e8]
// 0047b546  8bc8                 mov ecx, eax
// 0047b548  ff15f825b200         call dword ptr [0xb225f8]
// 0047b54e  59                   pop ecx
// 0047b54f  c3                   ret 
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