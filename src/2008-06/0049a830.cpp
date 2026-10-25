// from server: 100% by king_originala
// roc 2008-06 0049a830  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a830
//
// 0049a830  83ec08               sub esp, 8
// 0049a833  56                   push esi
// 0049a834  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049a838  8b06                 mov eax, dword ptr [esi]
// 0049a83a  57                   push edi
// 0049a83b  8bf9                 mov edi, ecx
// 0049a83d  8907                 mov dword ptr [edi], eax
// 0049a83f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049a842  8d5608               lea edx, [esi + 8]
// 0049a845  894f04               mov dword ptr [edi + 4], ecx
// 0049a848  52                   push edx
// 0049a849  8d4f08               lea ecx, [edi + 8]
// 0049a84c  ff150c248000         call dword ptr [0x80240c]
// 0049a852  8d4624               lea eax, [esi + 0x24]
// 0049a855  8d7724               lea esi, [edi + 0x24]
// 0049a858  3bf0                 cmp esi, eax
// 0049a85a  7433                 je 0x49a88f
// 0049a85c  53                   push ebx
// 0049a85d  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0049a860  55                   push ebp
// 0049a861  8b28                 mov ebp, dword ptr [eax]
// 0049a863  8b03                 mov eax, dword ptr [ebx]
// 0049a865  8bce                 mov ecx, esi
// 0049a867  89442414             mov dword ptr [esp + 0x14], eax
// 0049a86b  e800daffff           call 0x498270
// 0049a870  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0049a874  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0049a877  8b01                 mov eax, dword ptr [ecx]
// 0049a879  8b0e                 mov ecx, dword ptr [esi]
// 0049a87b  52                   push edx
// 0049a87c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049a880  53                   push ebx
// 0049a881  55                   push ebp
// 0049a882  52                   push edx
// 0049a883  55                   push ebp
// 0049a884  50                   push eax
// 0049a885  51                   push ecx
// 0049a886  8bce                 mov ecx, esi
// 0049a888  e873e6ffff           call 0x498f00
// 0049a88d  5d                   pop ebp
// 0049a88e  5b                   pop ebx
// 0049a88f  8bc7                 mov eax, edi
// 0049a891  5f                   pop edi
// 0049a892  5e                   pop esi
// 0049a893  83c408               add esp, 8
// 0049a896  c20400               ret 4

struct String {
    char storage[28];
};

extern String& (__thiscall *assign_string)(String*, const String&);

struct Node {
    Node* next;
};

struct Iterator {
    void* owner;
    Node* node;
};

struct S;

struct Tree {
    void* owner;
    char padding[16];
    Node* head;

    void clear();
    void copy_range(Iterator destination, Iterator first,
                    Iterator last, const S* source);
};

struct S {
    unsigned int first;
    unsigned int second;
    String text;
    Tree tree;

    S& operator=(const S& source);
};

S& S::operator=(const S& source)
{
    first = source.first;
    second = source.second;
    assign_string(&text, source.text);

    const Tree* input = &source.tree;
    Tree* destination = &tree;

    if (destination != input) {
        Node* head = input->head;
        void* owner = input->owner;

        Iterator begin;
        begin.owner = owner;
        begin.node = head->next;

        destination->clear();

        Iterator end;
        end.owner = owner;
        end.node = head;

        Iterator position;
        position.node = destination->head->next;
        position.owner = destination->owner;

        destination->copy_range(position, begin, end, &source);
    }

    return *this;
}
