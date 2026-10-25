// from server: 100% by king_originala
// roc 2008-06 0059ffd0  unit: RBX::SpecialShape  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ffd0
//
// 0059ffd0  53                   push ebx
// 0059ffd1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0059ffd5  56                   push esi
// 0059ffd6  57                   push edi
// 0059ffd7  8bf1                 mov esi, ecx
// 0059ffd9  8dbe60010000         lea edi, [esi + 0x160]
// 0059ffdf  53                   push ebx
// 0059ffe0  57                   push edi
// 0059ffe1  e87abdfbff           call 0x55bd60
// 0059ffe6  83c408               add esp, 8
// 0059ffe9  84c0                 test al, al
// 0059ffeb  743a                 je 0x5a0027
// 0059ffed  53                   push ebx
// 0059ffee  8bcf                 mov ecx, edi
// 0059fff0  ff150c248000         call dword ptr [0x80240c]
// 0059fff6  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0059fff9  6820689700           push 0x976820
// 0059fffe  8bce                 mov ecx, esi
// 005a0000  89471c               mov dword ptr [edi + 0x1c], eax
// 005a0003  e8f8dae6ff           call 0x40db00
// 005a0008  b805000000           mov eax, 5
// 005a000d  398630010000         cmp dword ptr [esi + 0x130], eax
// 005a0013  7412                 je 0x5a0027
// 005a0015  6858689700           push 0x976858
// 005a001a  8bce                 mov ecx, esi
// 005a001c  898630010000         mov dword ptr [esi + 0x130], eax
// 005a0022  e8d9dae6ff           call 0x40db00
// 005a0027  5f                   pop edi
// 005a0028  5e                   pop esi
// 005a0029  5b                   pop ebx
// 005a002a  c20400               ret 4

struct String {
    unsigned char data[28];
};

struct Value {
    String text;
    unsigned long extra;
};

extern bool __cdecl differs(const Value *, const Value *);
extern String & (__thiscall *assignString)(String *, const String &);

extern const char valueProperty[];
extern const char kindProperty[];

struct S {
    unsigned char padding0[0x130];
    int kind;
    unsigned char padding1[0x2C];
    Value value;

    void changed(const void *);
    void setValue(const Value *);
};

void S::setValue(const Value *source)
{
    Value *destination = &value;
    if (differs(destination, source)) {
        assignString(&destination->text, source->text);
        destination->extra = source->extra;
        changed(valueProperty);
        if (kind != 5) {
            kind = 5;
            changed(kindProperty);
        }
    }
}
