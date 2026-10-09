// from server: 23% by colin
// roc 2007-08 0046c0c0  unit: RBX::LDraw2Lua::LDrawParser  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046c0c0
//
// 0046c0c0  6aff                 push -1
// 0046c0c2  6899407400           push 0x744099
// 0046c0c7  64a100000000         mov eax, dword ptr fs:[0]
// 0046c0cd  50                   push eax
// 0046c0ce  83ec44               sub esp, 0x44
// 0046c0d1  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046c0d6  33c4                 xor eax, esp
// 0046c0d8  50                   push eax
// 0046c0d9  8d442448             lea eax, [esp + 0x48]
// 0046c0dd  64a300000000         mov dword ptr fs:[0], eax
// 0046c0e3  6880617900           push 0x796180
// 0046c0e8  8d4c2408             lea ecx, [esp + 8]
// 0046c0ec  ff1598e67700         call dword ptr [0x77e698]
// 0046c0f2  8d442404             lea eax, [esp + 4]
// 0046c0f6  50                   push eax
// 0046c0f7  8d4c2424             lea ecx, [esp + 0x24]
// 0046c0fb  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0046c103  e8b863f9ff           call 0x4024c0
// 0046c108  6864f38300           push 0x83f364
// 0046c10d  8d4c2424             lea ecx, [esp + 0x24]
// 0046c111  51                   push ecx
// 0046c112  c7442428784e7800     mov dword ptr [esp + 0x28], 0x784e78
// 0046c11a  e87f4a1c00           call 0x630b9e

struct S_func_0046c0c0 {
    void f();
};

extern "C" void __stdcall sub_004024c0();
extern "C" void __stdcall sub_00630b9e();
extern "C" void __stdcall sub_0077e698();

void S_func_0046c0c0::f()
{
    char buf[0x44];
    int local;
    void* p;

    sub_0077e698();
    sub_004024c0();
    sub_00630b9e();
}
