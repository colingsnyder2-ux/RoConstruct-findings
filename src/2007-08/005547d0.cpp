// from server: 70% by colin
// roc 2007-08 005547d0  unit: RBX::ServiceProvider  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005547d0
//
// 005547d0  56                   push esi
// 005547d1  57                   push edi
// 005547d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005547d6  8bf1                 mov esi, ecx
// 005547d8  8b0f                 mov ecx, dword ptr [edi]
// 005547da  8b01                 mov eax, dword ptr [ecx]
// 005547dc  8b5034               mov edx, dword ptr [eax + 0x34]
// 005547df  6a00                 push 0
// 005547e1  56                   push esi
// 005547e2  ffd2                 call edx
// 005547e4  57                   push edi
// 005547e5  8bce                 mov ecx, esi
// 005547e7  e814d3feff           call 0x541b00
// 005547ec  5f                   pop edi
// 005547ed  5e                   pop esi
// 005547ee  c20400               ret 4

struct ServiceProvider {
    void onServiceProvider(void*);
};

extern "C" void __stdcall sub_541B00(void*, void*);

void ServiceProvider::onServiceProvider(void* arg) {
    void* p = *(void**)arg;
    void* vtbl = *(void**)p;
    void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vtbl + 0x34);
    fn(0, this);
    sub_541B00(this, arg);
}
