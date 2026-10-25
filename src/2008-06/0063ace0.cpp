// from server: 100% by king_originala
// roc 2008-06 0063ace0  unit: RBX::N$1?sDoubleValue::V?$Value::?$SignalDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ace0
//
// 0063ace0  83ec10               sub esp, 0x10
// 0063ace3  85c9                 test ecx, ecx
// 0063ace5  7405                 je 0x63acec
// 0063ace7  8d4114               lea eax, [ecx + 0x14]
// 0063acea  eb02                 jmp 0x63acee
// 0063acec  33c0                 xor eax, eax
// 0063acee  d98130010000         fld dword ptr [ecx + 0x130]
// 0063acf4  50                   push eax
// 0063acf5  d95c2408             fstp dword ptr [esp + 8]
// 0063acf9  d98134010000         fld dword ptr [ecx + 0x134]
// 0063acff  d95c240c             fstp dword ptr [esp + 0xc]
// 0063ad03  d98138010000         fld dword ptr [ecx + 0x138]
// 0063ad09  b99cd29700           mov ecx, 0x97d29c
// 0063ad0e  d95c2410             fstp dword ptr [esp + 0x10]
// 0063ad12  e80909f3ff           call 0x56b620
// 0063ad17  85c0                 test eax, eax
// 0063ad19  7426                 je 0x63ad41
// 0063ad1b  d9442404             fld dword ptr [esp + 4]
// 0063ad1f  83ec0c               sub esp, 0xc
// 0063ad22  8bcc                 mov ecx, esp
// 0063ad24  d919                 fstp dword ptr [ecx]
// 0063ad26  d9442414             fld dword ptr [esp + 0x14]
// 0063ad2a  d95904               fstp dword ptr [ecx + 4]
// 0063ad2d  d9442418             fld dword ptr [esp + 0x18]
// 0063ad31  d95908               fstp dword ptr [ecx + 8]
// 0063ad34  8d4c240f             lea ecx, [esp + 0xf]
// 0063ad38  51                   push ecx
// 0063ad39  8d4810               lea ecx, [eax + 0x10]
// 0063ad3c  e84fe7ffff           call 0x639490
// 0063ad41  83c410               add esp, 0x10
// 0063ad44  c20400               ret 4

struct Vector3
{
    float x, y, z;

    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
};

struct Signal
{
    void fire(char* context, Vector3 value);
};

struct Entry
{
    char padding[0x10];
    Signal signal;
};

struct Registry
{
    Entry* find(void* key);
};

extern Registry registry;

struct S
{
    char padding[0x14];
    char key[0x11c];
    float x, y, z;

    void update(void* unused);
};

void S::update(void*)
{
    void* identity = this ? key : 0;
    Vector3 value(x, y, z);
    Entry* entry = registry.find(identity);
    if (entry)
    {
        char context;
        entry->signal.fire(&context, value);
    }
}
