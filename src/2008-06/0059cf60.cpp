// from server: 100% by king_originala
// roc 2008-06 0059cf60  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059cf60
//
// 0059cf60  8b442404             mov eax, dword ptr [esp + 4]
// 0059cf64  83ec0c               sub esp, 0xc
// 0059cf67  56                   push esi
// 0059cf68  6a00                 push 0
// 0059cf6a  6850dd9200           push 0x92dd50
// 0059cf6f  68fc919200           push 0x9291fc
// 0059cf74  6a00                 push 0
// 0059cf76  50                   push eax
// 0059cf77  8bf1                 mov esi, ecx
// 0059cf79  e848481000           call 0x6a17c6
// 0059cf7e  83c414               add esp, 0x14
// 0059cf81  85c0                 test eax, eax
// 0059cf83  751e                 jne 0x59cfa3
// 0059cf85  6834ba8000           push 0x80ba34
// 0059cf8a  8d4c2408             lea ecx, [esp + 8]
// 0059cf8e  ff1564288000         call dword ptr [0x802864]
// 0059cf94  682c368d00           push 0x8d362c
// 0059cf99  8d4c2408             lea ecx, [esp + 8]
// 0059cf9d  51                   push ecx
// 0059cf9e  e8e9451000           call 0x6a158c
// 0059cfa3  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 0059cfa9  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0059cfac  8b140a               mov edx, dword ptr [edx + ecx]
// 0059cfaf  03563c               add edx, dword ptr [esi + 0x3c]
// 0059cfb2  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 0059cfb9  8b4638               mov eax, dword ptr [esi + 0x38]
// 0059cfbc  ffd0                 call eax
// 0059cfbe  5e                   pop esi
// 0059cfbf  83c40c               add esp, 0xc
// 0059cfc2  c20800               ret 8

extern "C" void* __cdecl castObject(void*, int, const void*, const void*, int);
extern "C" __declspec(noreturn) void __stdcall throwException(void*, const void*);

extern const char sourceType;
extern const char targetType;
extern const char badCastMessage[];
extern const char throwInfo;

namespace std
{
    struct bad_cast
    {
        unsigned data[3];
    };
}

typedef void (__thiscall *BadCastConstructor)(std::bad_cast*, const char*);
extern BadCastConstructor badCastConstructor;

typedef void (__thiscall *MemberFunction)(void*);

struct S
{
    char padding[0x38];
    MemberFunction function;
    int displacement;
    int tableOffset;

    void invoke(void* object, void* unused);
};

void S::invoke(void* object, void* unused)
{
    char* result = static_cast<char*>(
        castObject(object, 0, &sourceType, &targetType, 0));

    if (!result)
    {
        std::bad_cast error;
        badCastConstructor(&error, badCastMessage);
        throwException(&error, &throwInfo);
    }

    char* table = *reinterpret_cast<char**>(result + 0x134);
    int offset = *reinterpret_cast<int*>(table + tableOffset);
    function(result + 0x134 + offset + displacement);
}
