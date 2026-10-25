// from server: 100% by king_originala
// roc 2008-06 00583cf0  unit: RBX::ModelInstance  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583cf0
//
// 00583cf0  83ec54               sub esp, 0x54
// 00583cf3  56                   push esi
// 00583cf4  57                   push edi
// 00583cf5  8bf9                 mov edi, ecx
// 00583cf7  8b87a0feffff         mov eax, dword ptr [edi - 0x160]
// 00583cfd  8b4804               mov ecx, dword ptr [eax + 4]
// 00583d00  8b9439a0feffff       mov edx, dword ptr [ecx + edi - 0x160]
// 00583d07  8b4204               mov eax, dword ptr [edx + 4]
// 00583d0a  8d8c39a0feffff       lea ecx, [ecx + edi - 0x160]
// 00583d11  ffd0                 call eax
// 00583d13  85c0                 test eax, eax
// 00583d15  746c                 je 0x583d83
// 00583d17  8b8f4cffffff         mov ecx, dword ptr [edi - 0xb4]
// 00583d1d  e88e4f0100           call 0x598cb0
// 00583d22  8bf0                 mov esi, eax
// 00583d24  56                   push esi
// 00583d25  8d4c2430             lea ecx, [esp + 0x30]
// 00583d29  e8f2f4f8ff           call 0x513220
// 00583d2e  d94624               fld dword ptr [esi + 0x24]
// 00583d31  d95c2450             fstp dword ptr [esp + 0x50]
// 00583d35  81c71cffffff         add edi, 0xffffff1c
// 00583d3b  d94628               fld dword ptr [esi + 0x28]
// 00583d3e  57                   push edi
// 00583d3f  d95c2458             fstp dword ptr [esp + 0x58]
// 00583d43  8d4c240c             lea ecx, [esp + 0xc]
// 00583d47  d9462c               fld dword ptr [esi + 0x2c]
// 00583d4a  51                   push ecx
// 00583d4b  8d4c2434             lea ecx, [esp + 0x34]
// 00583d4f  d95c2460             fstp dword ptr [esp + 0x60]
// 00583d53  e8f8f5f8ff           call 0x513350
// 00583d58  8b742460             mov esi, dword ptr [esp + 0x60]
// 00583d5c  50                   push eax
// 00583d5d  8bce                 mov ecx, esi
// 00583d5f  e8bcf4f8ff           call 0x513220
// 00583d64  d9442450             fld dword ptr [esp + 0x50]
// 00583d68  d95e24               fstp dword ptr [esi + 0x24]
// 00583d6b  5f                   pop edi
// 00583d6c  d9442450             fld dword ptr [esp + 0x50]
// 00583d70  8bc6                 mov eax, esi
// 00583d72  d95e28               fstp dword ptr [esi + 0x28]
// 00583d75  d9442454             fld dword ptr [esp + 0x54]
// 00583d79  d95e2c               fstp dword ptr [esi + 0x2c]
// 00583d7c  5e                   pop esi
// 00583d7d  83c454               add esp, 0x54
// 00583d80  c20400               ret 4
// 00583d83  8b742460             mov esi, dword ptr [esp + 0x60]
// 00583d87  8bce                 mov ecx, esi
// 00583d89  e84245efff           call 0x4782d0
// 00583d8e  5f                   pop edi
// 00583d8f  8bc6                 mov eax, esi
// 00583d91  5e                   pop esi
// 00583d92  83c454               add esp, 0x54
// 00583d95  c20400               ret 4

struct Matrix
{
    float elements[9];

    Matrix(const Matrix&);
    Matrix& assign(const Matrix&);
    Matrix multiply(const Matrix&) const;
};

struct Frame
{
    Matrix rotation;
    float x, y, z;

    void identity();
};

struct Source
{
    Frame* getFrame();
};

struct Interface
{
    virtual void reserved();
    virtual int available();
};

struct S
{
    Frame* f(Frame* result);
};

Frame* S::f(Frame* result)
{
    int* offsets = *reinterpret_cast<int**>(
        reinterpret_cast<char*>(this) - 0x160);
    Interface* object = reinterpret_cast<Interface*>(
        reinterpret_cast<char*>(this) + offsets[1] - 0x160);

    if (object->available())
    {
        Source* source = *reinterpret_cast<Source**>(
            reinterpret_cast<char*>(this) - 0xb4);
        Frame* frame = source->getFrame();

        Frame local = {
            frame->rotation,
            frame->x,
            frame->y,
            frame->z
        };

        result->rotation.assign(local.rotation.multiply(
            *reinterpret_cast<Matrix*>(
                reinterpret_cast<char*>(this) - 0xe4)));
        result->x = local.x;
        result->y = local.y;
        result->z = local.z;
    }
    else
    {
        result->identity();
    }

    return result;
}
