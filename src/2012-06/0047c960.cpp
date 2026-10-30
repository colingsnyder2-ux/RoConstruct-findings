// roc 2012-06 0047c960  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047c960
//
// 0047c960  8b442404             mov eax, dword ptr [esp + 4]
// 0047c964  56                   push esi
// 0047c965  57                   push edi
// 0047c966  85c0                 test eax, eax
// 0047c968  7405                 je 0x47c96f
// 0047c96a  8d70f0               lea esi, [eax - 0x10]
// 0047c96d  eb02                 jmp 0x47c971
// 0047c96f  33f6                 xor esi, esi
// 0047c971  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047c975  397e14               cmp dword ptr [esi + 0x14], edi
// 0047c978  741e                 je 0x47c998
// 0047c97a  85ff                 test edi, edi
// 0047c97c  7408                 je 0x47c986
// 0047c97e  8b07                 mov eax, dword ptr [edi]
// 0047c980  8b4804               mov ecx, dword ptr [eax + 4]
// 0047c983  57                   push edi
// 0047c984  ffd1                 call ecx
// 0047c986  8b4614               mov eax, dword ptr [esi + 0x14]
// 0047c989  85c0                 test eax, eax
// 0047c98b  7408                 je 0x47c995
// 0047c98d  8b10                 mov edx, dword ptr [eax]
// 0047c98f  50                   push eax
// 0047c990  8b4208               mov eax, dword ptr [edx + 8]
// 0047c993  ffd0                 call eax
// 0047c995  897e14               mov dword ptr [esi + 0x14], edi
// 0047c998  5f                   pop edi
// 0047c999  33c0                 xor eax, eax
// 0047c99b  5e                   pop esi
// 0047c99c  c20800               ret 8
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