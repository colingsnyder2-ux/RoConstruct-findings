// roc 2009-06 006b6080  unit: RBX::Unlocked  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b6080
//
// 006b6080  83ec20               sub esp, 0x20
// 006b6083  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006b6087  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006b608b  56                   push esi
// 006b608c  50                   push eax
// 006b608d  51                   push ecx
// 006b608e  8d542410             lea edx, [esp + 0x10]
// 006b6092  52                   push edx
// 006b6093  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006b609b  e850ffffff           call 0x6b5ff0
// 006b60a0  8b742434             mov esi, dword ptr [esp + 0x34]
// 006b60a4  8d442414             lea eax, [esp + 0x14]
// 006b60a8  50                   push eax
// 006b60a9  56                   push esi
// 006b60aa  e801fcffff           call 0x6b5cb0
// 006b60af  83c414               add esp, 0x14
// 006b60b2  8bc6                 mov eax, esi
// 006b60b4  5e                   pop esi
// 006b60b5  83c420               add esp, 0x20
// 006b60b8  c3                   ret 
// copied from an identical function in another client (function ?f@@YAPAXPAX00@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Value
{
    char data[28];
};

struct Buffer
{
    volatile int zero;
    Value value;
};

extern "C" void __cdecl build(Value*, void*, void*);
extern "C" void __cdecl copy(void*, const Value*);

void* __cdecl f(void* destination, void* a, void* b)
{
    Buffer buffer;
    buffer.zero = 0;
    build(&buffer.value, a, b);
    copy(destination, &buffer.value);
    return destination;
}