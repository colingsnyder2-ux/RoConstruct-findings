// from server: 100% by king_originala
// roc 2008-06 006167a0  unit: RBX::BoxSelectCommand  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006167a0
//
// 006167a0  51                   push ecx
// 006167a1  56                   push esi
// 006167a2  8b3590288000         mov esi, dword ptr [0x802890]
// 006167a8  57                   push edi
// 006167a9  8da42400000000       lea esp, [esp]
// 006167b0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006167b4  85c0                 test eax, eax
// 006167b6  7406                 je 0x6167be
// 006167b8  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 006167bc  7402                 je 0x6167c0
// 006167be  ffd6                 call esi
// 006167c0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006167c4  3b442420             cmp eax, dword ptr [esp + 0x20]
// 006167c8  0f8435010000         je 0x616903
// 006167ce  8b442424             mov eax, dword ptr [esp + 0x24]
// 006167d2  85c0                 test eax, eax
// 006167d4  7406                 je 0x6167dc
// 006167d6  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 006167da  7402                 je 0x6167de
// 006167dc  ffd6                 call esi
// 006167de  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006167e2  3b4c2430             cmp ecx, dword ptr [esp + 0x30]
// 006167e6  0f8417010000         je 0x616903
// 006167ec  8b442414             mov eax, dword ptr [esp + 0x14]
// 006167f0  85c0                 test eax, eax
// 006167f2  750a                 jne 0x6167fe
// 006167f4  ffd6                 call esi
// 006167f6  8b442414             mov eax, dword ptr [esp + 0x14]
// 006167fa  85c0                 test eax, eax
// 006167fc  7404                 je 0x616802
// 006167fe  8b00                 mov eax, dword ptr [eax]
// 00616800  eb02                 jmp 0x616804
// 00616802  33c0                 xor eax, eax
// 00616804  8b542418             mov edx, dword ptr [esp + 0x18]
// 00616808  3b5018               cmp edx, dword ptr [eax + 0x18]
// 0061680b  7502                 jne 0x61680f
// 0061680d  ffd6                 call esi
// 0061680f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00616813  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616817  83c70c               add edi, 0xc
// 0061681a  85c0                 test eax, eax
// 0061681c  750a                 jne 0x616828
// 0061681e  ffd6                 call esi
// 00616820  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616824  85c0                 test eax, eax
// 00616826  7404                 je 0x61682c
// 00616828  8b00                 mov eax, dword ptr [eax]
// 0061682a  eb02                 jmp 0x61682e
// 0061682c  33c0                 xor eax, eax
// 0061682e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00616832  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00616835  7502                 jne 0x616839
// 00616837  ffd6                 call esi
// 00616839  8b17                 mov edx, dword ptr [edi]
// 0061683b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061683f  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00616842  7342                 jae 0x616886
// 00616844  8b442414             mov eax, dword ptr [esp + 0x14]
// 00616848  85c0                 test eax, eax
// 0061684a  750a                 jne 0x616856
// 0061684c  ffd6                 call esi
// 0061684e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00616852  85c0                 test eax, eax
// 00616854  7404                 je 0x61685a
// 00616856  8b00                 mov eax, dword ptr [eax]
// 00616858  eb02                 jmp 0x61685c
// 0061685a  33c0                 xor eax, eax
// 0061685c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00616860  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00616863  7502                 jne 0x616867
// 00616865  ffd6                 call esi
// 00616867  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061686b  8b420c               mov eax, dword ptr [edx + 0xc]
// 0061686e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00616872  50                   push eax
// 00616873  e89813f5ff           call 0x567c10
// 00616878  8d4c2414             lea ecx, [esp + 0x14]
// 0061687c  e8bf2afdff           call 0x5e9340
// 00616881  e92affffff           jmp 0x6167b0
// 00616886  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061688a  85c0                 test eax, eax
// 0061688c  750a                 jne 0x616898
// 0061688e  ffd6                 call esi
// 00616890  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616894  85c0                 test eax, eax
// 00616896  7404                 je 0x61689c
// 00616898  8b00                 mov eax, dword ptr [eax]
// 0061689a  eb02                 jmp 0x61689e
// 0061689c  33c0                 xor eax, eax
// 0061689e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006168a2  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 006168a5  7502                 jne 0x6168a9
// 006168a7  ffd6                 call esi
// 006168a9  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006168ad  8b442414             mov eax, dword ptr [esp + 0x14]
// 006168b1  83c70c               add edi, 0xc
// 006168b4  85c0                 test eax, eax
// 006168b6  750a                 jne 0x6168c2
// 006168b8  ffd6                 call esi
// 006168ba  8b442414             mov eax, dword ptr [esp + 0x14]
// 006168be  85c0                 test eax, eax
// 006168c0  7404                 je 0x6168c6
// 006168c2  8b00                 mov eax, dword ptr [eax]
// 006168c4  eb02                 jmp 0x6168c8
// 006168c6  33c0                 xor eax, eax
// 006168c8  8b542418             mov edx, dword ptr [esp + 0x18]
// 006168cc  3b5018               cmp edx, dword ptr [eax + 0x18]
// 006168cf  7502                 jne 0x6168d3
// 006168d1  ffd6                 call esi
// 006168d3  8b07                 mov eax, dword ptr [edi]
// 006168d5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006168d9  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 006168dc  730e                 jae 0x6168ec
// 006168de  8d4c2424             lea ecx, [esp + 0x24]
// 006168e2  e8592afdff           call 0x5e9340
// 006168e7  e9c4feffff           jmp 0x6167b0
// 006168ec  8d4c2414             lea ecx, [esp + 0x14]
// 006168f0  e84b2afdff           call 0x5e9340
// 006168f5  8d4c2424             lea ecx, [esp + 0x24]
// 006168f9  e8422afdff           call 0x5e9340
// 006168fe  e9adfeffff           jmp 0x6167b0
// 00616903  8b442434             mov eax, dword ptr [esp + 0x34]
// 00616907  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061690b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061690f  c644240800           mov byte ptr [esp + 8], 0
// 00616914  8b542408             mov edx, dword ptr [esp + 8]
// 00616918  52                   push edx
// 00616919  8b542438             mov edx, dword ptr [esp + 0x38]
// 0061691d  50                   push eax
// 0061691e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00616922  51                   push ecx
// 00616923  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00616927  52                   push edx
// 00616928  8b542428             mov edx, dword ptr [esp + 0x28]
// 0061692c  50                   push eax
// 0061692d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00616931  51                   push ecx
// 00616932  52                   push edx
// 00616933  50                   push eax
// 00616934  56                   push esi
// 00616935  e8e6f9ffff           call 0x616320
// 0061693a  83c424               add esp, 0x24
// 0061693d  5f                   pop edi
// 0061693e  8bc6                 mov eax, esi
// 00616940  5e                   pop esi
// 00616941  59                   pop ecx
// 00616942  c3                   ret 

