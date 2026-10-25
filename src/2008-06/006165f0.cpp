// from server: 100% by king_originala
// roc 2008-06 006165f0  unit: RBX::BoxSelectCommand  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006165f0
//
// 006165f0  51                   push ecx
// 006165f1  56                   push esi
// 006165f2  8b3590288000         mov esi, dword ptr [0x802890]
// 006165f8  57                   push edi
// 006165f9  8da42400000000       lea esp, [esp]
// 00616600  8b442414             mov eax, dword ptr [esp + 0x14]
// 00616604  85c0                 test eax, eax
// 00616606  7406                 je 0x61660e
// 00616608  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0061660c  7402                 je 0x616610
// 0061660e  ffd6                 call esi
// 00616610  8b442418             mov eax, dword ptr [esp + 0x18]
// 00616614  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00616618  0f8435010000         je 0x616753
// 0061661e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616622  85c0                 test eax, eax
// 00616624  7406                 je 0x61662c
// 00616626  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0061662a  7402                 je 0x61662e
// 0061662c  ffd6                 call esi
// 0061662e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00616632  3b4c2430             cmp ecx, dword ptr [esp + 0x30]
// 00616636  0f8417010000         je 0x616753
// 0061663c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00616640  85c0                 test eax, eax
// 00616642  750a                 jne 0x61664e
// 00616644  ffd6                 call esi
// 00616646  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061664a  85c0                 test eax, eax
// 0061664c  7404                 je 0x616652
// 0061664e  8b00                 mov eax, dword ptr [eax]
// 00616650  eb02                 jmp 0x616654
// 00616652  33c0                 xor eax, eax
// 00616654  8b542418             mov edx, dword ptr [esp + 0x18]
// 00616658  3b5018               cmp edx, dword ptr [eax + 0x18]
// 0061665b  7502                 jne 0x61665f
// 0061665d  ffd6                 call esi
// 0061665f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00616663  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616667  83c70c               add edi, 0xc
// 0061666a  85c0                 test eax, eax
// 0061666c  750a                 jne 0x616678
// 0061666e  ffd6                 call esi
// 00616670  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616674  85c0                 test eax, eax
// 00616676  7404                 je 0x61667c
// 00616678  8b00                 mov eax, dword ptr [eax]
// 0061667a  eb02                 jmp 0x61667e
// 0061667c  33c0                 xor eax, eax
// 0061667e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00616682  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00616685  7502                 jne 0x616689
// 00616687  ffd6                 call esi
// 00616689  8b17                 mov edx, dword ptr [edi]
// 0061668b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061668f  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00616692  7342                 jae 0x6166d6
// 00616694  8b442414             mov eax, dword ptr [esp + 0x14]
// 00616698  85c0                 test eax, eax
// 0061669a  750a                 jne 0x6166a6
// 0061669c  ffd6                 call esi
// 0061669e  8b442414             mov eax, dword ptr [esp + 0x14]
// 006166a2  85c0                 test eax, eax
// 006166a4  7404                 je 0x6166aa
// 006166a6  8b00                 mov eax, dword ptr [eax]
// 006166a8  eb02                 jmp 0x6166ac
// 006166aa  33c0                 xor eax, eax
// 006166ac  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006166b0  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 006166b3  7502                 jne 0x6166b7
// 006166b5  ffd6                 call esi
// 006166b7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006166bb  8b420c               mov eax, dword ptr [edx + 0xc]
// 006166be  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006166c2  50                   push eax
// 006166c3  e8580df5ff           call 0x567420
// 006166c8  8d4c2414             lea ecx, [esp + 0x14]
// 006166cc  e86f2cfdff           call 0x5e9340
// 006166d1  e92affffff           jmp 0x616600
// 006166d6  8b442424             mov eax, dword ptr [esp + 0x24]
// 006166da  85c0                 test eax, eax
// 006166dc  750a                 jne 0x6166e8
// 006166de  ffd6                 call esi
// 006166e0  8b442424             mov eax, dword ptr [esp + 0x24]
// 006166e4  85c0                 test eax, eax
// 006166e6  7404                 je 0x6166ec
// 006166e8  8b00                 mov eax, dword ptr [eax]
// 006166ea  eb02                 jmp 0x6166ee
// 006166ec  33c0                 xor eax, eax
// 006166ee  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006166f2  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 006166f5  7502                 jne 0x6166f9
// 006166f7  ffd6                 call esi
// 006166f9  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006166fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00616701  83c70c               add edi, 0xc
// 00616704  85c0                 test eax, eax
// 00616706  750a                 jne 0x616712
// 00616708  ffd6                 call esi
// 0061670a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061670e  85c0                 test eax, eax
// 00616710  7404                 je 0x616716
// 00616712  8b00                 mov eax, dword ptr [eax]
// 00616714  eb02                 jmp 0x616718
// 00616716  33c0                 xor eax, eax
// 00616718  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061671c  3b5018               cmp edx, dword ptr [eax + 0x18]
// 0061671f  7502                 jne 0x616723
// 00616721  ffd6                 call esi
// 00616723  8b07                 mov eax, dword ptr [edi]
// 00616725  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00616729  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 0061672c  730e                 jae 0x61673c
// 0061672e  8d4c2424             lea ecx, [esp + 0x24]
// 00616732  e8092cfdff           call 0x5e9340
// 00616737  e9c4feffff           jmp 0x616600
// 0061673c  8d4c2414             lea ecx, [esp + 0x14]
// 00616740  e8fb2bfdff           call 0x5e9340
// 00616745  8d4c2424             lea ecx, [esp + 0x24]
// 00616749  e8f22bfdff           call 0x5e9340
// 0061674e  e9adfeffff           jmp 0x616600
// 00616753  8b442434             mov eax, dword ptr [esp + 0x34]
// 00616757  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061675b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061675f  c644240800           mov byte ptr [esp + 8], 0
// 00616764  8b542408             mov edx, dword ptr [esp + 8]
// 00616768  52                   push edx
// 00616769  8b542438             mov edx, dword ptr [esp + 0x38]
// 0061676d  50                   push eax
// 0061676e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00616772  51                   push ecx
// 00616773  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00616777  52                   push edx
// 00616778  8b542428             mov edx, dword ptr [esp + 0x28]
// 0061677c  50                   push eax
// 0061677d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00616781  51                   push ecx
// 00616782  52                   push edx
// 00616783  50                   push eax
// 00616784  56                   push esi
// 00616785  e826fbffff           call 0x6162b0
// 0061678a  83c424               add esp, 0x24
// 0061678d  5f                   pop edi
// 0061678e  8bc6                 mov eax, esi
// 00616790  5e                   pop esi
// 00616791  59                   pop ecx
// 00616792  c3                   ret 

