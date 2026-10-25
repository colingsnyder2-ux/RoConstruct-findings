// from server: 100% by king_originala
// roc 2008-06 0061df50  unit: RBX::Lua::LuaArguments  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061df50
//
// 0061df50  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061df55  53                   push ebx
// 0061df56  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0061df5a  55                   push ebp
// 0061df5b  56                   push esi
// 0061df5c  57                   push edi
// 0061df5d  50                   push eax
// 0061df5e  6a01                 push 1
// 0061df60  53                   push ebx
// 0061df61  e84a36ffff           call 0x6115b0
// 0061df66  53                   push ebx
// 0061df67  8bf0                 mov esi, eax
// 0061df69  e8a23cffff           call 0x611c10
// 0061df6e  8be8                 mov ebp, eax
// 0061df70  83c410               add esp, 0x10
// 0061df73  83ed01               sub ebp, 1
// 0061df76  7549                 jne 0x61dfc1
// 0061df78  f60550f0960001       test byte ptr [0x96f050], 1
// 0061df7f  751b                 jne 0x61df9c
// 0061df81  d9ee                 fldz 
// 0061df83  830d50f0960001       or dword ptr [0x96f050], 1
// 0061df8a  d91544f09600         fst dword ptr [0x96f044]
// 0061df90  d91548f09600         fst dword ptr [0x96f048]
// 0061df96  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0061df9c  83ec0c               sub esp, 0xc
// 0061df9f  8bcc                 mov ecx, esp
// 0061dfa1  6844f09600           push 0x96f044
// 0061dfa6  51                   push ecx
// 0061dfa7  8bce                 mov ecx, esi
// 0061dfa9  e8f286e5ff           call 0x4766a0
// 0061dfae  53                   push ebx
// 0061dfaf  e88cb0f8ff           call 0x5a9040
// 0061dfb4  83c410               add esp, 0x10
// 0061dfb7  b801000000           mov eax, 1
// 0061dfbc  5f                   pop edi
// 0061dfbd  5e                   pop esi
// 0061dfbe  5d                   pop ebp
// 0061dfbf  5b                   pop ebx
// 0061dfc0  c3                   ret 
// 0061dfc1  33ff                 xor edi, edi
// 0061dfc3  85ed                 test ebp, ebp
// 0061dfc5  7e7b                 jle 0x61e042
// 0061dfc7  eb07                 jmp 0x61dfd0
// 0061dfc9  8da42400000000       lea esp, [esp]
// 0061dfd0  8b15c0b19500         mov edx, dword ptr [0x95b1c0]
// 0061dfd6  52                   push edx
// 0061dfd7  8d4702               lea eax, [edi + 2]
// 0061dfda  50                   push eax
// 0061dfdb  53                   push ebx
// 0061dfdc  e8cf35ffff           call 0x6115b0
// 0061dfe1  d94008               fld dword ptr [eax + 8]
// 0061dfe4  d84e14               fmul dword ptr [esi + 0x14]
// 0061dfe7  8bcc                 mov ecx, esp
// 0061dfe9  d94610               fld dword ptr [esi + 0x10]
// 0061dfec  53                   push ebx
// 0061dfed  d84804               fmul dword ptr [eax + 4]
// 0061dff0  dec1                 faddp st(1)
// 0061dff2  d900                 fld dword ptr [eax]
// 0061dff4  d84e0c               fmul dword ptr [esi + 0xc]
// 0061dff7  dec1                 faddp st(1)
// 0061dff9  d84628               fadd dword ptr [esi + 0x28]
// 0061dffc  d900                 fld dword ptr [eax]
// 0061dffe  d84e18               fmul dword ptr [esi + 0x18]
// 0061e001  d94008               fld dword ptr [eax + 8]
// 0061e004  d84e20               fmul dword ptr [esi + 0x20]
// 0061e007  dec1                 faddp st(1)
// 0061e009  d94004               fld dword ptr [eax + 4]
// 0061e00c  d84e1c               fmul dword ptr [esi + 0x1c]
// 0061e00f  dec1                 faddp st(1)
// 0061e011  d8462c               fadd dword ptr [esi + 0x2c]
// 0061e014  d94604               fld dword ptr [esi + 4]
// 0061e017  d84804               fmul dword ptr [eax + 4]
// 0061e01a  d94008               fld dword ptr [eax + 8]
// 0061e01d  d84e08               fmul dword ptr [esi + 8]
// 0061e020  dec1                 faddp st(1)
// 0061e022  d900                 fld dword ptr [eax]
// 0061e024  d80e                 fmul dword ptr [esi]
// 0061e026  dec1                 faddp st(1)
// 0061e028  d84624               fadd dword ptr [esi + 0x24]
// 0061e02b  d919                 fstp dword ptr [ecx]
// 0061e02d  d9c9                 fxch st(1)
// 0061e02f  d95904               fstp dword ptr [ecx + 4]
// 0061e032  d95908               fstp dword ptr [ecx + 8]
// 0061e035  e806b0f8ff           call 0x5a9040
// 0061e03a  47                   inc edi
// 0061e03b  83c410               add esp, 0x10
// 0061e03e  3bfd                 cmp edi, ebp
// 0061e040  7c8e                 jl 0x61dfd0
// 0061e042  5f                   pop edi
// 0061e043  5e                   pop esi
// 0061e044  8bc5                 mov eax, ebp
// 0061e046  5d                   pop ebp
// 0061e047  5b                   pop ebx
// 0061e048  c3                   ret 

#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3(float, float, float) throw();
    Vector3(const Vector3&) throw();
};

inline Vector3::Vector3(float a, float b, float c) throw()
    : x(a), y(c), z(b) {}

inline Vector3::Vector3(const Vector3& v) throw()
    : x(v.x), y(v.y), z(v.z) {}

struct Transform {
    float rotation[9];
    float translation[3];
    Vector3 apply(const Vector3&) const throw();
};

extern void* transformType;
extern void* vectorType;
extern Vector3 zeroVector;
extern unsigned int zeroInitialized;

extern "C" void* __cdecl getArgument(void*, int, void*);
extern "C" int __cdecl lua_gettop(void*);
extern "C" void __cdecl pushVector(void*, Vector3) throw();

int __cdecl transformArguments(void* state)
{
    Transform* transform =
        static_cast<Transform*>(getArgument(state, 1, transformType));
    int count = lua_gettop(state) - 1;

    if (count == 0) {
        if (!(zeroInitialized & 1)) {
            zeroInitialized |= 1;
            zeroVector.x = 0.0f;
            zeroVector.y = 0.0f;
            zeroVector.z = 0.0f;
        }
        pushVector(state, transform->apply(zeroVector));
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        const Vector3* v =
            static_cast<const Vector3*>(getArgument(state, i + 2, vectorType));

        pushVector(state, Vector3(
            transform->rotation[0] * v->x +
            transform->rotation[1] * v->y +
            transform->rotation[2] * v->z +
            transform->translation[0],
            transform->rotation[6] * v->x +
            transform->rotation[7] * v->y +
            transform->rotation[8] * v->z +
            transform->translation[2],
            transform->rotation[3] * v->x +
            transform->rotation[4] * v->y +
            transform->rotation[5] * v->z +
            transform->translation[1]));
    }

    return count;
}
