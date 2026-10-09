// from server: 69% by colin
// roc 2007-08 00554e90  unit: RBX::ServiceProvider  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554e90
//
// 00554e90  56                   push esi
// 00554e91  57                   push edi
// 00554e92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00554e96  6a00                 push 0
// 00554e98  689c468800           push 0x88469c
// 00554e9d  684c1f8800           push 0x881f4c
// 00554ea2  6a00                 push 0
// 00554ea4  57                   push edi
// 00554ea5  8bf1                 mov esi, ecx
// 00554ea7  e88abe0d00           call 0x630d36
// 00554eac  83c414               add esp, 0x14
// 00554eaf  85c0                 test eax, eax
// 00554eb1  741e                 je 0x554ed1
// 00554eb3  83ec08               sub esp, 8
// 00554eb6  8bc4                 mov eax, esp
// 00554eb8  89642414             mov dword ptr [esp + 0x14], esp
// 00554ebc  57                   push edi
// 00554ebd  50                   push eax
// 00554ebe  e8ad87f4ff           call 0x49d670
// 00554ec3  83c408               add esp, 8
// 00554ec6  8d8e18010000         lea ecx, [esi + 0x118]
// 00554ecc  e85ffdffff           call 0x554c30
// 00554ed1  5f                   pop edi
// 00554ed2  5e                   pop esi
// 00554ed3  c20400               ret 4

struct Instance {
    static Instance* findFirstChildByName(const char*);
};

struct ServiceProvider {
    char pad[0x118];
    void onServiceProvider(Instance*);
    void addService(Instance*);
};

extern "C" void* __stdcall sub_630d36(Instance*, int, const char*, const char*, int);
extern "C" void __stdcall sub_49d670(void*, Instance*);

void ServiceProvider::addService(Instance* inst) {
    void* found = sub_630d36(inst, 0, (const char*)0x881f4c, (const char*)0x88469c, 0);
    if (found) {
        void* local;
        sub_49d670(&local, inst);
        onServiceProvider((Instance*)&local);
    }
}
