// from server: 100% by king_originala
// roc 2008-06 004154a0  unit: PasteVerb  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004154a0
//
// 004154a0  f605f4cb960001       test byte ptr [0x96cbf4], 1
// 004154a7  56                   push esi
// 004154a8  8bf1                 mov esi, ecx
// 004154aa  7517                 jne 0x4154c3
// 004154ac  830df4cb960001       or dword ptr [0x96cbf4], 1
// 004154b3  6820e98000           push 0x80e920
// 004154b8  ff15f02d8000         call dword ptr [0x802df0]
// 004154be  a3f0cb9600           mov dword ptr [0x96cbf0], eax
// 004154c3  a1f0cb9600           mov eax, dword ptr [0x96cbf0]
// 004154c8  50                   push eax
// 004154c9  ff15ec2d8000         call dword ptr [0x802dec]
// 004154cf  83f801               cmp eax, 1
// 004154d2  7404                 je 0x4154d8
// 004154d4  32c0                 xor al, al
// 004154d6  5e                   pop esi
// 004154d7  c3                   ret 
// 004154d8  807e1000             cmp byte ptr [esi + 0x10], 0
// 004154dc  7504                 jne 0x4154e2
// 004154de  b001                 mov al, 1
// 004154e0  5e                   pop esi
// 004154e1  c3                   ret 
// 004154e2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004154e5  85c9                 test ecx, ecx
// 004154e7  7407                 je 0x4154f0
// 004154e9  e8c2feffff           call 0x4153b0
// 004154ee  eb02                 jmp 0x4154f2
// 004154f0  33c0                 xor eax, eax
// 004154f2  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 004154f8  8b4810               mov ecx, dword ptr [eax + 0x10]
// 004154fb  2b480c               sub ecx, dword ptr [eax + 0xc]
// 004154fe  33c0                 xor eax, eax
// 00415500  83e1f8               and ecx, 0xfffffff8
// 00415503  83f908               cmp ecx, 8
// 00415506  0f94c0               sete al
// 00415509  5e                   pop esi
// 0041550a  c3                   ret 

extern "C" unsigned int (__stdcall *RegisterClipboardFormatA)(const char *);
extern "C" int (__stdcall *IsClipboardFormatAvailable)(unsigned int);
extern const char clipboardName[];

struct Element {
    void *object;
    void *control;
};

struct Collection {
    char padding[12];
    Element *first;
    Element *last;
};

struct Data {
    char padding[0x154];
    Collection *collection;
};

struct Owner {
    Data *get();
};

struct PasteVerb {
    char padding[12];
    Owner *owner;
    bool restricted;

    bool enabled();
};

bool PasteVerb::enabled()
{
    static unsigned int format;
    static unsigned int initialized;

    if (!(initialized & 1)) {
        initialized |= 1;
        format = RegisterClipboardFormatA(clipboardName);
    }

    if (IsClipboardFormatAvailable(format) != 1)
        return false;

    if (!restricted)
        return true;

    Data *data = owner ? owner->get() : 0;
    Collection *collection = data->collection;
    return collection->last - collection->first == 1;
}
