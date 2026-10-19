// from server: 87% by colin
// from server: 84% by king_originala
// roc 2008-06 004a3290  unit: RBX::Network::Server::ClientProxy  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3290
//
// 004a3290  83ec08               sub esp, 8
// 004a3293  56                   push esi
// 004a3294  57                   push edi
// 004a3295  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a3299  6a00                 push 0
// 004a329b  68c8e19200           push 0x92e1c8
// 004a32a0  687c909200           push 0x92907c
// 004a32a5  6a00                 push 0
// 004a32a7  57                   push edi
// 004a32a8  8bf1                 mov esi, ecx
// 004a32aa  e817e51f00           call 0x6a17c6
// 004a32af  83c414               add esp, 0x14
// 004a32b2  85c0                 test eax, eax
// 004a32b4  7460                 je 0x4a3316
// 004a32b6  83b84c01000000       cmp dword ptr [eax + 0x14c], 0
// 004a32bd  8bb6702d0000         mov esi, dword ptr [esi + 0x2d70]
// 004a32c3  8bbe64010000         mov edi, dword ptr [esi + 0x164]
// 004a32c9  8d8e64010000         lea ecx, [esi + 0x164]
// 004a32cf  53                   push ebx
// 004a32d0  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 004a32d3  750e                 jne 0x4a32e3
// 004a32d5  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 004a32db  50                   push eax
// 004a32dc  8d442410             lea eax, [esp + 0x10]
// 004a32e0  50                   push eax
// 004a32e1  eb0b                 jmp 0x4a32ee
// 004a32e3  0538010000           add eax, 0x138
// 004a32e8  50                   push eax
// 004a32e9  8d542410             lea edx, [esp + 0x10]
// 004a32ed  52                   push edx
// 004a32ee  e8adfcffff           call 0x4a2fa0
// 004a32f3  8bf0                 mov esi, eax
// 004a32f5  8b06                 mov eax, dword ptr [esi]
// 004a32f7  85c0                 test eax, eax
// 004a32f9  7404                 je 0x4a32ff
// 004a32fb  3bc7                 cmp eax, edi
// 004a32fd  7406                 je 0x4a3305
// 004a32ff  ff1590288000         call dword ptr [0x802890]
// 004a3305  33c0                 xor eax, eax
// 004a3307  395e04               cmp dword ptr [esi + 4], ebx
// 004a330a  5b                   pop ebx
// 004a330b  5f                   pop edi
// 004a330c  0f95c0               setne al
// 004a330f  5e                   pop esi
// 004a3310  83c408               add esp, 8
// 004a3313  c20400               ret 4
// 004a3316  6a00                 push 0
// 004a3318  681c9b9300           push 0x939b1c
// 004a331d  687c909200           push 0x92907c
// 004a3322  6a00                 push 0
// 004a3324  57                   push edi
// 004a3325  e89ce41f00           call 0x6a17c6
// 004a332a  83c414               add esp, 0x14
// 004a332d  85c0                 test eax, eax
// 004a332f  5f                   pop edi
// 004a3330  0f94c0               sete al
// 004a3333  5e                   pop esi
// 004a3334  83c408               add esp, 8
// 004a3337  c20400               ret 4

struct Iterator {
    void* owner;
    void* node;
};

struct Table {
    void* owner;
    char padding[20];
    void* end;
    Iterator* find(Iterator* result, const void* key);
};

struct State {
    char padding[0x164];
    Table table;
};

struct Script {
    char padding[0x130];
    const void* externalKey;
    char reserved[4];
    char localKey[0x14];
    unsigned int discriminator;
};

extern const char instanceType;
extern const char scriptType;
extern const char messageType;

extern "C" void* __cdecl dynamicCast(
    void* object, int offset, const void* sourceType,
    const void* targetType, int isReference);

extern "C" void (__cdecl *invalidParameter)();

struct ClientProxy {
    char padding[0x2d70];
    State* state;
    bool contains(void* object);
};

bool ClientProxy::contains(void* object)
{
    Script* script = static_cast<Script*>(
        dynamicCast(object, 0, &instanceType, &scriptType, 0));

    if (script) {
        Table* table = &state->table;
        void* owner = table->owner;
        void* end = table->end;
        Iterator temporary;
        Iterator* result;

        if (script->discriminator == 0)
            result = table->find(&temporary, script->externalKey);
        else
            result = table->find(&temporary, script->localKey);

        if (!result->owner || result->owner != owner)
            invalidParameter();

        return result->node != end;
    }

    if (dynamicCast(object, 0, &instanceType, &messageType, 0) == 0)
        return true;
    return false;
}
