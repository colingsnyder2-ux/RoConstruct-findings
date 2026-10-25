// from server: 100% by king_originala
// roc 2008-06 00614760  unit: RBX::RevoluteLink  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614760
//
// 00614760  55                   push ebp
// 00614761  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00614765  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00614768  56                   push esi
// 00614769  57                   push edi
// 0061476a  8bf1                 mov esi, ecx
// 0061476c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0061476f  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00614772  8b7cbafc             mov edi, dword ptr [edx + edi*4 - 4]
// 00614776  8d4e1c               lea ecx, [esi + 0x1c]
// 00614779  893c82               mov dword ptr [edx + eax*4], edi
// 0061477c  894718               mov dword ptr [edi + 0x18], eax
// 0061477f  8b4104               mov eax, dword ptr [ecx + 4]
// 00614782  6a00                 push 0
// 00614784  48                   dec eax
// 00614785  50                   push eax
// 00614786  e8e55ffeff           call 0x5fa770
// 0061478b  c74518ffffffff       mov dword ptr [ebp + 0x18], 0xffffffff
// 00614792  837e2000             cmp dword ptr [esi + 0x20], 0
// 00614796  7513                 jne 0x6147ab
// 00614798  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0061479b  51                   push ecx
// 0061479c  e8d9be0800           call 0x6a067a
// 006147a1  83c404               add esp, 4
// 006147a4  c7462800000000       mov dword ptr [esi + 0x28], 0
// 006147ab  8b4628               mov eax, dword ptr [esi + 0x28]
// 006147ae  85c0                 test eax, eax
// 006147b0  7406                 je 0x6147b8
// 006147b2  80780400             cmp byte ptr [eax + 4], 0
// 006147b6  7524                 jne 0x6147dc
// 006147b8  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006147bb  85c9                 test ecx, ecx
// 006147bd  7407                 je 0x6147c6
// 006147bf  e8acf7ffff           call 0x613f70
// 006147c4  eb0b                 jmp 0x6147d1
// 006147c6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006147c9  85c0                 test eax, eax
// 006147cb  7404                 je 0x6147d1
// 006147cd  c6400801             mov byte ptr [eax + 8], 1
// 006147d1  8b7628               mov esi, dword ptr [esi + 0x28]
// 006147d4  85f6                 test esi, esi
// 006147d6  7404                 je 0x6147dc
// 006147d8  c6460401             mov byte ptr [esi + 4], 1
// 006147dc  5f                   pop edi
// 006147dd  5e                   pop esi
// 006147de  5d                   pop ebp
// 006147df  c20400               ret 4

struct Link;

struct LinkArray {
    Link** data;
    int count;
    int capacity;
    void resize(int count, Link* value);
};

struct Link {
    char reserved[0x14];
    Link* parent;
    int index;
    LinkArray links;
    char* flag28;
    char* flag2c;

    void reset();
    void remove(Link* link);
};

extern "C" void __cdecl release(void* memory);

void Link::remove(Link* link)
{
    int index = link->index;
    LinkArray& array = links;
    Link* last = array.data[array.count - 1];
    array.data[index] = last;
    last->index = index;
    array.resize(array.count - 1, 0);
    link->index = -1;

    if (links.count == 0) {
        release(flag28);
        flag28 = 0;
    }

    if (!flag28 || !flag28[4]) {
        if (parent)
            parent->reset();
        else if (flag2c)
            flag2c[8] = 1;

        if (flag28)
            flag28[4] = 1;
    }
}
