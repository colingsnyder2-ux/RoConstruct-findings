// from server: 100% by king_originala
// roc 2008-06 005e6420  unit: RBX::Clump  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6420
//
// 005e6420  83ec34               sub esp, 0x34
// 005e6423  d9ee                 fldz 
// 005e6425  56                   push esi
// 005e6426  8bf1                 mov esi, ecx
// 005e6428  d95c2404             fstp dword ptr [esp + 4]
// 005e642c  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005e642f  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 005e6435  8d442414             lea eax, [esp + 0x14]
// 005e6439  50                   push eax
// 005e643a  e841e00200           call 0x614480
// 005e643f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005e6442  8944240c             mov dword ptr [esp + 0xc], eax
// 005e6446  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005e644e  85c0                 test eax, eax
// 005e6450  0f84c8000000         je 0x5e651e
// 005e6456  57                   push edi
// 005e6457  eb07                 jmp 0x5e6460
// 005e6459  8da42400000000       lea esp, [esp]
// 005e6460  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 005e6466  8bce                 mov ecx, esi
// 005e6468  8bf8                 mov edi, eax
// 005e646a  e8f12efbff           call 0x599360
// 005e646f  d986bc000000         fld dword ptr [esi + 0xbc]
// 005e6475  d864241c             fsub dword ptr [esp + 0x1c]
// 005e6479  8d542424             lea edx, [esp + 0x24]
// 005e647d  d986c0000000         fld dword ptr [esi + 0xc0]
// 005e6483  52                   push edx
// 005e6484  d8642424             fsub dword ptr [esp + 0x24]
// 005e6488  8d442434             lea eax, [esp + 0x34]
// 005e648c  d986b8000000         fld dword ptr [esi + 0xb8]
// 005e6492  50                   push eax
// 005e6493  d8642420             fsub dword ptr [esp + 0x20]
// 005e6497  d95c242c             fstp dword ptr [esp + 0x2c]
// 005e649b  d9c9                 fxch st(1)
// 005e649d  d95c2430             fstp dword ptr [esp + 0x30]
// 005e64a1  d95c2434             fstp dword ptr [esp + 0x34]
// 005e64a5  e88681ffff           call 0x5de630
// 005e64aa  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 005e64b0  d94004               fld dword ptr [eax + 4]
// 005e64b3  83c004               add eax, 4
// 005e64b6  d905ac9b8100         fld dword ptr [0x819bac]
// 005e64bc  83c408               add esp, 8
// 005e64bf  dcc9                 fmul st(1), st(0)
// 005e64c1  d94004               fld dword ptr [eax + 4]
// 005e64c4  d8c9                 fmul st(1)
// 005e64c6  d94008               fld dword ptr [eax + 8]
// 005e64c9  deca                 fmulp st(2)
// 005e64cb  d9442430             fld dword ptr [esp + 0x30]
// 005e64cf  dec3                 faddp st(3)
// 005e64d1  d8442434             fadd dword ptr [esp + 0x34]
// 005e64d5  d9442438             fld dword ptr [esp + 0x38]
// 005e64d9  dec2                 faddp st(2)
// 005e64db  d9c1                 fld st(1)
// 005e64dd  deca                 fmulp st(2)
// 005e64df  dcc8                 fmul st(0), st(0)
// 005e64e1  dec1                 faddp st(1)
// 005e64e3  d9c1                 fld st(1)
// 005e64e5  deca                 fmulp st(2)
// 005e64e7  dec1                 faddp st(1)
// 005e64e9  d9fa                 fsqrt 
// 005e64eb  d954240c             fst dword ptr [esp + 0xc]
// 005e64ef  d85c2408             fcomp dword ptr [esp + 8]
// 005e64f3  dfe0                 fnstsw ax
// 005e64f5  f6c441               test ah, 0x41
// 005e64f8  8d44240c             lea eax, [esp + 0xc]
// 005e64fc  7404                 je 0x5e6502
// 005e64fe  8d442408             lea eax, [esp + 8]
// 005e6502  d900                 fld dword ptr [eax]
// 005e6504  8d4c2410             lea ecx, [esp + 0x10]
// 005e6508  d95c2408             fstp dword ptr [esp + 8]
// 005e650c  e82f110600           call 0x647640
// 005e6511  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e6515  85c0                 test eax, eax
// 005e6517  0f8543ffffff         jne 0x5e6460
// 005e651d  5f                   pop edi
// 005e651e  d9442404             fld dword ptr [esp + 4]
// 005e6522  5e                   pop esi
// 005e6523  83c434               add esp, 0x34
// 005e6526  c3                   ret 

#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
};

extern Vector3 __cdecl absolute(const Vector3&);
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern const float half;

struct Body {
    char reserved[0xB8];
    Vector3 position;
    const void* get();
    Vector3 getCenter() const;
};

struct Geometry {
    char reserved[4];
    Vector3 size;
};

struct Node {
    char reserved[0x9C];
    Geometry* geometry;
    Body* body;
};

struct Iterator {
    Node* current;
    int state;
    void advance();
};

struct S {
    char reserved[0x1C];
    Node* root;
    float f();
};

float S::f()
{
    float radius = 0.0f;
    Vector3 center = root->body->getCenter();
    Iterator it;
    it.current = root;
    it.state = 1;

    while (it.current) {
        Node* node = it.current;
        Body* body = node->body;
        body->get();

        Vector3 offset(
            body->position.x - center.x,
            body->position.y - center.y,
            body->position.z - center.z);
        Vector3 distance = absolute(offset);

        const Vector3& size = node->geometry->size;
        Vector3 scaled(size.x * half, size.y * half, size.z * half);
        Vector3 extent(
            scaled.x + distance.x,
            scaled.y + distance.y,
            scaled.z + distance.z);

        float candidate = (float)sqrt(
            extent.x * extent.x +
            extent.y * extent.y +
            extent.z * extent.z);

        const float& largest = radius < candidate ? candidate : radius;
        radius = largest;
        it.advance();
    }
    return radius;
}
