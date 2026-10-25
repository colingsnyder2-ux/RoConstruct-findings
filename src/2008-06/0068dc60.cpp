// from server: 100% by king_originala
// roc 2008-06 0068dc60  unit: Ogre::RbxSceneManager  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068dc60
//
// 0068dc60  64a100000000         mov eax, dword ptr fs:[0]
// 0068dc66  6aff                 push -1
// 0068dc68  6808e77d00           push 0x7de708
// 0068dc6d  50                   push eax
// 0068dc6e  64892500000000       mov dword ptr fs:[0], esp
// 0068dc75  81ecdc000000         sub esp, 0xdc
// 0068dc7b  56                   push esi
// 0068dc7c  8bf1                 mov esi, ecx
// 0068dc7e  8b8e688a0000         mov ecx, dword ptr [esi + 0x8a68]
// 0068dc84  2b8e648a0000         sub ecx, dword ptr [esi + 0x8a64]
// 0068dc8a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0068dc8f  f7e9                 imul ecx
// 0068dc91  d1fa                 sar edx, 1
// 0068dc93  8bc2                 mov eax, edx
// 0068dc95  c1e81f               shr eax, 0x1f
// 0068dc98  57                   push edi
// 0068dc99  8bbc24f4000000       mov edi, dword ptr [esp + 0xf4]
// 0068dca0  03c2                 add eax, edx
// 0068dca2  3bf8                 cmp edi, eax
// 0068dca4  726b                 jb 0x68dd11
// 0068dca6  680ced8400           push 0x84ed0c
// 0068dcab  8d4c2410             lea ecx, [esp + 0x10]
// 0068dcaf  ff1558248000         call dword ptr [0x802458]
// 0068dcb5  68c8ec8400           push 0x84ecc8
// 0068dcba  8d4c242c             lea ecx, [esp + 0x2c]
// 0068dcbe  c78424f000000000000000 mov dword ptr [esp + 0xf0], 0
// 0068dcc9  ff1558248000         call dword ptr [0x802458]
// 0068dccf  68b9120000           push 0x12b9
// 0068dcd4  68e8e98400           push 0x84e9e8
// 0068dcd9  8d4c2414             lea ecx, [esp + 0x14]
// 0068dcdd  51                   push ecx
// 0068dcde  8d542434             lea edx, [esp + 0x34]
// 0068dce2  52                   push edx
// 0068dce3  c644241800           mov byte ptr [esp + 0x18], 0
// 0068dce8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0068dcec  50                   push eax
// 0068dced  8d4c2458             lea ecx, [esp + 0x58]
// 0068dcf1  51                   push ecx
// 0068dcf2  c684240401000001     mov byte ptr [esp + 0x104], 1
// 0068dcfa  e811d9ffff           call 0x68b610
// 0068dcff  83c418               add esp, 0x18
// 0068dd02  68d8fb8f00           push 0x8ffbd8
// 0068dd07  8d542448             lea edx, [esp + 0x48]
// 0068dd0b  52                   push edx
// 0068dd0c  e87b380100           call 0x6a158c
// 0068dd11  8b06                 mov eax, dword ptr [esi]
// 0068dd13  8b5020               mov edx, dword ptr [eax + 0x20]
// 0068dd16  8bce                 mov ecx, esi
// 0068dd18  ffd2                 call edx
// 0068dd1a  8b8e848a0000         mov ecx, dword ptr [esi + 0x8a84]
// 0068dd20  2b8e808a0000         sub ecx, dword ptr [esi + 0x8a80]
// 0068dd26  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0068dd2b  f7e9                 imul ecx
// 0068dd2d  d1fa                 sar edx, 1
// 0068dd2f  8bc2                 mov eax, edx
// 0068dd31  c1e81f               shr eax, 0x1f
// 0068dd34  03c2                 add eax, edx
// 0068dd36  3bf8                 cmp edi, eax
// 0068dd38  7206                 jb 0x68dd40
// 0068dd3a  ff1590288000         call dword ptr [0x802890]
// 0068dd40  8b96808a0000         mov edx, dword ptr [esi + 0x8a80]
// 0068dd46  8d0c7f               lea ecx, [edi + edi*2]
// 0068dd49  8d048a               lea eax, [edx + ecx*4]
// 0068dd4c  8b8c24e4000000       mov ecx, dword ptr [esp + 0xe4]
// 0068dd53  5f                   pop edi
// 0068dd54  5e                   pop esi
// 0068dd55  64890d00000000       mov dword ptr fs:[0], ecx
// 0068dd5c  81c4e8000000         add esp, 0xe8
// 0068dd62  c20400               ret 4

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstructor)(String*, const char*);

__forceinline String::String(const char* text) {
    stringConstructor(this, text);
}

struct ExceptionCode {};
struct Exception {
    char storage[160];
};

struct Texture {
    char storage[12];
};

Exception* __cdecl makeException(
    Exception*, ExceptionCode, const String&, const String&, const char*, int);

extern "C" {
    extern void (__stdcall *_invalid_parameter_noinfo)();
    __declspec(noreturn) void __stdcall throwException(void*, void*);
}
extern char exceptionType;

struct RbxSceneManager {
    Texture& getShadowTexture(unsigned int index);
};

Texture& RbxSceneManager::getShadowTexture(unsigned int index) {
    char* self = reinterpret_cast<char*>(this);

    if (index >= static_cast<unsigned int>(
            *reinterpret_cast<Texture**>(self + 0x8a68) -
            *reinterpret_cast<Texture**>(self + 0x8a64))) {
        String source("RbxSceneManager::getShadowTexture");
        String description("shadowIndex out of bounds");
        Exception exception;
        makeException(&exception, ExceptionCode(), description, source,
                      ".\\RbxSceneManager.cpp", 0x12b9);
        throwException(&exception, &exceptionType);
    }

    typedef void (__thiscall *UpdateFunction)(RbxSceneManager*);
    UpdateFunction* table = *reinterpret_cast<UpdateFunction**>(this);
    table[8](this);

    Texture* first = *reinterpret_cast<Texture**>(self + 0x8a80);
    Texture* last = *reinterpret_cast<Texture**>(self + 0x8a84);
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();

    return (*reinterpret_cast<Texture**>(self + 0x8a80))[index];
}
