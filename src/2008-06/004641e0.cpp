// from server: 100% by colin
// roc 2008-06 004641e0  unit: CScriptEditor  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004641e0
//
// 004641e0  6aff                 push -1
// 004641e2  68c9107c00           push 0x7c10c9
// 004641e7  64a100000000         mov eax, dword ptr fs:[0]
// 004641ed  50                   push eax
// 004641ee  64892500000000       mov dword ptr fs:[0], esp
// 004641f5  51                   push ecx
// 004641f6  56                   push esi
// 004641f7  8bf1                 mov esi, ecx
// 004641f9  57                   push edi
// 004641fa  8d4c2408             lea ecx, [esp + 8]
// 004641fe  ff15043f8000         call dword ptr [0x803f04]
// 00464204  6a01                 push 1
// 00464206  8bce                 mov ecx, esi
// 00464208  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00464210  e8bbd1ffff           call 0x4613d0
// 00464215  8bc8                 mov ecx, eax
// 00464217  e8f4ccffff           call 0x460f10
// 0046421c  85c0                 test eax, eax
// 0046421e  740f                 je 0x46422f
// 00464220  6804e70000           push 0xe704
// 00464225  8d4c240c             lea ecx, [esp + 0xc]
// 00464229  ff15c0328000         call dword ptr [0x8032c0]
// 0046422f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00464233  8b3e                 mov edi, dword ptr [esi]
// 00464235  8d4c2408             lea ecx, [esp + 8]
// 00464239  ff15e03e8000         call dword ptr [0x803ee0]
// 0046423f  50                   push eax
// 00464240  8b470c               mov eax, dword ptr [edi + 0xc]
// 00464243  8bce                 mov ecx, esi
// 00464245  ffd0                 call eax
// 00464247  8d4c2408             lea ecx, [esp + 8]
// 0046424b  ff15143f8000         call dword ptr [0x803f14]
// 00464251  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00464255  5f                   pop edi
// 00464256  5e                   pop esi
// 00464257  64890d00000000       mov dword ptr fs:[0], ecx
// 0046425e  83c410               add esp, 0x10
// 00464261  c20400               ret 4

struct Text;

extern const char* (__thiscall *textData)(const Text*);

struct Text {
    char* data;
    __declspec(dllimport) Text();
    __declspec(dllimport) ~Text() throw();
    __declspec(dllimport) int load(unsigned int);
    operator const char*() const;
};







inline Text::operator const char*() const
{
    return textData(this);
}

struct Command {
    virtual void enable(int);
    virtual void check(int);
    virtual void radio(int);
    virtual void setText(const char*);
};

struct Control {
    int query(int);
};

struct CScriptEditor {
    int* f();
    void update(Command*);
};

void CScriptEditor::update(Command* command)
{
    Text text;
    if (reinterpret_cast<Control*>(f())->query(1))
        text.load(0xe704);

    typedef void (__thiscall *SetText)(Command*, const char*);
    SetText* table = *reinterpret_cast<SetText**>(command);
    const char* value = text;
    table[3](command, value);
}
