// from server: 100% by king_originala
// roc 2008-06 00403070  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403070
//
// 00403070  8b442404             mov eax, dword ptr [esp + 4]
// 00403074  56                   push esi
// 00403075  57                   push edi
// 00403076  85c0                 test eax, eax
// 00403078  7405                 je 0x40307f
// 0040307a  8d70f0               lea esi, [eax - 0x10]
// 0040307d  eb02                 jmp 0x403081
// 0040307f  33f6                 xor esi, esi
// 00403081  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00403085  397e14               cmp dword ptr [esi + 0x14], edi
// 00403088  741e                 je 0x4030a8
// 0040308a  85ff                 test edi, edi
// 0040308c  7408                 je 0x403096
// 0040308e  8b07                 mov eax, dword ptr [edi]
// 00403090  8b4804               mov ecx, dword ptr [eax + 4]
// 00403093  57                   push edi
// 00403094  ffd1                 call ecx
// 00403096  8b4614               mov eax, dword ptr [esi + 0x14]
// 00403099  85c0                 test eax, eax
// 0040309b  7408                 je 0x4030a5
// 0040309d  8b10                 mov edx, dword ptr [eax]
// 0040309f  50                   push eax
// 004030a0  8b4208               mov eax, dword ptr [edx + 8]
// 004030a3  ffd0                 call eax
// 004030a5  897e14               mov dword ptr [esi + 0x14], edi
// 004030a8  5f                   pop edi
// 004030a9  33c0                 xor eax, eax
// 004030ab  5e                   pop esi
// 004030ac  c20800               ret 8

struct Interface;

struct VTable {
    long (__stdcall *query)(Interface *, void *, void **);
    unsigned long (__stdcall *addRef)(Interface *);
    unsigned long (__stdcall *release)(Interface *);
};

struct Interface {
    VTable *vtable;
};

struct Object {
    char padding[20];
    Interface *value;
};

extern "C" long __stdcall assign(void *base, Interface *value)
{
    Object *object = base
        ? reinterpret_cast<Object *>(static_cast<char *>(base) - 16)
        : 0;

    if (object->value != value) {
        if (value)
            value->vtable->addRef(value);
        if (object->value)
            object->value->vtable->release(object->value);
        object->value = value;
    }
    return 0;
}
