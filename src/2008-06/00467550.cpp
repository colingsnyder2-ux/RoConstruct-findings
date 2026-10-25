// from server: 100% by king_originala
// roc 2008-06 00467550  unit: DxUserInput  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467550
//
// 00467550  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 00467556  83ec14               sub esp, 0x14
// 00467559  56                   push esi
// 0046755a  6a00                 push 0
// 0046755c  8db178010000         lea esi, [ecx + 0x178]
// 00467562  8b08                 mov ecx, dword ptr [eax]
// 00467564  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00467567  56                   push esi
// 00467568  682c018500           push 0x85012c
// 0046756d  50                   push eax
// 0046756e  ffd2                 call edx
// 00467570  85c0                 test eax, eax
// 00467572  7d06                 jge 0x46757a
// 00467574  50                   push eax
// 00467575  e8869af9ff           call 0x401000
// 0046757a  8b06                 mov eax, dword ptr [esi]
// 0046757c  8b08                 mov ecx, dword ptr [eax]
// 0046757e  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00467581  680cff8400           push 0x84ff0c
// 00467586  50                   push eax
// 00467587  ffd2                 call edx
// 00467589  85c0                 test eax, eax
// 0046758b  7d06                 jge 0x467593
// 0046758d  50                   push eax
// 0046758e  e86d9af9ff           call 0x401000
// 00467593  8b36                 mov esi, dword ptr [esi]
// 00467595  8d4c2404             lea ecx, [esp + 4]
// 00467599  51                   push ecx
// 0046759a  c744240814000000     mov dword ptr [esp + 8], 0x14
// 004675a2  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 004675aa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004675b2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004675ba  c744241800080000     mov dword ptr [esp + 0x18], 0x800
// 004675c2  8b06                 mov eax, dword ptr [esi]
// 004675c4  8b5018               mov edx, dword ptr [eax + 0x18]
// 004675c7  6a01                 push 1
// 004675c9  56                   push esi
// 004675ca  ffd2                 call edx
// 004675cc  85c0                 test eax, eax
// 004675ce  7d06                 jge 0x4675d6
// 004675d0  50                   push eax
// 004675d1  e82a9af9ff           call 0x401000
// 004675d6  5e                   pop esi
// 004675d7  83c414               add esp, 0x14
// 004675da  c3                   ret 

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
    Device* device;
    void f();
};

void S::f()
{
    long result = input->table->createDevice(
        input, (const void*)0x85012c, &device, 0);
    if (result < 0)
        checkError(result);

    result = device->table->setDataFormat(device, (const void*)0x84ff0c);
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
