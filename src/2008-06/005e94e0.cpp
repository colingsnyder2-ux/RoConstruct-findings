// from server: 100% by king_originala
// roc 2008-06 005e94e0  unit: RBX::PhysicsService  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e94e0
//
// 005e94e0  56                   push esi
// 005e94e1  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 005e94e7  8b06                 mov eax, dword ptr [esi]
// 005e94e9  8b5004               mov edx, dword ptr [eax + 4]
// 005e94ec  8bce                 mov ecx, esi
// 005e94ee  ffd2                 call edx
// 005e94f0  83f802               cmp eax, 2
// 005e94f3  7411                 je 0x5e9506
// 005e94f5  8b7608               mov esi, dword ptr [esi + 8]
// 005e94f8  8b06                 mov eax, dword ptr [esi]
// 005e94fa  8b5004               mov edx, dword ptr [eax + 4]
// 005e94fd  8bce                 mov ecx, esi
// 005e94ff  ffd2                 call edx
// 005e9501  83f802               cmp eax, 2
// 005e9504  75ef                 jne 0x5e94f5
// 005e9506  8b442408             mov eax, dword ptr [esp + 8]
// 005e950a  50                   push eax
// 005e950b  8bce                 mov ecx, esi
// 005e950d  e8de370600           call 0x64ccf0
// 005e9512  5e                   pop esi
// 005e9513  c20400               ret 4

struct Node {
    virtual void slot0();
    virtual int kind();
    int reserved;
    Node* next;
    void apply(void* argument);
};

struct S {
    char padding[0x88];
    Node* node;
    void f(void* argument);
};

void S::f(void* argument)
{
    Node* current = node;
    while (current->kind() != 2)
        current = current->next;
    current->apply(argument);
}
