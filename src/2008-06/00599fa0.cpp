// from server: 100% by king_originala
// roc 2008-06 00599fa0  unit: RBX::PartInstance  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599fa0
//
// 00599fa0  56                   push esi
// 00599fa1  8bf1                 mov esi, ecx
// 00599fa3  837e1002             cmp dword ptr [esi + 0x10], 2
// 00599fa7  0f848c000000         je 0x59a039
// 00599fad  80bee501000000       cmp byte ptr [esi + 0x1e5], 0
// 00599fb4  7437                 je 0x599fed
// 00599fb6  8b86e8010000         mov eax, dword ptr [esi + 0x1e8]
// 00599fbc  8b96f4010000         mov edx, dword ptr [esi + 0x1f4]
// 00599fc2  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00599fc8  8b0c11               mov ecx, dword ptr [ecx + edx]
// 00599fcb  038ef0010000         add ecx, dword ptr [esi + 0x1f0]
// 00599fd1  8b96ec010000         mov edx, dword ptr [esi + 0x1ec]
// 00599fd7  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 00599fde  ffd2                 call edx
// 00599fe0  8886e4010000         mov byte ptr [esi + 0x1e4], al
// 00599fe6  c686e501000000       mov byte ptr [esi + 0x1e5], 0
// 00599fed  80bee401000000       cmp byte ptr [esi + 0x1e4], 0
// 00599ff4  7543                 jne 0x59a039
// 00599ff6  803d895f970000       cmp byte ptr [0x975f89], 0
// 00599ffd  753a                 jne 0x59a039
// 00599fff  803d8a5f970000       cmp byte ptr [0x975f8a], 0
// 0059a006  7531                 jne 0x59a039
// 0059a008  803d8b5f970000       cmp byte ptr [0x975f8b], 0
// 0059a00f  7528                 jne 0x59a039
// 0059a011  803d8d5f970000       cmp byte ptr [0x975f8d], 0
// 0059a018  751f                 jne 0x59a039
// 0059a01a  803d8c5f970000       cmp byte ptr [0x975f8c], 0
// 0059a021  7516                 jne 0x59a039
// 0059a023  803d8e5f970000       cmp byte ptr [0x975f8e], 0
// 0059a02a  750d                 jne 0x59a039
// 0059a02c  803d8f5f970000       cmp byte ptr [0x975f8f], 0
// 0059a033  7504                 jne 0x59a039
// 0059a035  33c0                 xor eax, eax
// 0059a037  5e                   pop esi
// 0059a038  c3                   ret 
// 0059a039  b801000000           mov eax, 1
// 0059a03e  5e                   pop esi
// 0059a03f  c3                   ret 

extern unsigned char flag89;
extern unsigned char flag8a;
extern unsigned char flag8b;
extern unsigned char flag8c;
extern unsigned char flag8d;
extern unsigned char flag8e;
extern unsigned char flag8f;

typedef bool (__thiscall *Callback)(void *);

struct Object {
    char padding[0x134];
    int *table;
};

struct S {
    char padding0[0x10];
    int state;
    char padding1[0x1d0];
    bool cached;
    bool dirty;
    char padding2[2];
    Object *object;
    Callback callback;
    int adjustment;
    int tableOffset;

    int f();
};

int S::f()
{
    if (state == 2)
        return 1;

    if (dirty) {
        cached = callback(
            reinterpret_cast<char *>(object) + 0x134 +
            *reinterpret_cast<int *>(
                reinterpret_cast<char *>(object->table) + tableOffset) +
            adjustment);
        dirty = false;
    }

    if (cached || flag89 || flag8a || flag8b ||
        flag8d || flag8c || flag8e || flag8f)
        return 1;

    return 0;
}
