// from server: 60% by colin
// roc 2007-08 00573ed0  unit: RBX::PartInstance  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573ed0
//
// 00573ed0  56                   push esi
// 00573ed1  8bf1                 mov esi, ecx
// 00573ed3  8b86d8010000         mov eax, dword ptr [esi + 0x1d8]
// 00573ed9  57                   push edi
// 00573eda  8b7864               mov edi, dword ptr [eax + 0x64]
// 00573edd  8bcf                 mov ecx, edi
// 00573edf  e81cc2fbff           call 0x530100
// 00573ee4  81c784000000         add edi, 0x84
// 00573eea  57                   push edi
// 00573eeb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00573eef  8bcf                 mov ecx, edi
// 00573ef1  e8eaf1efff           call 0x4730e0
// 00573ef6  84c0                 test al, al
// 00573ef8  741c                 je 0x573f16
// 00573efa  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 00573f00  57                   push edi
// 00573f01  e86a120400           call 0x5b5170
// 00573f06  c6865002000001       mov byte ptr [esi + 0x250], 1
// 00573f0d  8b16                 mov edx, dword ptr [esi]
// 00573f0f  8b4254               mov eax, dword ptr [edx + 0x54]
// 00573f12  8bce                 mov ecx, esi
// 00573f14  ffd0                 call eax
// 00573f16  5f                   pop edi
// 00573f17  5e                   pop esi
// 00573f18  c20400               ret 4

struct PartInstance {
    char pad[0x1d8];
    void* field_1d8;
    char pad2[0x250 - 0x1dc];
    unsigned char field_250;

    void someMethod(void* arg);
};

extern "C" void __stdcall sub_530100(void*);
extern "C" char __stdcall sub_4730e0(void*);
extern "C" void __stdcall sub_5b5170(void*, void*);

void PartInstance::someMethod(void* arg) {
    void* p = field_1d8;
    void* q = *(void**)((char*)p + 0x64);
    sub_530100(q);
    void* r = (char*)q + 0x84;
    char result = sub_4730e0(r);
    if (result) {
        void* s = field_1d8;
        sub_5b5170(s, arg);
        field_250 = 1;
        void** vtbl = *(void***)this;
        void (*fn)() = (void (*)())vtbl[0x54/4];
        fn();
    }
}
