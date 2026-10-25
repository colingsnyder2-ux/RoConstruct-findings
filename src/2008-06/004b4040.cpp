// from server: 100% by king_originala
// roc 2008-06 004b4040  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4040
//
// 004b4040  8b442404             mov eax, dword ptr [esp + 4]
// 004b4044  83ec0c               sub esp, 0xc
// 004b4047  56                   push esi
// 004b4048  6a00                 push 0
// 004b404a  68b48d9300           push 0x938db4
// 004b404f  68fc919200           push 0x9291fc
// 004b4054  6a00                 push 0
// 004b4056  50                   push eax
// 004b4057  8bf1                 mov esi, ecx
// 004b4059  e868d71e00           call 0x6a17c6
// 004b405e  83c414               add esp, 0x14
// 004b4061  85c0                 test eax, eax
// 004b4063  751e                 jne 0x4b4083
// 004b4065  6834ba8000           push 0x80ba34
// 004b406a  8d4c2408             lea ecx, [esp + 8]
// 004b406e  ff1564288000         call dword ptr [0x802864]
// 004b4074  682c368d00           push 0x8d362c
// 004b4079  8d4c2408             lea ecx, [esp + 8]
// 004b407d  51                   push ecx
// 004b407e  e809d51e00           call 0x6a158c
// 004b4083  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b4087  83c204               add edx, 4
// 004b408a  52                   push edx
// 004b408b  50                   push eax
// 004b408c  8bce                 mov ecx, esi
// 004b408e  e80dffffff           call 0x4b3fa0
// 004b4093  5e                   pop esi
// 004b4094  83c40c               add esp, 0xc
// 004b4097  c20800               ret 8

extern char sourceType;
extern char targetType;
extern char badCastThrowInfo;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

extern "C" __declspec(noreturn) void __stdcall ThrowException(
    void*, void*);

typedef void (__thiscall *BadCastConstructor)(void*, const char*);
extern BadCastConstructor badCastConstructor;

struct S
{
    void execute(void* object, void* arguments);
    void invoke(void* object, void* arguments);
};

void S::execute(void* object, void* arguments)
{
    void* converted = __RTDynamicCast(
        object, 0, &sourceType, &targetType, 0);

    if (!converted)
    {
        unsigned long exception[3];
        badCastConstructor(exception, "bad cast");
        ThrowException(exception, &badCastThrowInfo);
    }

    invoke(converted, static_cast<char*>(arguments) + 4);
}
