// from server: 100% by king_originala
// roc 2008-06 005a0030  unit: RBX::SpecialShape  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0030
//
// 005a0030  53                   push ebx
// 005a0031  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005a0035  56                   push esi
// 005a0036  57                   push edi
// 005a0037  8bf1                 mov esi, ecx
// 005a0039  8dbe40010000         lea edi, [esi + 0x140]
// 005a003f  53                   push ebx
// 005a0040  57                   push edi
// 005a0041  e81abdfbff           call 0x55bd60
// 005a0046  83c408               add esp, 8
// 005a0049  84c0                 test al, al
// 005a004b  743a                 je 0x5a0087
// 005a004d  53                   push ebx
// 005a004e  8bcf                 mov ecx, edi
// 005a0050  ff150c248000         call dword ptr [0x80240c]
// 005a0056  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005a0059  6804689700           push 0x976804
// 005a005e  8bce                 mov ecx, esi
// 005a0060  89471c               mov dword ptr [edi + 0x1c], eax
// 005a0063  e898dae6ff           call 0x40db00
// 005a0068  b805000000           mov eax, 5
// 005a006d  398630010000         cmp dword ptr [esi + 0x130], eax
// 005a0073  7412                 je 0x5a0087
// 005a0075  6858689700           push 0x976858
// 005a007a  8bce                 mov ecx, esi
// 005a007c  898630010000         mov dword ptr [esi + 0x130], eax
// 005a0082  e879dae6ff           call 0x40db00
// 005a0087  5f                   pop edi
// 005a0088  5e                   pop esi
// 005a0089  5b                   pop ebx
// 005a008a  c20400               ret 4

struct Value {
    unsigned char data[28];
    unsigned long extra;

    Value &operator=(const Value &);
};

extern bool __cdecl different(const Value *, const Value *);
extern Value &(__thiscall *assignString)(Value *, const Value *);
extern int valueProperty;
extern int shapeProperty;

inline Value &Value::operator=(const Value &v)
{
    assignString(this, &v);
    extra = v.extra;
    return *this;
}

struct S {
    unsigned char padding[0x130];
    int shape;
    unsigned char gap[12];
    Value value;

    void notify(const void *);
    void setValue(const Value &);
};

void S::setValue(const Value &v)
{
    if (different(&value, &v)) {
        value = v;
        notify(&valueProperty);
        if (shape != 5) {
            shape = 5;
            notify(&shapeProperty);
        }
    }
}
