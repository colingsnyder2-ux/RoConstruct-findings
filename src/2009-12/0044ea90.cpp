// roc 2009-12 0044ea90  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044ea90
//
// 0044ea90  64a100000000         mov eax, dword ptr fs:[0]
// 0044ea96  6aff                 push -1
// 0044ea98  68d9a69200           push 0x92a6d9
// 0044ea9d  50                   push eax
// 0044ea9e  64892500000000       mov dword ptr fs:[0], esp
// 0044eaa5  8d442410             lea eax, [esp + 0x10]
// 0044eaa9  50                   push eax
// 0044eaaa  b9e8b3b700           mov ecx, 0xb7b3e8
// 0044eaaf  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0044eab7  ff1538d59800         call dword ptr [0x98d538]
// 0044eabd  8d4c2410             lea ecx, [esp + 0x10]
// 0044eac1  ff15c0de9800         call dword ptr [0x98dec0]
// 0044eac7  8b0c24               mov ecx, dword ptr [esp]
// 0044eaca  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ead1  83c40c               add esp, 0xc
// 0044ead4  c3                   ret 
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