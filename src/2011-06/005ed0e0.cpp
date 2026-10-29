// roc 2011-06 005ed0e0  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ed0e0
//
// 005ed0e0  8b442404             mov eax, dword ptr [esp + 4]
// 005ed0e4  56                   push esi
// 005ed0e5  8b30                 mov esi, dword ptr [eax]
// 005ed0e7  83ec20               sub esp, 0x20
// 005ed0ea  8bc4                 mov eax, esp
// 005ed0ec  c70000000000         mov dword ptr [eax], 0
// 005ed0f2  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ed0f5  89642428             mov dword ptr [esp + 0x28], esp
// 005ed0f9  85c9                 test ecx, ecx
// 005ed0fb  7416                 je 0x5ed113
// 005ed0fd  8908                 mov dword ptr [eax], ecx
// 005ed0ff  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ed102  83c008               add eax, 8
// 005ed105  6a00                 push 0
// 005ed107  50                   push eax
// 005ed108  8b01                 mov eax, dword ptr [ecx]
// 005ed10a  8d5610               lea edx, [esi + 0x10]
// 005ed10d  52                   push edx
// 005ed10e  ffd0                 call eax
// 005ed110  83c40c               add esp, 0xc
// 005ed113  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005ed117  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005ed11b  8b06                 mov eax, dword ptr [esi]
// 005ed11d  51                   push ecx
// 005ed11e  52                   push edx
// 005ed11f  ffd0                 call eax
// 005ed121  83c428               add esp, 0x28
// 005ed124  5e                   pop esi
// 005ed125  c3                   ret 
// copied from an identical function in another client (function ?reconstruct@@YAXPAPAUObject@@PAX1@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
typedef void (__cdecl *Manager)(const void *, void *, int);

struct Function {
    Manager *manager;
    union Storage {
        double alignment[3];
        char bytes[24];
    } storage;

    Function(const Function &);
    ~Function();
};

inline Function::Function(const Function &other) : manager(0)
{
    if (other.manager) {
        manager = other.manager;
        (*other.manager)(&other.storage, &storage, 0);
    }
}

typedef void (__cdecl *Invoke)(void *, void *, Function);

struct Object {
    Invoke invoke;
    unsigned int padding;
    Function function;
};

void __cdecl reconstruct(Object **object, void *a, void *b)
{
    Object *p = *object;
    p->invoke(a, b, p->function);
}