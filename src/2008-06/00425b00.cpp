// from server: 99% by colin
// from server: 97% by king_originala
// roc 2008-06 00425b00  unit: CSelectionTreeCtrl  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00425b00
//
// 00425b00  6aff                 push -1
// 00425b02  6874ea7b00           push 0x7bea74
// 00425b07  64a100000000         mov eax, dword ptr fs:[0]
// 00425b0d  50                   push eax
// 00425b0e  64892500000000       mov dword ptr fs:[0], esp
// 00425b15  83ec08               sub esp, 8
// 00425b18  56                   push esi
// 00425b19  8bf1                 mov esi, ecx
// 00425b1b  89742408             mov dword ptr [esp + 8], esi
// 00425b1f  e87c622b00           call 0x6dbda0
// 00425b24  8d442407             lea eax, [esp + 7]
// 00425b28  50                   push eax
// 00425b29  8d54240b             lea edx, [esp + 0xb]
// 00425b2d  8d8e98000000         lea ecx, [esi + 0x98]
// 00425b33  52                   push edx
// 00425b34  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00425b3c  c706d4fc8000         mov dword ptr [esi], 0x80fcd4
// 00425b42  c746544cfc8000       mov dword ptr [esi + 0x54], 0x80fc4c
// 00425b49  c7869400000000000000 mov dword ptr [esi + 0x94], 0
// 00425b53  e8b8050200           call 0x446110
// 00425b58  8d8ebc000000         lea ecx, [esi + 0xbc]
// 00425b5e  c644241401           mov byte ptr [esp + 0x14], 1
// 00425b63  c686b800000000       mov byte ptr [esi + 0xb8], 0
// 00425b6a  e8c1d6feff           call 0x413230
// 00425b6f  8d8ec4000000         lea ecx, [esi + 0xc4]
// 00425b75  c644241402           mov byte ptr [esp + 0x14], 2
// 00425b7a  e8f1d41300           call 0x563070
// 00425b7f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00425b83  8bc6                 mov eax, esi
// 00425b85  5e                   pop esi
// 00425b86  64890d00000000       mov dword ptr fs:[0], ecx
// 00425b8d  83c414               add esp, 0x14
// 00425b90  c3                   ret 

struct Primary {
    virtual ~Primary();
    char padding[0x50];
};

struct Secondary {
    virtual ~Secondary();
    char padding[0x3c];
};

struct Base : Primary, Secondary {
    Base();
    virtual ~Base();
};

struct Tag {
    Tag();
};

inline Tag::Tag() {}

struct Tree {
    char storage[0x20];
    Tree(const Tag&, const Tag&);
    ~Tree();
};

struct Map : Tree {
    Map() : Tree(Tag(), Tag()) {}
};

struct Member {
    int storage[2];
    Member();
    ~Member();
};

struct Content {
    int storage[3];
    Content();
    ~Content();
};

struct S : Base {
    int value;
    Map tree;
    bool flag;
    Member member;
    Content content;

    S();
    virtual ~S();
};

S::S()
    : Base(),
      value(0),
      tree(),
      flag(false),
      member(),
      content()
{
}
