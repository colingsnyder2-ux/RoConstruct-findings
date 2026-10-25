// from server: 100% by king_originala
// roc 2008-06 005fccd0  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fccd0
//
// 005fccd0  6aff                 push -1
// 005fccd2  68867e7d00           push 0x7d7e86
// 005fccd7  64a100000000         mov eax, dword ptr fs:[0]
// 005fccdd  50                   push eax
// 005fccde  64892500000000       mov dword ptr fs:[0], esp
// 005fcce5  51                   push ecx
// 005fcce6  56                   push esi
// 005fcce7  8bf1                 mov esi, ecx
// 005fcce9  89742404             mov dword ptr [esp + 4], esi
// 005fcced  e8cefdffff           call 0x5fcac0
// 005fccf2  33c0                 xor eax, eax
// 005fccf4  c7064c168400         mov dword ptr [esi], 0x84164c
// 005fccfa  c746103c168400       mov dword ptr [esi + 0x10], 0x84163c
// 005fcd01  c7461434168400       mov dword ptr [esi + 0x14], 0x841634
// 005fcd08  c746202c168400       mov dword ptr [esi + 0x20], 0x84162c
// 005fcd0f  c746241c168400       mov dword ptr [esi + 0x24], 0x84161c
// 005fcd16  c746440c168400       mov dword ptr [esi + 0x44], 0x84160c
// 005fcd1d  c74664fc158400       mov dword ptr [esi + 0x64], 0x8415fc
// 005fcd24  c78684000000ec158400 mov dword ptr [esi + 0x84], 0x8415ec
// 005fcd2e  c786a4000000dc158400 mov dword ptr [esi + 0xa4], 0x8415dc
// 005fcd38  c786c4000000cc158400 mov dword ptr [esi + 0xc4], 0x8415cc
// 005fcd42  c78630010000c4158400 mov dword ptr [esi + 0x130], 0x8415c4
// 005fcd4c  898648010000         mov dword ptr [esi + 0x148], eax
// 005fcd52  89442410             mov dword ptr [esp + 0x10], eax
// 005fcd56  89864c010000         mov dword ptr [esi + 0x14c], eax
// 005fcd5c  8d8e50010000         lea ecx, [esi + 0x150]
// 005fcd62  c644241001           mov byte ptr [esp + 0x10], 1
// 005fcd67  e8042bfdff           call 0x5cf870
// 005fcd6c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fcd70  8bc6                 mov eax, esi
// 005fcd72  5e                   pop esi
// 005fcd73  64890d00000000       mov dword ptr fs:[0], ecx
// 005fcd7a  83c410               add esp, 0x10
// 005fcd7d  c3                   ret 

struct Base {
    unsigned long layout[0x148 / 4];
    Base();
    ~Base();
};

struct Word {
    unsigned long value;
    Word(unsigned long v);
    ~Word();
};

inline Word::Word(unsigned long v) : value(v) {
}

struct Tail {
    Tail();
    ~Tail();
};

struct S : Base {
    unsigned long first;
    Word second;
    Tail tail;
    S();
};

S::S()
    : first((
        layout[0x000 / 4] = 0x0084164c,
        layout[0x010 / 4] = 0x0084163c,
        layout[0x014 / 4] = 0x00841634,
        layout[0x020 / 4] = 0x0084162c,
        layout[0x024 / 4] = 0x0084161c,
        layout[0x044 / 4] = 0x0084160c,
        layout[0x064 / 4] = 0x008415fc,
        layout[0x084 / 4] = 0x008415ec,
        layout[0x0a4 / 4] = 0x008415dc,
        layout[0x0c4 / 4] = 0x008415cc,
        layout[0x130 / 4] = 0x008415c4,
        0)),
      second(0),
      tail() {
}
