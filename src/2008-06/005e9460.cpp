// from server: 100% by king_originala
// roc 2008-06 005e9460  unit: RBX::PhysicsService  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9460
//
// 005e9460  56                   push esi
// 005e9461  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 005e9467  8b06                 mov eax, dword ptr [esi]
// 005e9469  8b5004               mov edx, dword ptr [eax + 4]
// 005e946c  8bce                 mov ecx, esi
// 005e946e  ffd2                 call edx
// 005e9470  83f802               cmp eax, 2
// 005e9473  7411                 je 0x5e9486
// 005e9475  8b7608               mov esi, dword ptr [esi + 8]
// 005e9478  8b06                 mov eax, dword ptr [esi]
// 005e947a  8b5004               mov edx, dword ptr [eax + 4]
// 005e947d  8bce                 mov ecx, esi
// 005e947f  ffd2                 call edx
// 005e9481  83f802               cmp eax, 2
// 005e9484  75ef                 jne 0x5e9475
// 005e9486  8b442408             mov eax, dword ptr [esp + 8]
// 005e948a  50                   push eax
// 005e948b  8bce                 mov ecx, esi
// 005e948d  e80e390600           call 0x64cda0
// 005e9492  5e                   pop esi
// 005e9493  c20400               ret 4

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
