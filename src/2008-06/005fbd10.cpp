// from server: 100% by king_originala
// roc 2008-06 005fbd10  unit: RBX::LocalBackpack  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fbd10
//
// 005fbd10  64a100000000         mov eax, dword ptr fs:[0]
// 005fbd16  6aff                 push -1
// 005fbd18  6808357c00           push 0x7c3508
// 005fbd1d  50                   push eax
// 005fbd1e  64892500000000       mov dword ptr fs:[0], esp
// 005fbd25  56                   push esi
// 005fbd26  8bf1                 mov esi, ecx
// 005fbd28  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fbd2c  6a00                 push 0
// 005fbd2e  6850199500           push 0x951950
// 005fbd33  687c909200           push 0x92907c
// 005fbd38  6a00                 push 0
// 005fbd3a  50                   push eax
// 005fbd3b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005fbd43  e87e5a0a00           call 0x6a17c6
// 005fbd48  83c414               add esp, 0x14
// 005fbd4b  85c0                 test eax, eax
// 005fbd4d  740c                 je 0x5fbd5b
// 005fbd4f  50                   push eax
// 005fbd50  8d8e8cfeffff         lea ecx, [esi - 0x174]
// 005fbd56  e825ffffff           call 0x5fbc80
// 005fbd5b  8d4c2418             lea ecx, [esp + 0x18]
// 005fbd5f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005fbd67  e8f46ee2ff           call 0x422c60
// 005fbd6c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fbd70  64890d00000000       mov dword ptr fs:[0], ecx
// 005fbd77  5e                   pop esi
// 005fbd78  83c40c               add esp, 0xc
// 005fbd7b  c21400               ret 0x14

extern unsigned char sourceType;
extern unsigned char targetType;

extern "C" void* __cdecl castObject(void*, long, void*, void*, int);

struct Parameter
{
    void* object;
    unsigned long storage[3];
    ~Parameter();
};

struct S
{
    void accept(void*);
    void f(unsigned long, Parameter);
};

void S::f(unsigned long, Parameter value)
{
    void* object = castObject(value.object, 0, &sourceType, &targetType, 0);
    if (object)
        reinterpret_cast<S*>(reinterpret_cast<char*>(this) - 0x174)->accept(object);
}
