// roc 2010-06 004508c0  unit: CRobloxApp  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004508c0
//
// 004508c0  64a100000000         mov eax, dword ptr fs:[0]
// 004508c6  6aff                 push -1
// 004508c8  6819119800           push 0x981119
// 004508cd  50                   push eax
// 004508ce  64892500000000       mov dword ptr fs:[0], esp
// 004508d5  8d442410             lea eax, [esp + 0x10]
// 004508d9  50                   push eax
// 004508da  b9a819c000           mov ecx, 0xc019a8
// 004508df  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004508e7  ff1580c59e00         call dword ptr [0x9ec580]
// 004508ed  8d4c2410             lea ecx, [esp + 0x10]
// 004508f1  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 004508f7  8b0c24               mov ecx, dword ptr [esp]
// 004508fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00450901  83c40c               add esp, 0xc
// 00450904  c3                   ret 
// copied from an identical function in another client (function ?update@@YAXUValue@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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