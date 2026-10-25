// from server: 100% by king_originala
// roc 2008-06 00615cc0  unit: RBX::Unlocked  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615cc0
//
// 00615cc0  83ec20               sub esp, 0x20
// 00615cc3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00615cc7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00615ccb  56                   push esi
// 00615ccc  50                   push eax
// 00615ccd  51                   push ecx
// 00615cce  8d542410             lea edx, [esp + 0x10]
// 00615cd2  52                   push edx
// 00615cd3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00615cdb  e850ffffff           call 0x615c30
// 00615ce0  8b742434             mov esi, dword ptr [esp + 0x34]
// 00615ce4  8d442414             lea eax, [esp + 0x14]
// 00615ce8  50                   push eax
// 00615ce9  56                   push esi
// 00615cea  e801fcffff           call 0x6158f0
// 00615cef  83c414               add esp, 0x14
// 00615cf2  8bc6                 mov eax, esi
// 00615cf4  5e                   pop esi
// 00615cf5  83c420               add esp, 0x20
// 00615cf8  c3                   ret 

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
