// from server: 100% by colin
// roc 2008-06 0044c310  unit: CRobloxModule  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044c310
//
// 0044c310  64a100000000         mov eax, dword ptr fs:[0]
// 0044c316  6aff                 push -1
// 0044c318  6899037c00           push 0x7c0399
// 0044c31d  50                   push eax
// 0044c31e  64892500000000       mov dword ptr fs:[0], esp
// 0044c325  8d442410             lea eax, [esp + 0x10]
// 0044c329  50                   push eax
// 0044c32a  b9f0dc9600           mov ecx, 0x96dcf0
// 0044c32f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0044c337  ff1544318000         call dword ptr [0x803144]
// 0044c33d  8d4c2410             lea ecx, [esp + 0x10]
// 0044c341  ff15143f8000         call dword ptr [0x803f14]
// 0044c347  8b0c24               mov ecx, dword ptr [esp]
// 0044c34a  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c351  83c40c               add esp, 0xc
// 0044c354  c3                   ret 

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
