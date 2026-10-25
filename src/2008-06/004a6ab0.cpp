// from server: 100% by king_originala
// roc 2008-06 004a6ab0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6ab0
//
// 004a6ab0  83ec40               sub esp, 0x40
// 004a6ab3  56                   push esi
// 004a6ab4  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 004a6ab8  56                   push esi
// 004a6ab9  8d4c2418             lea ecx, [esp + 0x18]
// 004a6abd  e85ec70600           call 0x513220
// 004a6ac2  d94624               fld dword ptr [esi + 0x24]
// 004a6ac5  d95c2438             fstp dword ptr [esp + 0x38]
// 004a6ac9  8d442414             lea eax, [esp + 0x14]
// 004a6acd  d94628               fld dword ptr [esi + 0x28]
// 004a6ad0  50                   push eax
// 004a6ad1  d95c2440             fstp dword ptr [esp + 0x40]
// 004a6ad5  d9462c               fld dword ptr [esi + 0x2c]
// 004a6ad8  d95c2444             fstp dword ptr [esp + 0x44]
// 004a6adc  e81fffffff           call 0x4a6a00
// 004a6ae1  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 004a6ae5  8d4c243c             lea ecx, [esp + 0x3c]
// 004a6ae9  51                   push ecx
// 004a6aea  56                   push esi
// 004a6aeb  e810fcffff           call 0x4a6700
// 004a6af0  8d542420             lea edx, [esp + 0x20]
// 004a6af4  52                   push edx
// 004a6af5  e826711300           call 0x5ddc20
// 004a6afa  83c410               add esp, 0x10
// 004a6afd  8bce                 mov ecx, esi
// 004a6aff  84c0                 test al, al
// 004a6b01  742d                 je 0x4a6b30
// 004a6b03  e858eaffff           call 0x4a5560
// 004a6b08  8d442414             lea eax, [esp + 0x14]
// 004a6b0c  50                   push eax
// 004a6b0d  e87e711300           call 0x5ddc90
// 004a6b12  83c404               add esp, 4
// 004a6b15  6a01                 push 1
// 004a6b17  6a06                 push 6
// 004a6b19  8d4c2454             lea ecx, [esp + 0x54]
// 004a6b1d  51                   push ecx
// 004a6b1e  8bce                 mov ecx, esi
// 004a6b20  89442458             mov dword ptr [esp + 0x58], eax
// 004a6b24  e8d7eaffff           call 0x4a5600
// 004a6b29  8bc6                 mov eax, esi
// 004a6b2b  5e                   pop esi
// 004a6b2c  83c440               add esp, 0x40
// 004a6b2f  c3                   ret 
// 004a6b30  e80beaffff           call 0x4a5540
// 004a6b35  8d542414             lea edx, [esp + 0x14]
// 004a6b39  52                   push edx
// 004a6b3a  8d4c2408             lea ecx, [esp + 8]
// 004a6b3e  e82d6a1300           call 0x5dd570
// 004a6b43  d944240c             fld dword ptr [esp + 0xc]
// 004a6b47  83ec10               sub esp, 0x10
// 004a6b4a  d95c240c             fstp dword ptr [esp + 0xc]
// 004a6b4e  8bce                 mov ecx, esi
// 004a6b50  d9442418             fld dword ptr [esp + 0x18]
// 004a6b54  d95c2408             fstp dword ptr [esp + 8]
// 004a6b58  d9442414             fld dword ptr [esp + 0x14]
// 004a6b5c  d95c2404             fstp dword ptr [esp + 4]
// 004a6b60  d9442420             fld dword ptr [esp + 0x20]
// 004a6b64  d91c24               fstp dword ptr [esp]
// 004a6b67  e864f2ffff           call 0x4a5dd0
// 004a6b6c  8bc6                 mov eax, esi
// 004a6b6e  5e                   pop esi
// 004a6b6f  83c440               add esp, 0x40
// 004a6b72  c3                   ret 

struct Matrix {
    float elements[9];
    Matrix(const Matrix&);
};

struct Transform {
    Matrix rotation;
    float position[3];
};

struct Quaternion {
    float x, y, z, w;
    Quaternion(const Matrix&);
};

struct S {
    void clear();
    void prepare();
    void assign(const unsigned int*, int, int);
    void setRotation(float, float, float, float);
};

extern void __cdecl normalize(Matrix*);
extern void __cdecl setPosition(S*, const float*);
extern bool __cdecl isIdentity(const Matrix*);
extern unsigned int __cdecl encodeRotation(const Matrix*);

S* __cdecl convert(S* destination, const Transform* source)
{
    Transform value = {
        source->rotation,
        { source->position[0], source->position[1], source->position[2] }
    };

    normalize(&value.rotation);
    setPosition(destination, value.position);

    if (isIdentity(&value.rotation)) {
        destination->prepare();
        unsigned int encoded = encodeRotation(&value.rotation);
        destination->assign(&encoded, 6, 1);
    } else {
        destination->clear();
        Quaternion rotation(value.rotation);
        destination->setRotation(rotation.w, rotation.x, rotation.y, rotation.z);
    }

    return destination;
}
