// from server: 100% by king_originala
// roc 2008-06 005fd330  unit: RBX::LocalBackpack  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd330
//
// 005fd330  64a100000000         mov eax, dword ptr fs:[0]
// 005fd336  6aff                 push -1
// 005fd338  6808357c00           push 0x7c3508
// 005fd33d  50                   push eax
// 005fd33e  64892500000000       mov dword ptr fs:[0], esp
// 005fd345  56                   push esi
// 005fd346  8bf1                 mov esi, ecx
// 005fd348  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fd34c  6a00                 push 0
// 005fd34e  6850199500           push 0x951950
// 005fd353  687c909200           push 0x92907c
// 005fd358  6a00                 push 0
// 005fd35a  50                   push eax
// 005fd35b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005fd363  e85e440a00           call 0x6a17c6
// 005fd368  83c414               add esp, 0x14
// 005fd36b  85c0                 test eax, eax
// 005fd36d  740c                 je 0x5fd37b
// 005fd36f  50                   push eax
// 005fd370  8d8e90feffff         lea ecx, [esi - 0x170]
// 005fd376  e835fdffff           call 0x5fd0b0
// 005fd37b  8d4c2418             lea ecx, [esp + 0x18]
// 005fd37f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005fd387  e8d458e2ff           call 0x422c60
// 005fd38c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fd390  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd397  5e                   pop esi
// 005fd398  83c40c               add esp, 0xc
// 005fd39b  c21400               ret 0x14

extern char instanceType;
extern char backpackItemType;

extern "C" void* __cdecl runtimeCast(
    void*, long, void*, void*, int);

struct SharedPointer
{
    void* object;
    void* control;
    ~SharedPointer();
};

struct Receiver
{
    void accept(void*);
};

struct LocalBackpack
{
    void func_005fd330(int, SharedPointer, int, int);
};

void LocalBackpack::func_005fd330(
    int, SharedPointer value, int, int)
{
    void* item = runtimeCast(
        value.object, 0, &instanceType, &backpackItemType, 0);

    if (item)
        reinterpret_cast<Receiver*>(
            reinterpret_cast<char*>(this) - 0x170)->accept(item);
}
