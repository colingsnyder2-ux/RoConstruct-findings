// from server: 100% by king_originala
// roc 2008-06 0060b970  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b970
//
// 0060b970  8b442404             mov eax, dword ptr [esp + 4]
// 0060b974  83ec0c               sub esp, 0xc
// 0060b977  6a00                 push 0
// 0060b979  68289a9500           push 0x959a28
// 0060b97e  68fc919200           push 0x9291fc
// 0060b983  6a00                 push 0
// 0060b985  50                   push eax
// 0060b986  e83b5e0900           call 0x6a17c6
// 0060b98b  83c414               add esp, 0x14
// 0060b98e  85c0                 test eax, eax
// 0060b990  751e                 jne 0x60b9b0
// 0060b992  6834ba8000           push 0x80ba34
// 0060b997  8d4c2404             lea ecx, [esp + 4]
// 0060b99b  ff1564288000         call dword ptr [0x802864]
// 0060b9a1  682c368d00           push 0x8d362c
// 0060b9a6  8d4c2404             lea ecx, [esp + 4]
// 0060b9aa  51                   push ecx
// 0060b9ab  e8dc5b0900           call 0x6a158c
// 0060b9b0  83c40c               add esp, 0xc
// 0060b9b3  c3                   ret 

extern char sourceType;
extern char targetType;
extern char badCastType;

extern "C" void* __cdecl runtimeCast(
    void*, long, void*, void*, int);

typedef void (__thiscall *BadCastConstructor)(void*, const char*);
extern BadCastConstructor constructBadCast;

extern "C" __declspec(noreturn) void __stdcall throwException(
    void*, void*);

void* func_0060b970(void* object)
{
    void* result = runtimeCast(object, 0, &sourceType, &targetType, 0);
    if (!result)
    {
        char exception[12];
        constructBadCast(exception, "bad cast");
        throwException(exception, &badCastType);
    }
    return result;
}
