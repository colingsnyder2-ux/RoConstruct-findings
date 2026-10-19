// from server: 79% by colin
// from server: 78% by king_originala
// roc 2008-06 00407690  unit: VCApp::?$IObjectSafetyRobloxImpl  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407690
//
// 00407690  53                   push ebx
// 00407691  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00407695  56                   push esi
// 00407696  57                   push edi
// 00407697  85db                 test ebx, ebx
// 00407699  7405                 je 0x4076a0
// 0040769b  8d43fc               lea eax, [ebx - 4]
// 0040769e  eb02                 jmp 0x4076a2
// 004076a0  33c0                 xor eax, eax
// 004076a2  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004076a6  85ff                 test edi, edi
// 004076a8  7464                 je 0x40770e
// 004076aa  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004076ae  85f6                 test esi, esi
// 004076b0  745c                 je 0x40770e
// 004076b2  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004076b5  55                   push ebp
// 004076b6  8d542414             lea edx, [esp + 0x14]
// 004076ba  52                   push edx
// 004076bb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004076bf  83c014               add eax, 0x14
// 004076c2  52                   push edx
// 004076c3  50                   push eax
// 004076c4  8b01                 mov eax, dword ptr [ecx]
// 004076c6  ffd0                 call eax
// 004076c8  8be8                 mov ebp, eax
// 004076ca  85ed                 test ebp, ebp
// 004076cc  7c2b                 jl 0x4076f9
// 004076ce  8b442414             mov eax, dword ptr [esp + 0x14]
// 004076d2  8b08                 mov ecx, dword ptr [eax]
// 004076d4  8b5108               mov edx, dword ptr [ecx + 8]
// 004076d7  50                   push eax
// 004076d8  ffd2                 call edx
// 004076da  8bcb                 mov ecx, ebx
// 004076dc  e81ffeffff           call 0x407500
// 004076e1  c70701000000         mov dword ptr [edi], 1
// 004076e7  85c0                 test eax, eax
// 004076e9  7514                 jne 0x4076ff
// 004076eb  8b4304               mov eax, dword ptr [ebx + 4]
// 004076ee  8906                 mov dword ptr [esi], eax
// 004076f0  8bc5                 mov eax, ebp
// 004076f2  5d                   pop ebp
// 004076f3  5f                   pop edi
// 004076f4  5e                   pop esi
// 004076f5  5b                   pop ebx
// 004076f6  c21000               ret 0x10
// 004076f9  c70700000000         mov dword ptr [edi], 0
// 004076ff  8bc5                 mov eax, ebp
// 00407701  5d                   pop ebp
// 00407702  5f                   pop edi
// 00407703  c70600000000         mov dword ptr [esi], 0
// 00407709  5e                   pop esi
// 0040770a  5b                   pop ebx
// 0040770b  c21000               ret 0x10
// 0040770e  5f                   pop edi
// 0040770f  5e                   pop esi
// 00407710  b803400080           mov eax, 0x80004003
// 00407715  5b                   pop ebx
// 00407716  c21000               ret 0x10
#include <intrin.h>

struct Interface;

struct InterfaceTable {
    long (__stdcall *query)(Interface *, const void *, void **);
    unsigned long (__stdcall *addRef)(Interface *);
    unsigned long (__stdcall *release)(Interface *);
};

struct Interface {
    InterfaceTable *table;
};

struct Prefix {
    unsigned long word;
};

struct S {
    unsigned long word;
    unsigned long enabled;
    unsigned long padding[2];
    Interface interfaceMember;

    int check();
};

struct Object : Prefix, S {};

long __stdcall getOptions(S *object, const void *id,
                          unsigned long *supported,
                          unsigned long *enabled)
{
    S *original = object;
    _ReadWriteBarrier();
    Object *complete = static_cast<Object *>(object);

    if (!supported || !enabled)
        return (long)0x80004003UL;

    Interface *interfacePointer = &complete->interfaceMember;
    long result = interfacePointer->table->query(
        interfacePointer, id, reinterpret_cast<void **>(&object));

    if (result >= 0) {
        Interface *queried = reinterpret_cast<Interface *>(object);
        queried->table->release(queried);

        int disabled = original->check();
        *supported = 1;

        if (!disabled) {
            *enabled = original->enabled;
            return result;
        }
    } else {
        *supported = 0;
    }

    *enabled = 0;
    return result;
}
