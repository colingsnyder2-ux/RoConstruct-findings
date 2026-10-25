// from server: 87% by colin
// roc 2008-06 00427480  unit: CSelectionTreeCtrl  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427480
//
// 00427480  55                   push ebp
// 00427481  8bec                 mov ebp, esp
// 00427483  6aff                 push -1
// 00427485  6886ef7b00           push 0x7bef86
// 0042748a  64a100000000         mov eax, dword ptr fs:[0]
// 00427490  50                   push eax
// 00427491  64892500000000       mov dword ptr fs:[0], esp
// 00427498  83ec78               sub esp, 0x78
// 0042749b  53                   push ebx
// 0042749c  56                   push esi
// 0042749d  57                   push edi
// 0042749e  8965f0               mov dword ptr [ebp - 0x10], esp
// 004274a1  33ff                 xor edi, edi
// 004274a3  897dfc               mov dword ptr [ebp - 4], edi
// 004274a6  8d4db4               lea ecx, [ebp - 0x4c]
// 004274a9  c745ec05000000       mov dword ptr [ebp - 0x14], 5
// 004274b0  c645fc01             mov byte ptr [ebp - 4], 1
// 004274b4  ff1560248000         call dword ptr [0x802460]
// 004274ba  8d4508               lea eax, [ebp + 8]
// 004274bd  b302                 mov bl, 2
// 004274bf  50                   push eax
// 004274c0  8d8d7cffffff         lea ecx, [ebp - 0x84]
// 004274c6  885dfc               mov byte ptr [ebp - 4], bl
// 004274c9  ff155c248000         call dword ptr [0x80245c]
// 004274cf  8d4d98               lea ecx, [ebp - 0x68]
// 004274d2  c645fc03             mov byte ptr [ebp - 4], 3
// 004274d6  ff1560248000         call dword ptr [0x802460]
// 004274dc  8d4db4               lea ecx, [ebp - 0x4c]
// 004274df  51                   push ecx
// 004274e0  8d8d7cffffff         lea ecx, [ebp - 0x84]
// 004274e6  c645fc04             mov byte ptr [ebp - 4], 4
// 004274ea  e8f1251400           call 0x569ae0
// 004274ef  8d4d98               lea ecx, [ebp - 0x68]
// 004274f2  c645fc05             mov byte ptr [ebp - 4], 5
// 004274f6  ff1568248000         call dword ptr [0x802468]
// 004274fc  8d8d7cffffff         lea ecx, [ebp - 0x84]
// 00427502  885dfc               mov byte ptr [ebp - 4], bl
// 00427505  ff1568248000         call dword ptr [0x802468]
// 0042750b  8d4db4               lea ecx, [ebp - 0x4c]
// 0042750e  ff1564248000         call dword ptr [0x802464]
// 00427514  50                   push eax
// 00427515  ff1568288000         call dword ptr [0x802868]
// 0042751b  8bf0                 mov esi, eax
// 0042751d  83c404               add esp, 4
// 00427520  8d4db4               lea ecx, [ebp - 0x4c]
// 00427523  8975ec               mov dword ptr [ebp - 0x14], esi
// 00427526  c645fc01             mov byte ptr [ebp - 4], 1
// 0042752a  ff1568248000         call dword ptr [0x802468]
// 00427530  897dfc               mov dword ptr [ebp - 4], edi
// 00427533  eb77                 jmp 0x4275ac
// 00427535  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00427538  8b11                 mov edx, dword ptr [ecx]
// 0042753a  8b4204               mov eax, dword ptr [edx + 4]
// 0042753d  ffd0                 call eax
// 0042753f  50                   push eax
// 00427540  8d4d08               lea ecx, [ebp + 8]
// 00427543  ff1564248000         call dword ptr [0x802464]
// 00427549  50                   push eax
// 0042754a  8d4db4               lea ecx, [ebp - 0x4c]
// 0042754d  68cc028100           push 0x8102cc
// 00427552  51                   push ecx
// 00427553  e8b8250e00           call 0x509b10
// 00427558  8d55e4               lea edx, [ebp - 0x1c]
// 0042755b  b307                 mov bl, 7
// 0042755d  52                   push edx
// 0042755e  885dfc               mov byte ptr [ebp - 4], bl
// 00427561  e8ba201400           call 0x569620
// 00427566  83c414               add esp, 0x14
// 00427569  8b30                 mov esi, dword ptr [eax]
// 0042756b  8d4db4               lea ecx, [ebp - 0x4c]
// 0042756e  c645fc08             mov byte ptr [ebp - 4], 8
// 00427572  ff1564248000         call dword ptr [0x802464]
// 00427578  50                   push eax
// 00427579  6a02                 push 2
// 0042757b  56                   push esi
// 0042757c  e81f1e1400           call 0x5693a0
// 00427581  83c40c               add esp, 0xc
// 00427584  8d4de4               lea ecx, [ebp - 0x1c]
// 00427587  885dfc               mov byte ptr [ebp - 4], bl
// 0042758a  e8d1901d00           call 0x600660
// 0042758f  8d4db4               lea ecx, [ebp - 0x4c]
// 00427592  c645fc06             mov byte ptr [ebp - 4], 6
// 00427596  ff1568248000         call dword ptr [0x802468]
// 0042759c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004275a3  b8a9754200           mov eax, 0x4275a9
// 004275a8  c3                   ret 
// 004275a9  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004275ac  85f6                 test esi, esi
// 004275ae  7f07                 jg 0x4275b7
// 004275b0  be01000000           mov esi, 1
// 004275b5  eb14                 jmp 0x4275cb
// 004275b7  83fe1e               cmp esi, 0x1e
// 004275ba  c745e81e000000       mov dword ptr [ebp - 0x18], 0x1e
// 004275c1  8d45e8               lea eax, [ebp - 0x18]
// 004275c4  7f03                 jg 0x4275c9
// 004275c6  8d45ec               lea eax, [ebp - 0x14]
// 004275c9  8b30                 mov esi, dword ptr [eax]
// 004275cb  8d45d0               lea eax, [ebp - 0x30]
// 004275ce  6a01                 push 1
// 004275d0  50                   push eax
// 004275d1  e86af51700           call 0x5a6b40
// 004275d6  8bc6                 mov eax, esi
// 004275d8  c1e004               shl eax, 4
// 004275db  2bc6                 sub eax, esi
// 004275dd  03c0                 add eax, eax
// 004275df  03c0                 add eax, eax
// 004275e1  99                   cdq 
// 004275e2  0145d0               add dword ptr [ebp - 0x30], eax
// 004275e5  8d4dd0               lea ecx, [ebp - 0x30]
// 004275e8  51                   push ecx
// 004275e9  1155d4               adc dword ptr [ebp - 0x2c], edx
// 004275ec  e87ff21700           call 0x5a6870
// 004275f1  83c40c               add esp, 0xc
// 004275f4  8d4d08               lea ecx, [ebp + 8]
// 004275f7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004275fe  ff1568248000         call dword ptr [0x802468]
// 00427604  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00427607  5f                   pop edi
// 00427608  5e                   pop esi
// 00427609  b801000000           mov eax, 1
// 0042760e  64890d00000000       mov dword ptr fs:[0], ecx
// 00427615  5b                   pop ebx
// 00427616  8be5                 mov esp, ebp
// 00427618  5d                   pop ebp
// 00427619  c3                   ret 

