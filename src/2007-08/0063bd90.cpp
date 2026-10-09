// from server: 100% by colin
// roc 2007-08 0063bd90  unit: PAVCXTPControlAction::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063bd90
//
// 0063bd90  53                   push ebx
// 0063bd91  56                   push esi
// 0063bd92  8bd9                 mov ebx, ecx
// 0063bd94  33f6                 xor esi, esi
// 0063bd96  e8d57a0100           call 0x653870
// 0063bd9b  85c0                 test eax, eax
// 0063bd9d  7e28                 jle 0x63bdc7
// 0063bd9f  57                   push edi
// 0063bda0  56                   push esi
// 0063bda1  8bcb                 mov ecx, ebx
// 0063bda3  e878d40500           call 0x699220
// 0063bda8  8bf8                 mov edi, eax
// 0063bdaa  8bcf                 mov ecx, edi
// 0063bdac  e8bffeffff           call 0x63bc70
// 0063bdb1  8bcf                 mov ecx, edi
// 0063bdb3  e82c44ffff           call 0x6301e4
// 0063bdb8  8bcb                 mov ecx, ebx
// 0063bdba  83c601               add esi, 1
// 0063bdbd  e8ae7a0100           call 0x653870
// 0063bdc2  3bf0                 cmp esi, eax
// 0063bdc4  7cda                 jl 0x63bda0
// 0063bdc6  5f                   pop edi
// 0063bdc7  6aff                 push -1
// 0063bdc9  6a00                 push 0
// 0063bdcb  8d4b20               lea ecx, [ebx + 0x20]
// 0063bdce  e8dd3c0c00           call 0x6ffab0
// 0063bdd3  5e                   pop esi
// 0063bdd4  5b                   pop ebx
// 0063bdd5  c3                   ret 

struct Inner {
    void f1();
    void f2();
};

struct Outer {
    int GetCount();
    Inner* GetAt(int index);
    void RemoveAll();
};

struct Tail {
    char pad[0x20];
    void Clear(int a, int b);
};

void Outer::RemoveAll()
{
    int i = 0;
    while (i < GetCount()) {
        Inner* p = GetAt(i);
        p->f1();
        p->f2();
        i++;
    }
    ((Tail*)((char*)this + 0x20))->Clear(0, -1);
}
