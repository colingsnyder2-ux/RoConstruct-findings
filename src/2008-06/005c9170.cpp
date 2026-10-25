// from server: 100% by king_originala
// roc 2008-06 005c9170  unit: RBX::LaserTool  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9170
//
// 005c9170  56                   push esi
// 005c9171  57                   push edi
// 005c9172  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005c9176  803f00               cmp byte ptr [edi], 0
// 005c9179  8bf1                 mov esi, ecx
// 005c917b  b894ba8100           mov eax, 0x81ba94
// 005c9180  7505                 jne 0x5c9187
// 005c9182  b81ce28100           mov eax, 0x81e21c
// 005c9187  50                   push eax
// 005c9188  8d8e38010000         lea ecx, [esi + 0x138]
// 005c918e  ff154c248000         call dword ptr [0x80244c]
// 005c9194  33c0                 xor eax, eax
// 005c9196  3807                 cmp byte ptr [edi], al
// 005c9198  5f                   pop edi
// 005c9199  0f95c0               setne al
// 005c919c  89442408             mov dword ptr [esp + 8], eax
// 005c91a0  db442408             fild dword ptr [esp + 8]
// 005c91a4  dd9e30010000         fstp qword ptr [esi + 0x130]
// 005c91aa  5e                   pop esi
// 005c91ab  c20400               ret 4

struct String {
    char storage[28];
};

extern String& (__thiscall *assignString)(String*, const char*);
extern const char trueText[];
extern const char falseText[];

struct LaserTool {
    char padding[0x130];
    double value;
    String text;

    void setValue(const bool* state);
};

void LaserTool::setValue(const bool* state)
{
    assignString(&text, *state ? trueText : falseText);
    value = static_cast<int>(*state != 0);
}
