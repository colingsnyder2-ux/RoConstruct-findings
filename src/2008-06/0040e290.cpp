// from server: 100% by king_originala
// roc 2008-06 0040e290  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e290
//
// 0040e290  53                   push ebx
// 0040e291  56                   push esi
// 0040e292  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040e296  8b4604               mov eax, dword ptr [esi + 4]
// 0040e299  57                   push edi
// 0040e29a  8bd9                 mov ebx, ecx
// 0040e29c  3d00010000           cmp eax, 0x100
// 0040e2a1  723c                 jb 0x40e2df
// 0040e2a3  3d09010000           cmp eax, 0x109
// 0040e2a8  7735                 ja 0x40e2df
// 0040e2aa  8b4608               mov eax, dword ptr [esi + 8]
// 0040e2ad  83f80d               cmp eax, 0xd
// 0040e2b0  742d                 je 0x40e2df
// 0040e2b2  83f809               cmp eax, 9
// 0040e2b5  7428                 je 0x40e2df
// 0040e2b7  83f81b               cmp eax, 0x1b
// 0040e2ba  7423                 je 0x40e2df
// 0040e2bc  ff15102e8000         call dword ptr [0x802e10]
// 0040e2c2  50                   push eax
// 0040e2c3  e816292900           call 0x6a0bde
// 0040e2c8  8bf8                 mov edi, eax
// 0040e2ca  85ff                 test edi, edi
// 0040e2cc  7411                 je 0x40e2df
// 0040e2ce  e8ed842900           call 0x6a67c0
// 0040e2d3  50                   push eax
// 0040e2d4  8bcf                 mov ecx, edi
// 0040e2d6  e815292900           call 0x6a0bf0
// 0040e2db  85c0                 test eax, eax
// 0040e2dd  752b                 jne 0x40e30a
// 0040e2df  56                   push esi
// 0040e2e0  8bcb                 mov ecx, ebx
// 0040e2e2  e803292900           call 0x6a0bea
// 0040e2e7  85c0                 test eax, eax
// 0040e2e9  740b                 je 0x40e2f6
// 0040e2eb  5f                   pop edi
// 0040e2ec  5e                   pop esi
// 0040e2ed  b801000000           mov eax, 1
// 0040e2f2  5b                   pop ebx
// 0040e2f3  c20400               ret 4
// 0040e2f6  8b8bf8000000         mov ecx, dword ptr [ebx + 0xf8]
// 0040e2fc  85c9                 test ecx, ecx
// 0040e2fe  740a                 je 0x40e30a
// 0040e300  56                   push esi
// 0040e301  e8da672900           call 0x6a4ae0
// 0040e306  85c0                 test eax, eax
// 0040e308  75e1                 jne 0x40e2eb
// 0040e30a  5f                   pop edi
// 0040e30b  5e                   pop esi
// 0040e30c  33c0                 xor eax, eax
// 0040e30e  5b                   pop ebx
// 0040e30f  c20400               ret 4

struct Message {
    void* window;
    unsigned int message;
    unsigned int wParam;
};

extern "C" void* (__stdcall *GetFocus)();
extern char* GetViewClass();

struct Window {
    static Window* __stdcall FromHandle(void* window);
    int IsKindOf(char* type);
};

struct CommandBars {
    int PreTranslateMessage(Message* message);
};

struct View {
    char reserved[0xF8];
    CommandBars* commandBars;

    int PreTranslateMessage(Message* message);
    int BasePreTranslateMessage(Message* message);
};

int View::PreTranslateMessage(Message* message)
{
    if (message->message >= 0x100 && message->message <= 0x109 &&
        message->wParam != 13 && message->wParam != 9 &&
        message->wParam != 27)
    {
        Window* focused = Window::FromHandle(GetFocus());
        if (focused && focused->IsKindOf(GetViewClass()))
            return 0;
    }

    if (BasePreTranslateMessage(message))
        return 1;

    if (commandBars && commandBars->PreTranslateMessage(message))
        return 1;

    return 0;
}
