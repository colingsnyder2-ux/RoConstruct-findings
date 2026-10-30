// roc 2009-12 00456c40  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00456c40
//
// 00456c40  8b442404             mov eax, dword ptr [esp + 4]
// 00456c44  56                   push esi
// 00456c45  57                   push edi
// 00456c46  85c0                 test eax, eax
// 00456c48  7405                 je 0x456c4f
// 00456c4a  8d70f0               lea esi, [eax - 0x10]
// 00456c4d  eb02                 jmp 0x456c51
// 00456c4f  33f6                 xor esi, esi
// 00456c51  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00456c55  397e14               cmp dword ptr [esi + 0x14], edi
// 00456c58  741e                 je 0x456c78
// 00456c5a  85ff                 test edi, edi
// 00456c5c  7408                 je 0x456c66
// 00456c5e  8b07                 mov eax, dword ptr [edi]
// 00456c60  8b4804               mov ecx, dword ptr [eax + 4]
// 00456c63  57                   push edi
// 00456c64  ffd1                 call ecx
// 00456c66  8b4614               mov eax, dword ptr [esi + 0x14]
// 00456c69  85c0                 test eax, eax
// 00456c6b  7408                 je 0x456c75
// 00456c6d  8b10                 mov edx, dword ptr [eax]
// 00456c6f  50                   push eax
// 00456c70  8b4208               mov eax, dword ptr [edx + 8]
// 00456c73  ffd0                 call eax
// 00456c75  897e14               mov dword ptr [esi + 0x14], edi
// 00456c78  5f                   pop edi
// 00456c79  33c0                 xor eax, eax
// 00456c7b  5e                   pop esi
// 00456c7c  c20800               ret 8
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