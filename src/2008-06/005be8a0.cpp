// from server: 100% by king_originala
// roc 2008-06 005be8a0  unit: RBX::Soundscape::SoundService  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005be8a0
//
// 005be8a0  6aff                 push -1
// 005be8a2  68533f7d00           push 0x7d3f53
// 005be8a7  64a100000000         mov eax, dword ptr fs:[0]
// 005be8ad  50                   push eax
// 005be8ae  64892500000000       mov dword ptr fs:[0], esp
// 005be8b5  83ec24               sub esp, 0x24
// 005be8b8  53                   push ebx
// 005be8b9  56                   push esi
// 005be8ba  33db                 xor ebx, ebx
// 005be8bc  895c2408             mov dword ptr [esp + 8], ebx
// 005be8c0  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005be8c4  57                   push edi
// 005be8c5  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 005be8c9  0fbf07               movsx eax, word ptr [edi]
// 005be8cc  8d4c2444             lea ecx, [esp + 0x44]
// 005be8d0  51                   push ecx
// 005be8d1  56                   push esi
// 005be8d2  895c2440             mov dword ptr [esp + 0x40], ebx
// 005be8d6  8944244c             mov dword ptr [esp + 0x4c], eax
// 005be8da  e811f6ffff           call 0x5bdef0
// 005be8df  83c408               add esp, 8
// 005be8e2  68502e8100           push 0x812e50
// 005be8e7  8bce                 mov ecx, esi
// 005be8e9  895c243c             mov dword ptr [esp + 0x3c], ebx
// 005be8ed  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005be8f5  ff1548248000         call dword ptr [0x802448]
// 005be8fb  0fbf5702             movsx edx, word ptr [edi + 2]
// 005be8ff  8d442410             lea eax, [esp + 0x10]
// 005be903  50                   push eax
// 005be904  8d4c2418             lea ecx, [esp + 0x18]
// 005be908  51                   push ecx
// 005be909  89542418             mov dword ptr [esp + 0x18], edx
// 005be90d  e8def5ffff           call 0x5bdef0
// 005be912  83c408               add esp, 8
// 005be915  50                   push eax
// 005be916  8bce                 mov ecx, esi
// 005be918  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 005be920  ff1550248000         call dword ptr [0x802450]
// 005be926  8d4c2414             lea ecx, [esp + 0x14]
// 005be92a  885c2438             mov byte ptr [esp + 0x38], bl
// 005be92e  ff1568248000         call dword ptr [0x802468]
// 005be934  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005be938  5f                   pop edi
// 005be939  8bc6                 mov eax, esi
// 005be93b  5e                   pop esi
// 005be93c  5b                   pop ebx
// 005be93d  64890d00000000       mov dword ptr fs:[0], ecx
// 005be944  83c430               add esp, 0x30
// 005be947  c3                   ret 

struct String
{
    unsigned char storage[28];

    String(const String&);
    ~String();
    String& operator+=(const char*);
    String& operator+=(const String&);
};

typedef void (__thiscall *StringDestructor)(String*);
typedef String& (__thiscall *StringAppendText)(String*, const char*);
typedef String& (__thiscall *StringAppendString)(String*, const String&);

extern StringDestructor destroyString;
extern StringAppendText appendText;
extern StringAppendString appendString;

inline String::~String()
{
    destroyString(this);
}

inline String& String::operator+=(const char* text)
{
    return appendText(this, text);
}

inline String& String::operator+=(const String& text)
{
    return appendString(this, text);
}

String __cdecl stringFromNumber(const int&);

String __cdecl formatPair(const short* values)
{
    String result = stringFromNumber(static_cast<int>(values[0]));
    result += ", ";
    result += stringFromNumber(static_cast<int>(values[1]));
    return result;
}