// 00427480 rewrite v4: king's Parser{first,second} inlined ctor/dtor + minimum() + tail.
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD

extern void (__thiscall *string_construct)(void*);
extern void (__thiscall *string_copy)(void*, const void*);
extern void (__thiscall *string_destroy)(void*);
extern const char* (__thiscall *string_c_str)(const void*);
extern int (__cdecl *convert_integer)(const char*);

struct String
{
    char storage[28];

    String();
    String(const String&);
    ~String();
    const char* c_str() const;
};

__forceinline String::String()
{
    string_construct(this);
}

__forceinline String::String(const String& other)
{
    string_copy(this, &other);
}

__forceinline String::~String()
{
    string_destroy(this);
}

__forceinline const char* String::c_str() const
{
    return string_c_str(this);
}

struct Parser
{
    String first;
    String second;

    Parser(const String&);
    ~Parser();
    void parse(String&);           // 0x569ae0 direct __thiscall
};

__forceinline Parser::Parser(const String& src)
    : first(src), second()
{
}

__forceinline Parser::~Parser()
{
}

template <typename T>
const T& minimum(const T& a, const T& b)
{
    return b < a ? b : a;
}

struct Except
{
    virtual void slot0();
    virtual int code();
};

struct Tmp
{
    char storage[0xc];
    ~Tmp();                            // 0x600660 direct __thiscall
};

extern const char fmt_lit[];           // 0x8102cc
extern String __cdecl make_format(const char* fmt, const char* a, int b);   // 0x509b10 sret
extern void* __cdecl tmp_lookup(Tmp* self);                                  // 0x569620
extern void __cdecl log_event(int v, int kind, const char* text);            // 0x5693a0
extern void __cdecl query_counter(__int64* out, int flag);                   // 0x5a6b40
extern void __cdecl submit_counter(__int64* acc);                            // 0x5a6870

int __cdecl function_00427480(String input)
{
    int result = 5;
    try
    {
        String output;
        {
            Parser parser(input);
            parser.parse(output);
        }
        result = convert_integer(output.c_str());
    }
    catch (Except* e)
    {
        String msg = make_format(fmt_lit, input.c_str(), e->code());
        Tmp tmp;
        int v = *(int*)tmp_lookup(&tmp);
        log_event(v, 2, msg.c_str());
    }
    result = result <= 0 ? 1 : minimum(result, 30);
    __int64 acc;
    query_counter(&acc, 1);
    acc += (__int64)(result * 60);
    submit_counter(&acc);
    return 1;
}
