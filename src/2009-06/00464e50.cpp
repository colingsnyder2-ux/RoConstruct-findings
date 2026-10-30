// roc 2009-06 00464e50  unit: CScriptEditor  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464e50
//
// 00464e50  6aff                 push -1
// 00464e52  6839068500           push 0x850639
// 00464e57  64a100000000         mov eax, dword ptr fs:[0]
// 00464e5d  50                   push eax
// 00464e5e  64892500000000       mov dword ptr fs:[0], esp
// 00464e65  51                   push ecx
// 00464e66  56                   push esi
// 00464e67  8bf1                 mov esi, ecx
// 00464e69  57                   push edi
// 00464e6a  8d4c2408             lea ecx, [esp + 8]
// 00464e6e  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00464e74  6a01                 push 1
// 00464e76  8bce                 mov ecx, esi
// 00464e78  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00464e80  e8bbd1ffff           call 0x462040
// 00464e85  8bc8                 mov ecx, eax
// 00464e87  e8f4ccffff           call 0x461b80
// 00464e8c  85c0                 test eax, eax
// 00464e8e  740f                 je 0x464e9f
// 00464e90  6804e70000           push 0xe704
// 00464e95  8d4c240c             lea ecx, [esp + 0xc]
// 00464e99  ff15fcf38900         call dword ptr [0x89f3fc]
// 00464e9f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00464ea3  8b3e                 mov edi, dword ptr [esi]
// 00464ea5  8d4c2408             lea ecx, [esp + 8]
// 00464ea9  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00464eaf  50                   push eax
// 00464eb0  8b470c               mov eax, dword ptr [edi + 0xc]
// 00464eb3  8bce                 mov ecx, esi
// 00464eb5  ffd0                 call eax
// 00464eb7  8d4c2408             lea ecx, [esp + 8]
// 00464ebb  ff1510fd8900         call dword ptr [0x89fd10]
// 00464ec1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00464ec5  5f                   pop edi
// 00464ec6  5e                   pop esi
// 00464ec7  64890d00000000       mov dword ptr fs:[0], ecx
// 00464ece  83c410               add esp, 0x10
// 00464ed1  c20400               ret 4
// copied from an identical function in another client (function ?update@CScriptEditor@@QAEXPAUCommand@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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