typedef void (__cdecl *InvalidParameterHandler)();
extern InvalidParameterHandler invalid_parameter;

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned value;
};

struct Container {
    unsigned padding[6];
    Node* head;
};

struct Iterator {
    Container** owner;
    Node* node;

    bool different(const Iterator& other, InvalidParameterHandler handler) const;
    unsigned& value(InvalidParameterHandler handler) const;
    void increment();
};

struct Selection {
    void append(unsigned value);
};

struct CopyTag {};

extern void __cdecl copy_tail(
    void* result,
    Iterator first,
    Iterator last,
    Selection* output,
    Selection* outputCopy,
    Selection* outputEnd,
    CopyTag tag);

__forceinline bool Iterator::different(
    const Iterator& other, InvalidParameterHandler handler) const
{
    if (!owner || owner != other.owner)
        handler();
    return node != other.node;
}

__forceinline unsigned& Iterator::value(InvalidParameterHandler handler) const
{
    if (!owner)
        handler();
    Container* container = owner ? *owner : 0;
    if (node == container->head)
        handler();
    return node->value;
}

void* __cdecl difference(
    void* result,
    Iterator first,
    Iterator last,
    Iterator second,
    Iterator secondLast,
    Selection* volatile output)
{
    InvalidParameterHandler handler = invalid_parameter;

    while (first.different(last, handler) &&
           second.different(secondLast, handler)) {
        if (first.value(handler) < second.value(handler)) {
            output->append(first.value(handler));
            first.increment();
        } else if (second.value(handler) < first.value(handler)) {
            second.increment();
        } else {
            first.increment();
            second.increment();
        }
    }

    copy_tail(result, first, last, output, output, output, CopyTag());
    return result;
}
