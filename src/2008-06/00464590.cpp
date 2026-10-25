// from server: 100% by king_originala
// roc 2008-06 00464590  unit: CScriptEditor  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464590
//
// 00464590  83ec20               sub esp, 0x20
// 00464593  56                   push esi
// 00464594  e837ceffff           call 0x4613d0
// 00464599  8bf0                 mov esi, eax
// 0046459b  ff15102e8000         call dword ptr [0x802e10]
// 004645a1  50                   push eax
// 004645a2  e837c62300           call 0x6a0bde
// 004645a7  85c0                 test eax, eax
// 004645a9  0f84b3000000         je 0x464662
// 004645af  8b4020               mov eax, dword ptr [eax + 0x20]
// 004645b2  85f6                 test esi, esi
// 004645b4  7504                 jne 0x4645ba
// 004645b6  33c9                 xor ecx, ecx
// 004645b8  eb03                 jmp 0x4645bd
// 004645ba  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004645bd  3bc1                 cmp eax, ecx
// 004645bf  0f859d000000         jne 0x464662
// 004645c5  57                   push edi
// 004645c6  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004645ca  8b470c               mov eax, dword ptr [edi + 0xc]
// 004645cd  83e807               sub eax, 7
// 004645d0  8944242c             mov dword ptr [esp + 0x2c], eax
// 004645d4  85c0                 test eax, eax
// 004645d6  c744240800000000     mov dword ptr [esp + 8], 0
// 004645de  8d44242c             lea eax, [esp + 0x2c]
// 004645e2  7f04                 jg 0x4645e8
// 004645e4  8d442408             lea eax, [esp + 8]
// 004645e8  8b00                 mov eax, dword ptr [eax]
// 004645ea  6a01                 push 1
// 004645ec  8bce                 mov ecx, esi
// 004645ee  89442410             mov dword ptr [esp + 0x10], eax
// 004645f2  e8f9baffff           call 0x4600f0
// 004645f7  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004645fa  83c107               add ecx, 7
// 004645fd  8944242c             mov dword ptr [esp + 0x2c], eax
// 00464601  3bc1                 cmp eax, ecx
// 00464603  894c2408             mov dword ptr [esp + 8], ecx
// 00464607  8d44242c             lea eax, [esp + 0x2c]
// 0046460b  7c04                 jl 0x464611
// 0046460d  8d442408             lea eax, [esp + 8]
// 00464611  8b08                 mov ecx, dword ptr [eax]
// 00464613  6a01                 push 1
// 00464615  8d442410             lea eax, [esp + 0x10]
// 00464619  894c2414             mov dword ptr [esp + 0x14], ecx
// 0046461d  8d54241c             lea edx, [esp + 0x1c]
// 00464621  50                   push eax
// 00464622  8bce                 mov ecx, esi
// 00464624  8954241c             mov dword ptr [esp + 0x1c], edx
// 00464628  e8e3c4ffff           call 0x460b10
// 0046462d  8d4c2418             lea ecx, [esp + 0x18]
// 00464631  51                   push ecx
// 00464632  ff152c268000         call dword ptr [0x80262c]
// 00464638  8d54241c             lea edx, [esp + 0x1c]
// 0046463c  68a0b28100           push 0x81b2a0
// 00464641  52                   push edx
// 00464642  ff1504288000         call dword ptr [0x802804]
// 00464648  83c40c               add esp, 0xc
// 0046464b  85c0                 test eax, eax
// 0046464d  7412                 je 0x464661
// 0046464f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00464652  6a01                 push 1
// 00464654  6894b28100           push 0x81b294
// 00464659  50                   push eax
// 0046465a  8bce                 mov ecx, esi
// 0046465c  e8cfc9ffff           call 0x461030
// 00464661  5f                   pop edi
// 00464662  5e                   pop esi
// 00464663  83c420               add esp, 0x20
// 00464666  c20400               ret 4

struct TextRange {
    int first;
    int last;
    char* text;
};

struct Control {
    char padding[32];
    void* window;
    int length(int direct);
    int getText(TextRange* range, int direct);
    void insertText(int position, const char* text, int direct);
};

struct Event {
    char padding[12];
    int position;
};

struct CScriptEditor {
    int* control();
    void f(Event* event);
};

extern "C" {
    extern void* (__stdcall *GetFocus)();
    extern char* (__cdecl *_strupr)(char*);
    extern char* (__cdecl *strstr)(const char*, const char*);
}

extern Control* __stdcall fromHandle(void* window);
extern const char authorText[];
extern const char replacementText[];

template<class T>
const T& minimum(const T& a, const T& b)
{
    return a < b ? a : b;
}

template<class T>
const T& maximum(const T& a, const T& b)
{
    return a > b ? a : b;
}

void CScriptEditor::f(Event* event)
{
    Control* editor = reinterpret_cast<Control*>(control());
    Control* focused = fromHandle(GetFocus());
    if (!focused)
        return;

    void* focusedWindow = focused->window;
    void* editorWindow;
    if (!editor)
        editorWindow = 0;
    else
        editorWindow = editor->window;

    if (focusedWindow == editorWindow) {
        char text[16];
        TextRange range;
        range.first = maximum(event->position - 7, 0);
        int length = editor->length(1);
        range.last = minimum(length, event->position + 7);
        range.text = text;
        editor->getText(&range, 1);
        _strupr(text);
        if (strstr(text, authorText))
            editor->insertText(event->position, replacementText, 1);
    }
}