struct Node {
    unsigned char padding[12];
    unsigned int value;
};

struct Tree {
    unsigned char padding[24];
    Node* sentinel;
};

struct Owner {
    Tree* tree;
};

struct Iterator {
    Owner* owner;
    Node* node;
    void advance();
};

struct Sink {
    void append(unsigned int value);
};

struct Checked {
    bool value;
};

extern "C" void (__cdecl* invalid_parameter_noinfo)();

extern void __cdecl copy_remaining(
    Sink** result,
    Iterator first,
    Iterator last,
    Sink* output1,
    Sink* output2,
    Sink* output3,
    Checked checked
);

Sink** __cdecl set_difference(
    Sink** result,
    Iterator first,
    Iterator last,
    Iterator second,
    Iterator secondLast,
    Sink* volatile output
) {
    void (__cdecl* invalid)() = invalid_parameter_noinfo;

    for (;;) {
        if (!first.owner || first.owner != last.owner)
            invalid();
        if (first.node == last.node)
            break;

        if (!second.owner || second.owner != secondLast.owner)
            invalid();
        if (second.node == secondLast.node)
            break;

        if (!first.owner)
            invalid();
        Tree* firstTree = first.owner ? first.owner->tree : 0;
        if (first.node == firstTree->sentinel)
            invalid();
        unsigned int* firstValue = &first.node->value;

        if (!second.owner)
            invalid();
        Tree* secondTree = second.owner ? second.owner->tree : 0;
        if (second.node == secondTree->sentinel)
            invalid();

        if (*firstValue < second.node->value) {
            if (!first.owner)
                invalid();
            Tree* tree = first.owner ? first.owner->tree : 0;
            if (first.node == tree->sentinel)
                invalid();

            output->append(first.node->value);
            first.advance();
        } else {
            if (!second.owner)
                invalid();
            Tree* tree = second.owner ? second.owner->tree : 0;
            if (second.node == tree->sentinel)
                invalid();
            unsigned int* secondValue = &second.node->value;

            if (!first.owner)
                invalid();
            Tree* otherTree = first.owner ? first.owner->tree : 0;
            if (first.node == otherTree->sentinel)
                invalid();

            if (*secondValue < first.node->value) {
                second.advance();
            } else {
                first.advance();
                second.advance();
            }
        }
    }

    Checked checked;
    checked.value = false;
    copy_remaining(result, first, last, output, output, output, checked);
    return result;
}
