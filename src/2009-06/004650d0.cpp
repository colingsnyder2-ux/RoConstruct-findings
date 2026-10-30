// roc 2009-06 004650d0  unit: CScriptEditor  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004650d0
//
// 004650d0  83ec1c               sub esp, 0x1c
// 004650d3  56                   push esi
// 004650d4  57                   push edi
// 004650d5  e866cfffff           call 0x462040
// 004650da  8bf0                 mov esi, eax
// 004650dc  6a01                 push 1
// 004650de  8bce                 mov ecx, esi
// 004650e0  e81bc5ffff           call 0x461600
// 004650e5  6a01                 push 1
// 004650e7  8bce                 mov ecx, esi
// 004650e9  8bf8                 mov edi, eax
// 004650eb  e840c5ffff           call 0x461630
// 004650f0  3bf8                 cmp edi, eax
// 004650f2  754d                 jne 0x465141
// 004650f4  83ff0c               cmp edi, 0xc
// 004650f7  7e48                 jle 0x465141
// 004650f9  48                   dec eax
// 004650fa  6a01                 push 1
// 004650fc  8d4c240c             lea ecx, [esp + 0xc]
// 00465100  89442410             mov dword ptr [esp + 0x10], eax
// 00465104  8d442418             lea eax, [esp + 0x18]
// 00465108  51                   push ecx
// 00465109  83c7f3               add edi, -0xd
// 0046510c  8bce                 mov ecx, esi
// 0046510e  897c2410             mov dword ptr [esp + 0x10], edi
// 00465112  89442418             mov dword ptr [esp + 0x18], eax
// 00465116  e865c6ffff           call 0x461780
// 0046511b  8d542414             lea edx, [esp + 0x14]
// 0046511f  6844bc8b00           push 0x8bbc44
// 00465124  52                   push edx
// 00465125  ff1584e88900         call dword ptr [0x89e884]
// 0046512b  83c408               add esp, 8
// 0046512e  85c0                 test eax, eax
// 00465130  750f                 jne 0x465141
// 00465132  6a01                 push 1
// 00465134  6820bc8b00           push 0x8bbc20
// 00465139  50                   push eax
// 0046513a  8bce                 mov ecx, esi
// 0046513c  e8efc3ffff           call 0x461530
// 00465141  5f                   pop edi
// 00465142  5e                   pop esi
// 00465143  83c41c               add esp, 0x1c
// 00465146  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000000@CScriptEditor@@QAEXH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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