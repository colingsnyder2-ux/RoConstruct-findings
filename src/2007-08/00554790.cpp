// from server: 100% by colin
// roc 2007-08 00554790  unit: RBX::ServiceProvider  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554790
//
// 00554790  56                   push esi
// 00554791  57                   push edi
// 00554792  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00554796  57                   push edi
// 00554797  8bf1                 mov esi, ecx
// 00554799  e8f2d2feff           call 0x541a90
// 0055479e  8b07                 mov eax, dword ptr [edi]
// 005547a0  8b5034               mov edx, dword ptr [eax + 0x34]
// 005547a3  56                   push esi
// 005547a4  6a00                 push 0
// 005547a6  8bcf                 mov ecx, edi
// 005547a8  ffd2                 call edx
// 005547aa  5f                   pop edi
// 005547ab  5e                   pop esi
// 005547ac  c20400               ret 4

struct Instance {
    void* vtable;
};

struct ServiceProvider {
    void addService(Instance* service);
    void onServiceProvider(Instance* service);
};

void ServiceProvider::onServiceProvider(Instance* service) {
    addService(service);
    void** vtbl = *(void***)service;
    typedef void (__thiscall *Fn)(Instance*, int, ServiceProvider*);
    Fn fn = (Fn)vtbl[0x34 / 4];
    fn(service, 0, this);
}
