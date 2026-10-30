// roc 2009-06 00406c60  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406c60
//
// 00406c60  8b442404             mov eax, dword ptr [esp + 4]
// 00406c64  56                   push esi
// 00406c65  57                   push edi
// 00406c66  85c0                 test eax, eax
// 00406c68  7405                 je 0x406c6f
// 00406c6a  8d70f4               lea esi, [eax - 0xc]
// 00406c6d  eb02                 jmp 0x406c71
// 00406c6f  33f6                 xor esi, esi
// 00406c71  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00406c75  397e10               cmp dword ptr [esi + 0x10], edi
// 00406c78  741e                 je 0x406c98
// 00406c7a  85ff                 test edi, edi
// 00406c7c  7408                 je 0x406c86
// 00406c7e  8b07                 mov eax, dword ptr [edi]
// 00406c80  8b4804               mov ecx, dword ptr [eax + 4]
// 00406c83  57                   push edi
// 00406c84  ffd1                 call ecx
// 00406c86  8b4610               mov eax, dword ptr [esi + 0x10]
// 00406c89  85c0                 test eax, eax
// 00406c8b  7408                 je 0x406c95
// 00406c8d  8b10                 mov edx, dword ptr [eax]
// 00406c8f  50                   push eax
// 00406c90  8b4208               mov eax, dword ptr [edx + 8]
// 00406c93  ffd0                 call eax
// 00406c95  897e10               mov dword ptr [esi + 0x10], edi
// 00406c98  5f                   pop edi
// 00406c99  33c0                 xor eax, eax
// 00406c9b  5e                   pop esi
// 00406c9c  c20800               ret 8
// copied from an identical function in another client (function ?SetValue@@YGJPAXPAUInterface@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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