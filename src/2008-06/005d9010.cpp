// from server: 100% by king_originala
// roc 2008-06 005d9010  unit: RBX::VPartInstance::?$FilteredSelection  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9010
//
// 005d9010  6aff                 push -1
// 005d9012  683a4a7c00           push 0x7c4a3a
// 005d9017  64a100000000         mov eax, dword ptr fs:[0]
// 005d901d  50                   push eax
// 005d901e  64892500000000       mov dword ptr fs:[0], esp
// 005d9025  83ec20               sub esp, 0x20
// 005d9028  53                   push ebx
// 005d9029  33db                 xor ebx, ebx
// 005d902b  56                   push esi
// 005d902c  895c2408             mov dword ptr [esp + 8], ebx
// 005d9030  e8dbfaffff           call 0x5d8b10
// 005d9035  8bf0                 mov esi, eax
// 005d9037  3bf3                 cmp esi, ebx
// 005d9039  742c                 je 0x5d9067
// 005d903b  6884d58300           push 0x83d584
// 005d9040  8d4c2410             lea ecx, [esp + 0x10]
// 005d9044  ff1558248000         call dword ptr [0x802458]
// 005d904a  895c2430             mov dword ptr [esp + 0x30], ebx
// 005d904e  8d44240c             lea eax, [esp + 0xc]
// 005d9052  bb01000000           mov ebx, 1
// 005d9057  50                   push eax
// 005d9058  8bce                 mov ecx, esi
// 005d905a  895c240c             mov dword ptr [esp + 0xc], ebx
// 005d905e  e8ede8f7ff           call 0x557950
// 005d9063  8bf0                 mov esi, eax
// 005d9065  eb02                 jmp 0x5d9069
// 005d9067  33f6                 xor esi, esi
// 005d9069  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005d9071  f6c301               test bl, 1
// 005d9074  740a                 je 0x5d9080
// 005d9076  8d4c240c             lea ecx, [esp + 0xc]
// 005d907a  ff1568248000         call dword ptr [0x802468]
// 005d9080  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d9084  8bc6                 mov eax, esi
// 005d9086  5e                   pop esi
// 005d9087  5b                   pop ebx
// 005d9088  64890d00000000       mov dword ptr fs:[0], ecx
// 005d908f  83c42c               add esp, 0x2c
// 005d9092  c3                   ret 

struct String
{
    char data[28];

    String(const char*);
    ~String();
};

extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);

__forceinline String::String(const char* text)
{
    string_construct(this, text);
}

__forceinline String::~String()
{
    string_destroy(this);
}

struct Part
{
    Part* find(const String&);
};

struct S
{
    Part* f();
};

extern "C" Part* __cdecl sub_005d8b10();

Part* S::f()
{
    Part* p = sub_005d8b10();
    return p ? p->find(String("Right Shoulder")) : 0;
}
