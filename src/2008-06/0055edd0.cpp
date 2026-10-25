// from server: 100% by king_originala
// roc 2008-06 0055edd0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055edd0
//
// 0055edd0  8b442404             mov eax, dword ptr [esp + 4]
// 0055edd4  56                   push esi
// 0055edd5  8b30                 mov esi, dword ptr [eax]
// 0055edd7  83ec20               sub esp, 0x20
// 0055edda  8bc4                 mov eax, esp
// 0055eddc  c70000000000         mov dword ptr [eax], 0
// 0055ede2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055ede5  89642428             mov dword ptr [esp + 0x28], esp
// 0055ede9  85c9                 test ecx, ecx
// 0055edeb  7416                 je 0x55ee03
// 0055eded  8908                 mov dword ptr [eax], ecx
// 0055edef  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055edf2  83c008               add eax, 8
// 0055edf5  6a00                 push 0
// 0055edf7  50                   push eax
// 0055edf8  8b01                 mov eax, dword ptr [ecx]
// 0055edfa  8d5610               lea edx, [esi + 0x10]
// 0055edfd  52                   push edx
// 0055edfe  ffd0                 call eax
// 0055ee00  83c40c               add esp, 0xc
// 0055ee03  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055ee07  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0055ee0b  8b06                 mov eax, dword ptr [esi]
// 0055ee0d  51                   push ecx
// 0055ee0e  52                   push edx
// 0055ee0f  ffd0                 call eax
// 0055ee11  83c428               add esp, 0x28
// 0055ee14  5e                   pop esi
// 0055ee15  c3                   ret 

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
