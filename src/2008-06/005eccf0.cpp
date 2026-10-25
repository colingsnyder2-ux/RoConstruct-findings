// from server: 100% by king_originala
// roc 2008-06 005eccf0  unit: RBX::Controller::W4InputType::?$holder  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eccf0
//
// 005eccf0  64a100000000         mov eax, dword ptr fs:[0]
// 005eccf6  6aff                 push -1
// 005eccf8  682e707d00           push 0x7d702e
// 005eccfd  50                   push eax
// 005eccfe  b801000000           mov eax, 1
// 005ecd03  64892500000000       mov dword ptr fs:[0], esp
// 005ecd0a  840538af9700         test byte ptr [0x97af38], al
// 005ecd10  7534                 jne 0x5ecd46
// 005ecd12  090538af9700         or dword ptr [0x97af38], eax
// 005ecd18  6808fd8300           push 0x83fd08
// 005ecd1d  68c05e9500           push 0x955ec0
// 005ecd22  6800fd8300           push 0x83fd00
// 005ecd27  b928af9700           mov ecx, 0x97af28
// 005ecd2c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ecd34  e867cae9ff           call 0x4897a0
// 005ecd39  6880fb7f00           push 0x7ffb80
// 005ecd3e  e86c4a0b00           call 0x6a17af
// 005ecd43  83c404               add esp, 4
// 005ecd46  8b0c24               mov ecx, dword ptr [esp]
// 005ecd49  b828af9700           mov eax, 0x97af28
// 005ecd4e  64890d00000000       mov dword ptr fs:[0], ecx
// 005ecd55  83c40c               add esp, 0xc
// 005ecd58  c3                   ret 

extern const char G1[];
extern const char G2[];
extern const char G3[];

struct S
{
    char storage[16];
    S(const char*, const char*, const char*);
    ~S();
};

S* func_005eccf0()
{
    static S instance(G1, G2, G3);
    return &instance;
}
