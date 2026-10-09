// from server: 100% by colin
// roc 2007-08 005579e0  unit: RBX::DataModel  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005579e0
//
// 005579e0  56                   push esi
// 005579e1  57                   push edi
// 005579e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005579e6  85ff                 test edi, edi
// 005579e8  8bf1                 mov esi, ecx
// 005579ea  7435                 je 0x557a21
// 005579ec  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 005579f2  8d8858010000         lea ecx, [eax + 0x158]
// 005579f8  8b01                 mov eax, dword ptr [ecx]
// 005579fa  8b500c               mov edx, dword ptr [eax + 0xc]
// 005579fd  57                   push edi
// 005579fe  ffd2                 call edx
// 00557a00  80beb401000000       cmp byte ptr [esi + 0x1b4], 0
// 00557a07  7518                 jne 0x557a21
// 00557a09  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00557a0f  8b8018030000         mov eax, dword ptr [eax + 0x318]
// 00557a15  8b5004               mov edx, dword ptr [eax + 4]
// 00557a18  8d4804               lea ecx, [eax + 4]
// 00557a1b  8b420c               mov eax, dword ptr [edx + 0xc]
// 00557a1e  57                   push edi
// 00557a1f  ffd0                 call eax
// 00557a21  5f                   pop edi
// 00557a22  5e                   pop esi
// 00557a23  c20400               ret 4

struct DataModel {
    char pad[0x188];
    void* field_188;
    char pad2[0x1b4 - 0x18c];
    unsigned char field_1b4;
    void func(void* arg);
};

void DataModel::func(void* arg)
{
    if (arg) {
        char* p = (char*)field_188;
        void** vtbl = *(void***)(p + 0x158);
        typedef void (__thiscall *Fn)(void*, void*);
        ((Fn)vtbl[3])(p + 0x158, arg);
        if (field_1b4 == 0) {
            char* q = (char*)field_188;
            char* r = *(char**)(q + 0x318);
            void** vtbl2 = *(void***)(r + 4);
            ((Fn)vtbl2[3])(r + 4, arg);
        }
    }
}
