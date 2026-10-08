// from server: 83% by colin
// roc 2007-08 00653aa0  unit: CInstanceRecord::CNameItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653aa0
//
// 00653aa0  8b442404             mov eax, dword ptr [esp + 4]
// 00653aa4  8b4804               mov ecx, dword ptr [eax + 4]
// 00653aa7  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00653aad  8b11                 mov edx, dword ptr [ecx]
// 00653aaf  56                   push esi
// 00653ab0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00653ab4  56                   push esi
// 00653ab5  50                   push eax
// 00653ab6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 00653abc  ffd0                 call eax
// 00653abe  5e                   pop esi
// 00653abf  c20800               ret 8

struct CNameItem {
    void m(void* a, void* b);
};

void CNameItem::m(void* a, void* b)
{
    char* p = (char*)a;
    char* q = *(char**)(p + 4);
    char* r = *(char**)(q + 0xb0);
    void** vt = *(void***)r;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[0x30];
    fn(r, a, b);
}
