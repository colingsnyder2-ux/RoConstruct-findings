// from server: 100% by king_originala
// roc 2008-06 005e94a0  unit: RBX::PhysicsService  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e94a0
//
// 005e94a0  56                   push esi
// 005e94a1  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 005e94a7  8b06                 mov eax, dword ptr [esi]
// 005e94a9  8b5004               mov edx, dword ptr [eax + 4]
// 005e94ac  8bce                 mov ecx, esi
// 005e94ae  ffd2                 call edx
// 005e94b0  83f802               cmp eax, 2
// 005e94b3  7411                 je 0x5e94c6
// 005e94b5  8b7608               mov esi, dword ptr [esi + 8]
// 005e94b8  8b06                 mov eax, dword ptr [esi]
// 005e94ba  8b5004               mov edx, dword ptr [eax + 4]
// 005e94bd  8bce                 mov ecx, esi
// 005e94bf  ffd2                 call edx
// 005e94c1  83f802               cmp eax, 2
// 005e94c4  75ef                 jne 0x5e94b5
// 005e94c6  8b442408             mov eax, dword ptr [esp + 8]
// 005e94ca  50                   push eax
// 005e94cb  8bce                 mov ecx, esi
// 005e94cd  e86e370600           call 0x64cc40
// 005e94d2  5e                   pop esi
// 005e94d3  c20400               ret 4

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
