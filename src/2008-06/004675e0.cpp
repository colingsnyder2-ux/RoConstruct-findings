// from server: 100% by king_originala
// roc 2008-06 004675e0  unit: DxUserInput  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004675e0
//
// 004675e0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 004675e6  83ec14               sub esp, 0x14
// 004675e9  56                   push esi
// 004675ea  6a00                 push 0
// 004675ec  8db17c010000         lea esi, [ecx + 0x17c]
// 004675f2  8b08                 mov ecx, dword ptr [eax]
// 004675f4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004675f7  56                   push esi
// 004675f8  6838f08100           push 0x81f038
// 004675fd  50                   push eax
// 004675fe  ffd2                 call edx
// 00467600  85c0                 test eax, eax
// 00467602  7d06                 jge 0x46760a
// 00467604  50                   push eax
// 00467605  e8f699f9ff           call 0x401000
// 0046760a  8b06                 mov eax, dword ptr [esi]
// 0046760c  8b08                 mov ecx, dword ptr [eax]
// 0046760e  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00467611  6814018500           push 0x850114
// 00467616  50                   push eax
// 00467617  ffd2                 call edx
// 00467619  85c0                 test eax, eax
// 0046761b  7d06                 jge 0x467623
// 0046761d  50                   push eax
// 0046761e  e8dd99f9ff           call 0x401000
// 00467623  8b36                 mov esi, dword ptr [esi]
// 00467625  8d4c2404             lea ecx, [esp + 4]
// 00467629  51                   push ecx
// 0046762a  c744240814000000     mov dword ptr [esp + 8], 0x14
// 00467632  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 0046763a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00467642  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0046764a  c744241800080000     mov dword ptr [esp + 0x18], 0x800
// 00467652  8b06                 mov eax, dword ptr [esi]
// 00467654  8b5018               mov edx, dword ptr [eax + 0x18]
// 00467657  6a01                 push 1
// 00467659  56                   push esi
// 0046765a  ffd2                 call edx
// 0046765c  85c0                 test eax, eax
// 0046765e  7d06                 jge 0x467666
// 00467660  50                   push eax
// 00467661  e89a99f9ff           call 0x401000
// 00467666  5e                   pop esi
// 00467667  83c414               add esp, 0x14
// 0046766a  c3                   ret 

struct Device;

struct Property {
    unsigned long size;
    unsigned long headerSize;
    unsigned long object;
    unsigned long how;
    unsigned long value;
};

struct Input;
struct InputTable {
    void* reserved[3];
    long (__stdcall *createDevice)(Input*, const void*, Device**, void*);
};
struct Input {
    InputTable* table;
};

struct DeviceTable {
    void* reserved0[6];
    long (__stdcall *setProperty)(Device*, unsigned long, const Property*);
    void* reserved1[4];
    long (__stdcall *setDataFormat)(Device*, const void*);
};
struct Device {
    DeviceTable* table;
};

extern "C" __declspec(noreturn) void __stdcall checkError(long);

struct S {
    unsigned char reserved[0x174];
    Input* input;
    unsigned char gap[4];
    Device* device;
    void f();
};

void S::f()
{
    long result = input->table->createDevice(
        input, (const void*)0x81f038, &device, 0);
    if (result < 0)
        checkError(result);

    result = device->table->setDataFormat(device, (const void*)0x850114);
    if (result < 0)
        checkError(result);

    Device* d = device;
    Property property;
    property.size = 20;
    property.headerSize = 16;
    property.object = 0;
    property.how = 0;
    property.value = 0x800;

    result = d->table->setProperty(d, 1, &property);
    if (result < 0)
        checkError(result);
}
