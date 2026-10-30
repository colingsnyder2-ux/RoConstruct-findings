// roc 2012-06 00472870  unit: CRobloxApp  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00472870
//
// 00472870  64a100000000         mov eax, dword ptr fs:[0]
// 00472876  6aff                 push -1
// 00472878  68e9f5a900           push 0xa9f5e9
// 0047287d  50                   push eax
// 0047287e  64892500000000       mov dword ptr fs:[0], esp
// 00472885  8d442410             lea eax, [esp + 0x10]
// 00472889  50                   push eax
// 0047288a  b954a2e100           mov ecx, 0xe1a254
// 0047288f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00472897  ff152045b200         call dword ptr [0xb24520]
// 0047289d  8d4c2410             lea ecx, [esp + 0x10]
// 004728a1  ff15d047b200         call dword ptr [0xb247d0]
// 004728a7  8b0c24               mov ecx, dword ptr [esp]
// 004728aa  64890d00000000       mov dword ptr fs:[0], ecx
// 004728b1  83c40c               add esp, 0xc
// 004728b4  c3                   ret 
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