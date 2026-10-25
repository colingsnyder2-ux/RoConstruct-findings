// from server: 100% by king_originala
// roc 2008-06 00407eb0  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407eb0
//
// 00407eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00407eb4  56                   push esi
// 00407eb5  57                   push edi
// 00407eb6  85c0                 test eax, eax
// 00407eb8  7405                 je 0x407ebf
// 00407eba  8d70f4               lea esi, [eax - 0xc]
// 00407ebd  eb02                 jmp 0x407ec1
// 00407ebf  33f6                 xor esi, esi
// 00407ec1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00407ec5  397e10               cmp dword ptr [esi + 0x10], edi
// 00407ec8  741e                 je 0x407ee8
// 00407eca  85ff                 test edi, edi
// 00407ecc  7408                 je 0x407ed6
// 00407ece  8b07                 mov eax, dword ptr [edi]
// 00407ed0  8b4804               mov ecx, dword ptr [eax + 4]
// 00407ed3  57                   push edi
// 00407ed4  ffd1                 call ecx
// 00407ed6  8b4610               mov eax, dword ptr [esi + 0x10]
// 00407ed9  85c0                 test eax, eax
// 00407edb  7408                 je 0x407ee5
// 00407edd  8b10                 mov edx, dword ptr [eax]
// 00407edf  50                   push eax
// 00407ee0  8b4208               mov eax, dword ptr [edx + 8]
// 00407ee3  ffd0                 call eax
// 00407ee5  897e10               mov dword ptr [esi + 0x10], edi
// 00407ee8  5f                   pop edi
// 00407ee9  33c0                 xor eax, eax
// 00407eeb  5e                   pop esi
// 00407eec  c20800               ret 8

struct Interface;

struct InterfaceTable {
    long (__stdcall *QueryInterface)(Interface *, const void *, void **);
    unsigned long (__stdcall *AddRef)(Interface *);
    unsigned long (__stdcall *Release)(Interface *);
};

struct Interface {
    InterfaceTable *table;
};

struct Object {
    unsigned char padding[16];
    Interface *value;
};

long __stdcall SetValue(void *part, Interface *value)
{
    Object *object = part
        ? reinterpret_cast<Object *>(static_cast<char *>(part) - 12)
        : 0;

    if (object->value != value) {
        if (value)
            value->table->AddRef(value);
        if (object->value)
            object->value->table->Release(object->value);
        object->value = value;
    }
    return 0;
}
