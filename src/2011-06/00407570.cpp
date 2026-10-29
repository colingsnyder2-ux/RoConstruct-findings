// roc 2011-06 00407570  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407570
//
// 00407570  8b442404             mov eax, dword ptr [esp + 4]
// 00407574  56                   push esi
// 00407575  57                   push edi
// 00407576  85c0                 test eax, eax
// 00407578  7405                 je 0x40757f
// 0040757a  8d70f4               lea esi, [eax - 0xc]
// 0040757d  eb02                 jmp 0x407581
// 0040757f  33f6                 xor esi, esi
// 00407581  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00407585  397e10               cmp dword ptr [esi + 0x10], edi
// 00407588  741e                 je 0x4075a8
// 0040758a  85ff                 test edi, edi
// 0040758c  7408                 je 0x407596
// 0040758e  8b07                 mov eax, dword ptr [edi]
// 00407590  8b4804               mov ecx, dword ptr [eax + 4]
// 00407593  57                   push edi
// 00407594  ffd1                 call ecx
// 00407596  8b4610               mov eax, dword ptr [esi + 0x10]
// 00407599  85c0                 test eax, eax
// 0040759b  7408                 je 0x4075a5
// 0040759d  8b10                 mov edx, dword ptr [eax]
// 0040759f  50                   push eax
// 004075a0  8b4208               mov eax, dword ptr [edx + 8]
// 004075a3  ffd0                 call eax
// 004075a5  897e10               mov dword ptr [esi + 0x10], edi
// 004075a8  5f                   pop edi
// 004075a9  33c0                 xor eax, eax
// 004075ab  5e                   pop esi
// 004075ac  c20800               ret 8
// copied from an identical function in another client (function ?SetValue@ns_ROCX000007@@YGJPAXPAUInterface@1@@Z)

namespace ns_ROCX000007 {
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
}
