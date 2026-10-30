// roc 2010-06 00458530  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00458530
//
// 00458530  8b442404             mov eax, dword ptr [esp + 4]
// 00458534  56                   push esi
// 00458535  57                   push edi
// 00458536  85c0                 test eax, eax
// 00458538  7405                 je 0x45853f
// 0045853a  8d70f0               lea esi, [eax - 0x10]
// 0045853d  eb02                 jmp 0x458541
// 0045853f  33f6                 xor esi, esi
// 00458541  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00458545  397e14               cmp dword ptr [esi + 0x14], edi
// 00458548  741e                 je 0x458568
// 0045854a  85ff                 test edi, edi
// 0045854c  7408                 je 0x458556
// 0045854e  8b07                 mov eax, dword ptr [edi]
// 00458550  8b4804               mov ecx, dword ptr [eax + 4]
// 00458553  57                   push edi
// 00458554  ffd1                 call ecx
// 00458556  8b4614               mov eax, dword ptr [esi + 0x14]
// 00458559  85c0                 test eax, eax
// 0045855b  7408                 je 0x458565
// 0045855d  8b10                 mov edx, dword ptr [eax]
// 0045855f  50                   push eax
// 00458560  8b4208               mov eax, dword ptr [edx + 8]
// 00458563  ffd0                 call eax
// 00458565  897e14               mov dword ptr [esi + 0x14], edi
// 00458568  5f                   pop edi
// 00458569  33c0                 xor eax, eax
// 0045856b  5e                   pop esi
// 0045856c  c20800               ret 8
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