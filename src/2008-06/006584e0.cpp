// from server: 78% by colin
// from server: 76% by king_originala
// roc 2008-06 006584e0  unit: RBX::ArrowButton  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006584e0
//
// 006584e0  6aff                 push -1
// 006584e2  68b2be7d00           push 0x7dbeb2
// 006584e7  64a100000000         mov eax, dword ptr fs:[0]
// 006584ed  50                   push eax
// 006584ee  64892500000000       mov dword ptr fs:[0], esp
// 006584f5  51                   push ecx
// 006584f6  53                   push ebx
// 006584f7  55                   push ebp
// 006584f8  56                   push esi
// 006584f9  57                   push edi
// 006584fa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00658502  8b31                 mov esi, dword ptr [ecx]
// 00658504  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00658508  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 0065850c  b893244992           mov eax, 0x92492493
// 00658511  f7e9                 imul ecx
// 00658513  03d1                 add edx, ecx
// 00658515  c1fa04               sar edx, 4
// 00658518  8bc2                 mov eax, edx
// 0065851a  c1e81f               shr eax, 0x1f
// 0065851d  bd01000000           mov ebp, 1
// 00658522  03c2                 add eax, edx
// 00658524  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00658528  8bfd                 mov edi, ebp
// 0065852a  3bc5                 cmp eax, ebp
// 0065852c  7656                 jbe 0x658584
// 0065852e  8d5d1b               lea ebx, [ebp + 0x1b]
// 00658531  3bf8                 cmp edi, eax
// 00658533  7206                 jb 0x65853b
// 00658535  ff1590288000         call dword ptr [0x802890]
// 0065853b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0065853f  03c3                 add eax, ebx
// 00658541  50                   push eax
// 00658542  e8d95bf6ff           call 0x5be120
// 00658547  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0065854a  8b5610               mov edx, dword ptr [esi + 0x10]
// 0065854d  2bd1                 sub edx, ecx
// 0065854f  c1fa02               sar edx, 2
// 00658552  83c404               add esp, 4
// 00658555  3bc2                 cmp eax, edx
// 00658557  0f83a1000000         jae 0x6585fe
// 0065855d  8b3481               mov esi, dword ptr [ecx + eax*4]
// 00658560  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00658564  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 00658568  b893244992           mov eax, 0x92492493
// 0065856d  f7e9                 imul ecx
// 0065856f  03d1                 add edx, ecx
// 00658571  c1fa04               sar edx, 4
// 00658574  8bc2                 mov eax, edx
// 00658576  c1e81f               shr eax, 0x1f
// 00658579  03fd                 add edi, ebp
// 0065857b  03c2                 add eax, edx
// 0065857d  83c31c               add ebx, 0x1c
// 00658580  3bf8                 cmp edi, eax
// 00658582  72b7                 jb 0x65853b
// 00658584  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00658588  83c618               add esi, 0x18
// 0065858b  56                   push esi
// 0065858c  8bcb                 mov ecx, ebx
// 0065858e  ff155c248000         call dword ptr [0x80245c]
// 00658594  896c2410             mov dword ptr [esp + 0x10], ebp
// 00658598  8b742434             mov esi, dword ptr [esp + 0x34]
// 0065859c  33ed                 xor ebp, ebp
// 0065859e  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 006585a6  3bf5                 cmp esi, ebp
// 006585a8  7424                 je 0x6585ce
// 006585aa  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006585ae  3bf7                 cmp esi, edi
// 006585b0  7413                 je 0x6585c5
// 006585b2  8bce                 mov ecx, esi
// 006585b4  ff1568248000         call dword ptr [0x802468]
// 006585ba  83c61c               add esi, 0x1c
// 006585bd  3bf7                 cmp esi, edi
// 006585bf  75f1                 jne 0x6585b2
// 006585c1  8b742434             mov esi, dword ptr [esp + 0x34]
// 006585c5  56                   push esi
// 006585c6  e8af800400           call 0x6a067a
// 006585cb  83c404               add esp, 4
// 006585ce  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006585d2  51                   push ecx
// 006585d3  896c2438             mov dword ptr [esp + 0x38], ebp
// 006585d7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 006585db  896c2440             mov dword ptr [esp + 0x40], ebp
// 006585df  e896800400           call 0x6a067a
// 006585e4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006585e8  83c404               add esp, 4
// 006585eb  5f                   pop edi
// 006585ec  5e                   pop esi
// 006585ed  5d                   pop ebp
// 006585ee  8bc3                 mov eax, ebx
// 006585f0  5b                   pop ebx
// 006585f1  64890d00000000       mov dword ptr fs:[0], ecx
// 006585f8  83c410               add esp, 0x10
// 006585fb  c21c00               ret 0x1c
// 006585fe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00658602  6816b78000           push 0x80b716
// 00658607  8bcb                 mov ecx, ebx
// 00658609  ff1558248000         call dword ptr [0x802458]
// 0065860f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00658613  8b742434             mov esi, dword ptr [esp + 0x34]
// 00658617  33ed                 xor ebp, ebp
// 00658619  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 00658621  3bf5                 cmp esi, ebp
// 00658623  7427                 je 0x65864c
// 00658625  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00658629  3bf7                 cmp esi, edi
// 0065862b  7416                 je 0x658643
// 0065862d  8d4900               lea ecx, [ecx]
// 00658630  8bce                 mov ecx, esi
// 00658632  ff1568248000         call dword ptr [0x802468]
// 00658638  83c61c               add esi, 0x1c
// 0065863b  3bf7                 cmp esi, edi
// 0065863d  75f1                 jne 0x658630
// 0065863f  8b742434             mov esi, dword ptr [esp + 0x34]
// 00658643  56                   push esi
// 00658644  e831800400           call 0x6a067a
// 00658649  83c404               add esp, 4
// 0065864c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00658650  50                   push eax
// 00658651  eb80                 jmp 0x6585d3



#include <string>
typedef std::string String;
extern "C" void __cdecl _invalid_parameter_noinfo();
extern unsigned int __cdecl parseIndex(const String*);
void __cdecl operator delete(void*);

struct Node;

struct NodeVector {
    void* allocation;
    unsigned int reserved[2];
    Node** first;
    Node** last;
    Node** limit;
};

struct StringVector {
    void* allocation;
    unsigned int reserved[2];
    String* first;
    String* last;
    String* limit;

    ~StringVector();
    unsigned int size() const;
    const String& at(unsigned int) const;
};

inline unsigned int StringVector::size() const
{
    return static_cast<unsigned int>(last - first);
}

inline const String& StringVector::at(unsigned int index) const
{
    if (index >= size())
        _invalid_parameter_noinfo();
    return first[index];
}

inline StringVector::~StringVector()
{
    if (first) {
        String* p = first;
        while (p != last) {
            p->~String();
            ++p;
        }
        operator delete(first);
    }
    first = 0;
    last = 0;
    limit = 0;
    operator delete(allocation);
}

struct Node {
    NodeVector children;
    String text;
};

struct ArrowButton {
    Node* root;
    String resolve(StringVector path);
};

String ArrowButton::resolve(StringVector path)
{
    Node* node = root;
    for (unsigned int i = 1; i < path.size(); ++i) {
        unsigned int index = parseIndex(&path.at(i));
        if (index >= static_cast<unsigned int>(
                node->children.last - node->children.first))
            return String(">Authoring");
        node = node->children.first[index];
    }
    return String(node->text);
}
