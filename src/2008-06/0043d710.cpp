// from server: 100% by king_originala
// roc 2008-06 0043d710  unit: Vector3Item  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d710
//
// 0043d710  6aff                 push -1
// 0043d712  6809e77c00           push 0x7ce709
// 0043d717  64a100000000         mov eax, dword ptr fs:[0]
// 0043d71d  50                   push eax
// 0043d71e  64892500000000       mov dword ptr fs:[0], esp
// 0043d725  83ec28               sub esp, 0x28
// 0043d728  d9ee                 fldz 
// 0043d72a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0043d72e  d91424               fst dword ptr [esp]
// 0043d731  56                   push esi
// 0043d732  d9542408             fst dword ptr [esp + 8]
// 0043d736  d95c240c             fstp dword ptr [esp + 0xc]
// 0043d73a  ff15e03e8000         call dword ptr [0x803ee0]
// 0043d740  50                   push eax
// 0043d741  8d4c2414             lea ecx, [esp + 0x14]
// 0043d745  ff1558248000         call dword ptr [0x802458]
// 0043d74b  8d442404             lea eax, [esp + 4]
// 0043d74f  50                   push eax
// 0043d750  8d4c2414             lea ecx, [esp + 0x14]
// 0043d754  51                   push ecx
// 0043d755  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0043d75d  e84e141800           call 0x5bebb0
// 0043d762  83c408               add esp, 8
// 0043d765  8d4c2410             lea ecx, [esp + 0x10]
// 0043d769  0fb6f0               movzx esi, al
// 0043d76c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0043d774  ff1568248000         call dword ptr [0x802468]
// 0043d77a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0043d77e  8bc6                 mov eax, esi
// 0043d780  5e                   pop esi
// 0043d781  64890d00000000       mov dword ptr fs:[0], ecx
// 0043d788  83c434               add esp, 0x34
// 0043d78b  c20400               ret 4

struct String;

extern void (__thiscall* constructString)(String*, const char*);
extern void (__thiscall* destroyString)(String*);

struct String {
    char reserved[4];
    union {
        char buffer[16];
        char* pointer;
    } data;
    unsigned int length;
    unsigned int capacity;

    String(const char* text) { constructString(this, text); }
    ~String() { destroyString(this); }
};

struct Vector3 {
    float x;
    float y;
    float z;
};

struct Input;

extern const char* (__thiscall* getText)(Input*);
extern bool __cdecl parseVector(const String&, Vector3&);

int __stdcall readVector(Input* input)
{
    Vector3 value = { 0.0f, 0.0f, 0.0f };
    String text(getText(input));
    return parseVector(text, value);
}
