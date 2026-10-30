// roc 2009-06 005dbbf0  unit: RBX::VInstance::?$NonFactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dbbf0
//
// 005dbbf0  8b442404             mov eax, dword ptr [esp + 4]
// 005dbbf4  56                   push esi
// 005dbbf5  8b30                 mov esi, dword ptr [eax]
// 005dbbf7  83ec20               sub esp, 0x20
// 005dbbfa  8bc4                 mov eax, esp
// 005dbbfc  c70000000000         mov dword ptr [eax], 0
// 005dbc02  8b4e08               mov ecx, dword ptr [esi + 8]
// 005dbc05  89642428             mov dword ptr [esp + 0x28], esp
// 005dbc09  85c9                 test ecx, ecx
// 005dbc0b  7416                 je 0x5dbc23
// 005dbc0d  8908                 mov dword ptr [eax], ecx
// 005dbc0f  8b4e08               mov ecx, dword ptr [esi + 8]
// 005dbc12  83c008               add eax, 8
// 005dbc15  6a00                 push 0
// 005dbc17  50                   push eax
// 005dbc18  8b01                 mov eax, dword ptr [ecx]
// 005dbc1a  8d5610               lea edx, [esi + 0x10]
// 005dbc1d  52                   push edx
// 005dbc1e  ffd0                 call eax
// 005dbc20  83c40c               add esp, 0xc
// 005dbc23  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005dbc27  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005dbc2b  8b06                 mov eax, dword ptr [esi]
// 005dbc2d  51                   push ecx
// 005dbc2e  52                   push edx
// 005dbc2f  ffd0                 call eax
// 005dbc31  83c428               add esp, 0x28
// 005dbc34  5e                   pop esi
// 005dbc35  c3                   ret 
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