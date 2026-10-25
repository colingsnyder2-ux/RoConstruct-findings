// from server: 100% by king_originala
// roc 2008-06 00464460  unit: CScriptEditor  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464460
//
// 00464460  83ec1c               sub esp, 0x1c
// 00464463  56                   push esi
// 00464464  57                   push edi
// 00464465  e866cfffff           call 0x4613d0
// 0046446a  8bf0                 mov esi, eax
// 0046446c  6a01                 push 1
// 0046446e  8bce                 mov ecx, esi
// 00464470  e81bc5ffff           call 0x460990
// 00464475  6a01                 push 1
// 00464477  8bce                 mov ecx, esi
// 00464479  8bf8                 mov edi, eax
// 0046447b  e840c5ffff           call 0x4609c0
// 00464480  3bf8                 cmp edi, eax
// 00464482  754d                 jne 0x4644d1
// 00464484  83ff0c               cmp edi, 0xc
// 00464487  7e48                 jle 0x4644d1
// 00464489  48                   dec eax
// 0046448a  6a01                 push 1
// 0046448c  8d4c240c             lea ecx, [esp + 0xc]
// 00464490  89442410             mov dword ptr [esp + 0x10], eax
// 00464494  8d442418             lea eax, [esp + 0x18]
// 00464498  51                   push ecx
// 00464499  83c7f3               add edi, -0xd
// 0046449c  8bce                 mov ecx, esi
// 0046449e  897c2410             mov dword ptr [esp + 0x10], edi
// 004644a2  89442418             mov dword ptr [esp + 0x18], eax
// 004644a6  e865c6ffff           call 0x460b10
// 004644ab  8d542414             lea edx, [esp + 0x14]
// 004644af  6884b28100           push 0x81b284
// 004644b4  52                   push edx
// 004644b5  ff1528268000         call dword ptr [0x802628]
// 004644bb  83c408               add esp, 8
// 004644be  85c0                 test eax, eax
// 004644c0  750f                 jne 0x4644d1
// 004644c2  6a01                 push 1
// 004644c4  6860b28100           push 0x81b260
// 004644c9  50                   push eax
// 004644ca  8bce                 mov ecx, esi
// 004644cc  e8efc3ffff           call 0x4608c0
// 004644d1  5f                   pop edi
// 004644d2  5e                   pop esi
// 004644d3  83c41c               add esp, 0x1c
// 004644d6  c20400               ret 4

extern "C" int (__cdecl* _stricmp)(const char*, const char*);
extern const char comparisonText[];
extern const char replacementText[];

struct TextRange
{
    int start;
    int end;
    char* text;
};

struct Control
{
    int selectionStart(int direct);
    int selectionEnd(int direct);
    int getTextRange(TextRange* range, int direct);
    int replaceSelection(int unused, const char* text, int direct);
};

struct CScriptEditor
{
    Control* getControl();
    void func_00464460(int unused);
};

void CScriptEditor::func_00464460(int unused)
{
    Control* control = getControl();
    int start = control->selectionStart(1);
    int end = control->selectionEnd(1);

    if (start == end && start > 12)
    {
        TextRange range;
        char text[16];

        range.end = end - 1;
        range.start = start - 13;
        range.text = text;
        control->getTextRange(&range, 1);

        if (_stricmp(text, comparisonText) == 0)
            control->replaceSelection(0, replacementText, 1);
    }
}
