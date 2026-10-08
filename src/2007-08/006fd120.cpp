// from server: 65% by colin
// roc 2007-08 006fd120  unit: CXTPTabManagerItem  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd120
//
// 006fd120  51                   push ecx
// 006fd121  8bc1                 mov eax, ecx
// 006fd123  8b4860               mov ecx, dword ptr [eax + 0x60]
// 006fd126  8b11                 mov edx, dword ptr [ecx]
// 006fd128  56                   push esi
// 006fd129  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fd12d  50                   push eax
// 006fd12e  8b420c               mov eax, dword ptr [edx + 0xc]
// 006fd131  56                   push esi
// 006fd132  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006fd13a  ffd0                 call eax
// 006fd13c  8bc6                 mov eax, esi
// 006fd13e  5e                   pop esi
// 006fd13f  59                   pop ecx
// 006fd140  c20400               ret 4

struct CXTPTabManagerItem
{
    char pad[0x60];
    void* p;
    void* GetHandle(void*);
};

void* CXTPTabManagerItem::GetHandle(void* arg)
{
    void* result = 0;
    void* pObj = p;
    void** vtbl = *(void***)pObj;
    void* (__stdcall *fn)(void*, void*, void**) = (void* (__stdcall *)(void*, void*, void**))vtbl[3];
    fn(pObj, arg, &result);
    return arg;
}
