// roc 2009-06 00517640  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00517640
//
// 00517640  8b542404             mov edx, dword ptr [esp + 4]
// 00517644  56                   push esi
// 00517645  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00517649  8d4210               lea eax, [edx + 0x10]
// 0051764c  8d4e10               lea ecx, [esi + 0x10]
// 0051764f  3bc1                 cmp eax, ecx
// 00517651  7306                 jae 0x517659
// 00517653  b001                 mov al, 1
// 00517655  5e                   pop esi
// 00517656  c20800               ret 8
// 00517659  7606                 jbe 0x517661
// 0051765b  32c0                 xor al, al
// 0051765d  5e                   pop esi
// 0051765e  c20800               ret 8
// 00517661  8b420c               mov eax, dword ptr [edx + 0xc]
// 00517664  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00517667  3bc1                 cmp eax, ecx
// 00517669  7ce8                 jl 0x517653
// 0051766b  7fee                 jg 0x51765b
// 0051766d  3bd6                 cmp edx, esi
// 0051766f  0f92c0               setb al
// 00517672  5e                   pop esi
// 00517673  c20800               ret 8
// copied from an identical function in another client (function ?compare@S@@QBEEPBUItem@@0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Item {
    char padding[12];
    int value;
    char key;
};

struct S {
    unsigned char compare(const Item* a, const Item* b) const;
};

unsigned char S::compare(const Item* a, const Item* b) const {
    if (&a->key < &b->key)
        return 1;
    if (&a->key > &b->key)
        return 0;
    if (a->value < b->value)
        return 1;
    if (a->value > b->value)
        return 0;
    return static_cast<unsigned char>(a < b);
}