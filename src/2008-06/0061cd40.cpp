// from server: 100% by king_originala
// roc 2008-06 0061cd40  unit: RBX::Lua::LuaArguments  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061cd40
//
// 0061cd40  83ec18               sub esp, 0x18
// 0061cd43  d9ee                 fldz 
// 0061cd45  56                   push esi
// 0061cd46  8b742420             mov esi, dword ptr [esp + 0x20]
// 0061cd4a  d9542404             fst dword ptr [esp + 4]
// 0061cd4e  8d442404             lea eax, [esp + 4]
// 0061cd52  d9542408             fst dword ptr [esp + 8]
// 0061cd56  50                   push eax
// 0061cd57  d95c2410             fstp dword ptr [esp + 0x10]
// 0061cd5b  6a01                 push 1
// 0061cd5d  56                   push esi
// 0061cd5e  e8fdfcffff           call 0x61ca60
// 0061cd63  83c40c               add esp, 0xc
// 0061cd66  84c0                 test al, al
// 0061cd68  7471                 je 0x61cddb
// 0061cd6a  d9ee                 fldz 
// 0061cd6c  8d4c2410             lea ecx, [esp + 0x10]
// 0061cd70  51                   push ecx
// 0061cd71  d9542414             fst dword ptr [esp + 0x14]
// 0061cd75  6a02                 push 2
// 0061cd77  d954241c             fst dword ptr [esp + 0x1c]
// 0061cd7b  56                   push esi
// 0061cd7c  d95c2424             fstp dword ptr [esp + 0x24]
// 0061cd80  e8dbfcffff           call 0x61ca60
// 0061cd85  83c40c               add esp, 0xc
// 0061cd88  84c0                 test al, al
// 0061cd8a  7423                 je 0x61cdaf
// 0061cd8c  d9442408             fld dword ptr [esp + 8]
// 0061cd90  83ec0c               sub esp, 0xc
// 0061cd93  d8742420             fdiv dword ptr [esp + 0x20]
// 0061cd97  8bc4                 mov eax, esp
// 0061cd99  d9442418             fld dword ptr [esp + 0x18]
// 0061cd9d  d8742424             fdiv dword ptr [esp + 0x24]
// 0061cda1  d9442410             fld dword ptr [esp + 0x10]
// 0061cda5  d874241c             fdiv dword ptr [esp + 0x1c]
// 0061cda9  d918                 fstp dword ptr [eax]
// 0061cdab  d9c9                 fxch st(1)
// 0061cdad  eb6f                 jmp 0x61ce1e
// 0061cdaf  6a02                 push 2
// 0061cdb1  56                   push esi
// 0061cdb2  e879faffff           call 0x61c830
// 0061cdb7  51                   push ecx
// 0061cdb8  8bd4                 mov edx, esp
// 0061cdba  51                   push ecx
// 0061cdbb  d91c24               fstp dword ptr [esp]
// 0061cdbe  52                   push edx
// 0061cdbf  8d4c2418             lea ecx, [esp + 0x18]
// 0061cdc3  e878b9efff           call 0x518740
// 0061cdc8  56                   push esi
// 0061cdc9  e872c2f8ff           call 0x5a9040
// 0061cdce  83c410               add esp, 0x10
// 0061cdd1  b801000000           mov eax, 1
// 0061cdd6  5e                   pop esi
// 0061cdd7  83c418               add esp, 0x18
// 0061cdda  c3                   ret 
// 0061cddb  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 0061cde0  50                   push eax
// 0061cde1  6a02                 push 2
// 0061cde3  56                   push esi
// 0061cde4  e8c747ffff           call 0x6115b0
// 0061cde9  d900                 fld dword ptr [eax]
// 0061cdeb  d95c2410             fstp dword ptr [esp + 0x10]
// 0061cdef  6a01                 push 1
// 0061cdf1  d94004               fld dword ptr [eax + 4]
// 0061cdf4  56                   push esi
// 0061cdf5  d95c241c             fstp dword ptr [esp + 0x1c]
// 0061cdf9  d94008               fld dword ptr [eax + 8]
// 0061cdfc  d95c2420             fstp dword ptr [esp + 0x20]
// 0061ce00  e82bfaffff           call 0x61c830
// 0061ce05  d944241c             fld dword ptr [esp + 0x1c]
// 0061ce09  83c408               add esp, 8
// 0061ce0c  d8f9                 fdivr st(1)
// 0061ce0e  8bc4                 mov eax, esp
// 0061ce10  d9c1                 fld st(1)
// 0061ce12  d8742418             fdiv dword ptr [esp + 0x18]
// 0061ce16  d9ca                 fxch st(2)
// 0061ce18  d8742410             fdiv dword ptr [esp + 0x10]
// 0061ce1c  d918                 fstp dword ptr [eax]
// 0061ce1e  d95804               fstp dword ptr [eax + 4]
// 0061ce21  56                   push esi
// 0061ce22  d95808               fstp dword ptr [eax + 8]
// 0061ce25  e816c2f8ff           call 0x5a9040
// 0061ce2a  83c410               add esp, 0x10
// 0061ce2d  b801000000           mov eax, 1
// 0061ce32  5e                   pop esi
// 0061ce33  83c418               add esp, 0x18
// 0061ce36  c3                   ret 

#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3(float a = 0.0f, float c = 0.0f, float b = 0.0f);
    Vector3(const Vector3& v);
    Vector3 operator/(float scale) const;
};

__forceinline Vector3::Vector3(float a, float c, float b)
    : x(a), y(b), z(c)
{
}

__forceinline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z)
{
}

extern bool __cdecl readVector(void* state, int index, Vector3* value);
extern float __cdecl readNumber(void* state, int index);
extern Vector3* __cdecl checkVector(void* state, int index, const char* type);
extern void __cdecl pushVector(void* state, Vector3 value);
extern const char* vectorType;

int __cdecl divide(void* state)
{
    Vector3 a;
    if (readVector(state, 1, &a)) {
        Vector3 b;
        if (readVector(state, 2, &b)) {
            pushVector(state, Vector3(a.x / b.x, a.z / b.z, a.y / b.y));
        } else {
            pushVector(state, a / readNumber(state, 2));
        }
    } else {
        const Vector3* value = checkVector(state, 2, vectorType);
        a.x = value->x;
        a.y = value->y;
        a.z = value->z;
        float scale = readNumber(state, 1);
        pushVector(state, Vector3(scale / a.x, scale / a.z, scale / a.y));
    }
    return 1;
}
