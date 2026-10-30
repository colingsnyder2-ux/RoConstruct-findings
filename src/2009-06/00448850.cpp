// roc 2009-06 00448850  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00448850
//
// 00448850  64a100000000         mov eax, dword ptr fs:[0]
// 00448856  6aff                 push -1
// 00448858  68d9f88400           push 0x84f8d9
// 0044885d  50                   push eax
// 0044885e  64892500000000       mov dword ptr fs:[0], esp
// 00448865  8d442410             lea eax, [esp + 0x10]
// 00448869  50                   push eax
// 0044886a  b938b1a300           mov ecx, 0xa3b138
// 0044886f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00448877  ff1508fa8900         call dword ptr [0x89fa08]
// 0044887d  8d4c2410             lea ecx, [esp + 0x10]
// 00448881  ff1510fd8900         call dword ptr [0x89fd10]
// 00448887  8b0c24               mov ecx, dword ptr [esp]
// 0044888a  64890d00000000       mov dword ptr fs:[0], ecx
// 00448891  83c40c               add esp, 0xc
// 00448894  c3                   ret 
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