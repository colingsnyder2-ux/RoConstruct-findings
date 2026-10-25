// from server: 100% by king_originala
// roc 2008-06 0064e130  unit: RBX::P8Camera::?$GetSetImpl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e130
//
// 0064e130  8bc1                 mov eax, ecx
// 0064e132  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064e136  83ec30               sub esp, 0x30
// 0064e139  85c9                 test ecx, ecx
// 0064e13b  7405                 je 0x64e142
// 0064e13d  8d51ec               lea edx, [ecx - 0x14]
// 0064e140  eb02                 jmp 0x64e144
// 0064e142  33d2                 xor edx, edx
// 0064e144  56                   push esi
// 0064e145  57                   push edi
// 0064e146  8d4c2408             lea ecx, [esp + 8]
// 0064e14a  51                   push ecx
// 0064e14b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0064e14e  03ca                 add ecx, edx
// 0064e150  8b5008               mov edx, dword ptr [eax + 8]
// 0064e153  ffd2                 call edx
// 0064e155  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0064e159  8bf0                 mov esi, eax
// 0064e15b  56                   push esi
// 0064e15c  8bcf                 mov ecx, edi
// 0064e15e  e8bd50ecff           call 0x513220
// 0064e163  d94624               fld dword ptr [esi + 0x24]
// 0064e166  d95f24               fstp dword ptr [edi + 0x24]
// 0064e169  8bc7                 mov eax, edi
// 0064e16b  d94628               fld dword ptr [esi + 0x28]
// 0064e16e  d95f28               fstp dword ptr [edi + 0x28]
// 0064e171  d9462c               fld dword ptr [esi + 0x2c]
// 0064e174  d95f2c               fstp dword ptr [edi + 0x2c]
// 0064e177  5f                   pop edi
// 0064e178  5e                   pop esi
// 0064e179  83c430               add esp, 0x30
// 0064e17c  c20800               ret 8

struct Base {
    float data[9];
    Base(const Base&);
};

struct Camera {
    Base base;
    float x, y, z;

    Camera(const Camera&);
};

inline Camera::Camera(const Camera& other)
    : base(other.base), x(other.x), y(other.y), z(other.z)
{
}

struct __multiple_inheritance Object;
typedef Camera (Object::*Getter)();

struct S {
    unsigned char padding[8];
    Getter getter;

    Camera get(void* object);
};

Camera S::get(void* object)
{
    Object* target = object
        ? reinterpret_cast<Object*>(static_cast<char*>(object) - 20)
        : 0;
    return (target->*getter)();
}
