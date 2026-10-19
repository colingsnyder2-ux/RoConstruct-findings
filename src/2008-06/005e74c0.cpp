// from server: 97% by colin
// from server: 92% by colin
// roc 2008-06 005e74c0  unit: RBX::Ball  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e74c0
//
// 005e74c0  53                   push ebx
// 005e74c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005e74c5  8b8ba4000000         mov ecx, dword ptr [ebx + 0xa4]
// 005e74cb  8b01                 mov eax, dword ptr [ecx]
// 005e74cd  8b5004               mov edx, dword ptr [eax + 4]
// 005e74d0  55                   push ebp
// 005e74d1  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005e74d5  56                   push esi
// 005e74d6  8b735c               mov esi, dword ptr [ebx + 0x5c]
// 005e74d9  57                   push edi
// 005e74da  8b7d5c               mov edi, dword ptr [ebp + 0x5c]
// 005e74dd  ffd2                 call edx
// 005e74df  84c0                 test al, al
// 005e74e1  7440                 je 0x5e7523
// 005e74e3  8b4624               mov eax, dword ptr [esi + 0x24]
// 005e74e6  8b4018               mov eax, dword ptr [eax + 0x18]
// 005e74e9  85c0                 test eax, eax
// 005e74eb  7411                 je 0x5e74fe
// 005e74ed  8b00                 mov eax, dword ptr [eax]
// 005e74ef  83f803               cmp eax, 3
// 005e74f2  7425                 je 0x5e7519
// 005e74f4  83f801               cmp eax, 1
// 005e74f7  7420                 je 0x5e7519
// 005e74f9  83f802               cmp eax, 2
// 005e74fc  741b                 je 0x5e7519
// 005e74fe  8b4724               mov eax, dword ptr [edi + 0x24]
// 005e7501  8b4018               mov eax, dword ptr [eax + 0x18]
// 005e7504  85c0                 test eax, eax
// 005e7506  741b                 je 0x5e7523
// 005e7508  8b00                 mov eax, dword ptr [eax]
// 005e750a  83f803               cmp eax, 3
// 005e750d  740a                 je 0x5e7519
// 005e750f  83f801               cmp eax, 1
// 005e7512  7405                 je 0x5e7519
// 005e7514  83f802               cmp eax, 2
// 005e7517  750a                 jne 0x5e7523
// 005e7519  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 005e751c  55                   push ebp
// 005e751d  53                   push ebx
// 005e751e  e89d230000           call 0x5e98c0
// 005e7523  5f                   pop edi
// 005e7524  5e                   pop esi
// 005e7525  5d                   pop ebp
// 005e7526  5b                   pop ebx
// 005e7527  c3                   ret 

struct PartInstance;

struct PhysicsService {
    void f(PartInstance* x, PartInstance* y);
};

struct StateHolder {
    char padding[0x18];
    int* state;
};

struct Primitive {
    char padding[0x24];
    StateHolder* holder;
};

struct Interface {
    virtual void reserved() = 0;
    virtual bool enabled() = 0;
};

struct PartInstance {
    char padding0[0x58];
    PhysicsService* service;
    Primitive* primitive;
    char padding1[0x44];
    Interface* interfaceObject;
};

void __cdecl func_005e74c0(PartInstance* y, PartInstance* x)
{
    Primitive* second = x->primitive;
    Primitive* first = y->primitive;

    if (y->interfaceObject->enabled()) {
        int* state;
        if (((state = first->holder->state) != 0 &&
             (*state == 3 || *state == 1 || *state == 2)) ||
            ((state = second->holder->state) != 0 &&
             (*state == 3 || *state == 1 || *state == 2))) {
            x->service->f(y, x);
        }
    }
}
