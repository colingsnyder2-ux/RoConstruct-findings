// from server: 100% by king_originala
// roc 2008-06 00465ae0  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465ae0
//
// 00465ae0  56                   push esi
// 00465ae1  6a00                 push 0
// 00465ae3  6a00                 push 0
// 00465ae5  68007f0000           push 0x7f00
// 00465aea  6a00                 push 0
// 00465aec  8bf1                 mov esi, ecx
// 00465aee  ff15d02d8000         call dword ptr [0x802dd0]
// 00465af4  50                   push eax
// 00465af5  6a08                 push 8
// 00465af7  e890b42300           call 0x6a0f8c
// 00465afc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00465b00  81492000000006       or dword ptr [ecx + 0x20], 0x6000000
// 00465b07  894128               mov dword ptr [ecx + 0x28], eax
// 00465b0a  51                   push ecx
// 00465b0b  8bce                 mov ecx, esi
// 00465b0d  e8eeb52300           call 0x6a1100
// 00465b12  5e                   pop esi
// 00465b13  c20400               ret 4

extern "C" void *(__stdcall *LoadCursorA)(void *, const char *);
extern const char *__stdcall RegisterWindowClass(
    unsigned int, void *, void *, void *);

struct CreateInfo {
    char reserved[0x20];
    unsigned int style;
    const char *name;
    const char *className;
};

struct S {
    int BasePreCreateWindow(CreateInfo *);
    int PreCreateWindow(CreateInfo *);
};

int S::PreCreateWindow(CreateInfo *info)
{
    const char *className = RegisterWindowClass(
        8, LoadCursorA(0, (const char *)0x7f00), 0, 0);
    info->style |= 0x06000000;
    info->className = className;
    return BasePreCreateWindow(info);
}
