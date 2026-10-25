// from server: 100% by king_originala
// roc 2008-06 00423240  unit: CRobloxTreeCtrl  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00423240
//
// 00423240  8b442408             mov eax, dword ptr [esp + 8]
// 00423244  57                   push edi
// 00423245  8bf9                 mov edi, ecx
// 00423247  c70000000000         mov dword ptr [eax], 0
// 0042324d  80bfe100000000       cmp byte ptr [edi + 0xe1], 0
// 00423254  7544                 jne 0x42329a
// 00423256  80bfb800000000       cmp byte ptr [edi + 0xb8], 0
// 0042325d  753b                 jne 0x42329a
// 0042325f  83bf2401000000       cmp dword ptr [edi + 0x124], 0
// 00423266  7432                 je 0x42329a
// 00423268  56                   push esi
// 00423269  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042326d  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00423271  740d                 je 0x423280
// 00423273  6a01                 push 1
// 00423275  8d4e38               lea ecx, [esi + 0x38]
// 00423278  51                   push ecx
// 00423279  8bcf                 mov ecx, edi
// 0042327b  e870feffff           call 0x4230f0
// 00423280  837e1400             cmp dword ptr [esi + 0x14], 0
// 00423284  7413                 je 0x423299
// 00423286  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0042328a  740d                 je 0x423299
// 0042328c  6a00                 push 0
// 0042328e  83c610               add esi, 0x10
// 00423291  56                   push esi
// 00423292  8bcf                 mov ecx, edi
// 00423294  e857feffff           call 0x4230f0
// 00423299  5e                   pop esi
// 0042329a  5f                   pop edi
// 0042329b  c20800               ret 8

struct Pair {
    int first;
    int second;
};

struct Event {
    char reserved0[0x0c];
    int enabled;
    Pair primary;
    char reserved1[0x20];
    Pair secondary;
};

struct CRobloxTreeCtrl {
    char reserved0[0xb8];
    unsigned char flagB8;
    char reserved1[0x28];
    unsigned char flagE1;
    char reserved2[0x42];
    int active;

    void process(Pair* value, int mode);
    void handle(Event* event, int* result);
};

void CRobloxTreeCtrl::handle(Event* event, int* result)
{
    *result = 0;
    if (!flagE1 && !flagB8 && active) {
        if (event->secondary.second)
            process(&event->secondary, 1);
        if (event->primary.second && event->enabled)
            process(&event->primary, 0);
    }
}
