// roc 2011-06 00471f60  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00471f60
//
// 00471f60  8b442404             mov eax, dword ptr [esp + 4]
// 00471f64  56                   push esi
// 00471f65  57                   push edi
// 00471f66  85c0                 test eax, eax
// 00471f68  7405                 je 0x471f6f
// 00471f6a  8d70f0               lea esi, [eax - 0x10]
// 00471f6d  eb02                 jmp 0x471f71
// 00471f6f  33f6                 xor esi, esi
// 00471f71  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00471f75  397e14               cmp dword ptr [esi + 0x14], edi
// 00471f78  741e                 je 0x471f98
// 00471f7a  85ff                 test edi, edi
// 00471f7c  7408                 je 0x471f86
// 00471f7e  8b07                 mov eax, dword ptr [edi]
// 00471f80  8b4804               mov ecx, dword ptr [eax + 4]
// 00471f83  57                   push edi
// 00471f84  ffd1                 call ecx
// 00471f86  8b4614               mov eax, dword ptr [esi + 0x14]
// 00471f89  85c0                 test eax, eax
// 00471f8b  7408                 je 0x471f95
// 00471f8d  8b10                 mov edx, dword ptr [eax]
// 00471f8f  50                   push eax
// 00471f90  8b4208               mov eax, dword ptr [edx + 8]
// 00471f93  ffd0                 call eax
// 00471f95  897e14               mov dword ptr [esi + 0x14], edi
// 00471f98  5f                   pop edi
// 00471f99  33c0                 xor eax, eax
// 00471f9b  5e                   pop esi
// 00471f9c  c20800               ret 8
// copied from an identical function in another client (function _assign@8)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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