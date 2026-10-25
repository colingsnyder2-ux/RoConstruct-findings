// from server: 100% by king_originala
// roc 2008-06 004e60f0  unit: RBX::ViewNew::PartChunk  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e60f0
//
// 004e60f0  8b442404             mov eax, dword ptr [esp + 4]
// 004e60f4  53                   push ebx
// 004e60f5  8b18                 mov ebx, dword ptr [eax]
// 004e60f7  57                   push edi
// 004e60f8  8bf9                 mov edi, ecx
// 004e60fa  8b07                 mov eax, dword ptr [edi]
// 004e60fc  3bd8                 cmp ebx, eax
// 004e60fe  7460                 je 0x4e6160
// 004e6100  85c0                 test eax, eax
// 004e6102  744c                 je 0x4e6150
// 004e6104  83c004               add eax, 4
// 004e6107  50                   push eax
// 004e6108  ff15ac218000         call dword ptr [0x8021ac]
// 004e610e  85c0                 test eax, eax
// 004e6110  7538                 jne 0x4e614a
// 004e6112  8b0f                 mov ecx, dword ptr [edi]
// 004e6114  56                   push esi
// 004e6115  8b7108               mov esi, dword ptr [ecx + 8]
// 004e6118  85f6                 test esi, esi
// 004e611a  741f                 je 0x4e613b
// 004e611c  8d642400             lea esp, [esp]
// 004e6120  8b0e                 mov ecx, dword ptr [esi]
// 004e6122  8b11                 mov edx, dword ptr [ecx]
// 004e6124  8b4204               mov eax, dword ptr [edx + 4]
// 004e6127  ffd0                 call eax
// 004e6129  8bc6                 mov eax, esi
// 004e612b  8b7604               mov esi, dword ptr [esi + 4]
// 004e612e  50                   push eax
// 004e612f  e846a51b00           call 0x6a067a
// 004e6134  83c404               add esp, 4
// 004e6137  85f6                 test esi, esi
// 004e6139  75e5                 jne 0x4e6120
// 004e613b  8b0f                 mov ecx, dword ptr [edi]
// 004e613d  5e                   pop esi
// 004e613e  85c9                 test ecx, ecx
// 004e6140  7408                 je 0x4e614a
// 004e6142  8b11                 mov edx, dword ptr [ecx]
// 004e6144  8b02                 mov eax, dword ptr [edx]
// 004e6146  6a01                 push 1
// 004e6148  ffd0                 call eax
// 004e614a  c70700000000         mov dword ptr [edi], 0
// 004e6150  85db                 test ebx, ebx
// 004e6152  740c                 je 0x4e6160
// 004e6154  891f                 mov dword ptr [edi], ebx
// 004e6156  83c304               add ebx, 4
// 004e6159  53                   push ebx
// 004e615a  ff15b0218000         call dword ptr [0x8021b0]
// 004e6160  8bc7                 mov eax, edi
// 004e6162  5f                   pop edi
// 004e6163  5b                   pop ebx
// 004e6164  c20400               ret 4

extern "C" {
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
    extern long (__stdcall *InterlockedIncrement)(volatile long *);
}
void __cdecl operator delete(void *);

struct Object {
    virtual ~Object();
    virtual void release();
};

struct Node {
    Object *object;
    Node *next;
};

struct Control {
    virtual ~Control();
    volatile long references;
    Node *head;
};

struct S {
    Control *control;
    S &operator=(const S &other);
};

S &S::operator=(const S &other)
{
    Control *incoming = other.control;
    if (incoming != control) {
        if (control) {
            if (InterlockedDecrement(&control->references) == 0) {
                Node *node = control->head;
                while (node) {
                    node->object->release();
                    Node *old = node;
                    node = node->next;
                    operator delete(old);
                }
                delete control;
            }
            control = 0;
        }
        if (incoming) {
            control = incoming;
            InterlockedIncrement(&incoming->references);
        }
    }
    return *this;
}
