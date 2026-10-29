// roc 2009-06 0044f2a0  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044f2a0
//
// 0044f2a0  8b442404             mov eax, dword ptr [esp + 4]
// 0044f2a4  56                   push esi
// 0044f2a5  57                   push edi
// 0044f2a6  85c0                 test eax, eax
// 0044f2a8  7405                 je 0x44f2af
// 0044f2aa  8d70f0               lea esi, [eax - 0x10]
// 0044f2ad  eb02                 jmp 0x44f2b1
// 0044f2af  33f6                 xor esi, esi
// 0044f2b1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044f2b5  397e14               cmp dword ptr [esi + 0x14], edi
// 0044f2b8  741e                 je 0x44f2d8
// 0044f2ba  85ff                 test edi, edi
// 0044f2bc  7408                 je 0x44f2c6
// 0044f2be  8b07                 mov eax, dword ptr [edi]
// 0044f2c0  8b4804               mov ecx, dword ptr [eax + 4]
// 0044f2c3  57                   push edi
// 0044f2c4  ffd1                 call ecx
// 0044f2c6  8b4614               mov eax, dword ptr [esi + 0x14]
// 0044f2c9  85c0                 test eax, eax
// 0044f2cb  7408                 je 0x44f2d5
// 0044f2cd  8b10                 mov edx, dword ptr [eax]
// 0044f2cf  50                   push eax
// 0044f2d0  8b4208               mov eax, dword ptr [edx + 8]
// 0044f2d3  ffd0                 call eax
// 0044f2d5  897e14               mov dword ptr [esi + 0x14], edi
// 0044f2d8  5f                   pop edi
// 0044f2d9  33c0                 xor eax, eax
// 0044f2db  5e                   pop esi
// 0044f2dc  c20800               ret 8
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