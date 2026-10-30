// roc 2011-06 0045f230  unit: CRobloxApp  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045f230
//
// 0045f230  64a100000000         mov eax, dword ptr fs:[0]
// 0045f236  6aff                 push -1
// 0045f238  68491a9d00           push 0x9d1a49
// 0045f23d  50                   push eax
// 0045f23e  64892500000000       mov dword ptr fs:[0], esp
// 0045f245  8d442410             lea eax, [esp + 0x10]
// 0045f249  50                   push eax
// 0045f24a  b91c38cb00           mov ecx, 0xcb381c
// 0045f24f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0045f257  ff156425a400         call dword ptr [0xa42564]
// 0045f25d  8d4c2410             lea ecx, [esp + 0x10]
// 0045f261  ff15082ea400         call dword ptr [0xa42e08]
// 0045f267  8b0c24               mov ecx, dword ptr [esp]
// 0045f26a  64890d00000000       mov dword ptr fs:[0], ecx
// 0045f271  83c40c               add esp, 0xc
// 0045f274  c3                   ret 
// copied from an identical function in another client (function ?update@ns_ROCX000000@@YAXUValue@1@@Z)

namespace ns_ROCX000000 {
struct Value;
extern void (__thiscall *assignValue)(void *, const Value *);
extern unsigned char globalObject;
struct Value
{
    unsigned char storage[4];
    __declspec(dllimport) ~Value() throw();
};
void update(Value value)
{
    assignValue(&globalObject, &value);
}
}
