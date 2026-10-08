// from server: 91% by colin
// roc 2007-08 0063ca50  unit: CXTPControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063ca50
//
// 0063ca50  56                   push esi
// 0063ca51  57                   push edi
// 0063ca52  8bf9                 mov edi, ecx
// 0063ca54  e887ffffff           call 0x63c9e0
// 0063ca59  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063ca5d  8bf0                 mov esi, eax
// 0063ca5f  8b06                 mov eax, dword ptr [esi]
// 0063ca61  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0063ca67  51                   push ecx
// 0063ca68  57                   push edi
// 0063ca69  8bce                 mov ecx, esi
// 0063ca6b  ffd2                 call edx
// 0063ca6d  5f                   pop edi
// 0063ca6e  8bc6                 mov eax, esi
// 0063ca70  5e                   pop esi
// 0063ca71  c20400               ret 4

struct CXTPControl {
    void* GetSomething();
    void* f(int arg);
};

void* CXTPControl::f(int arg)
{
    void* p = GetSomething();
    void* vtable = *(void**)p;
    void (*fn)(void*, void*, int) = *(void (**)(void*, void*, int))((char*)vtable + 0xe0);
    fn(p, this, arg);
    return p;
}
