// from server: 100% by king_originala
// roc 2008-06 006432e0  unit: RBX::HUMAN::Landed  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006432e0
//
// 006432e0  8b4904               mov ecx, dword ptr [ecx + 4]
// 006432e3  56                   push esi
// 006432e4  57                   push edi
// 006432e5  e8b65df9ff           call 0x5d90a0
// 006432ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006432ee  80bea800000000       cmp byte ptr [esi + 0xa8], 0
// 006432f5  bf02000000           mov edi, 2
// 006432fa  7523                 jne 0x64331f
// 006432fc  80beab00000000       cmp byte ptr [esi + 0xab], 0
// 00643303  751a                 jne 0x64331f
// 00643305  85c0                 test eax, eax
// 00643307  7420                 je 0x643329
// 00643309  53                   push ebx
// 0064330a  8bc8                 mov ecx, eax
// 0064330c  e85f42faff           call 0x5e7570
// 00643311  8bce                 mov ecx, esi
// 00643313  8bd8                 mov ebx, eax
// 00643315  e85642faff           call 0x5e7570
// 0064331a  3bd8                 cmp ebx, eax
// 0064331c  5b                   pop ebx
// 0064331d  750a                 jne 0x643329
// 0064331f  5f                   pop edi
// 00643320  b801000000           mov eax, 1
// 00643325  5e                   pop esi
// 00643326  c20400               ret 4
// 00643329  8bc7                 mov eax, edi
// 0064332b  5f                   pop edi
// 0064332c  5e                   pop esi
// 0064332d  c20400               ret 4

struct Ball
{
    unsigned char padding[0xa8];
    unsigned char flagA;
    unsigned char reserved[2];
    unsigned char flagB;

    int getBulletSphereShape() const;
};

struct Owner
{
    void* f();
};

struct Landed
{
    unsigned char padding[4];
    Owner* owner;

    int f(Ball* ball);
};

int Landed::f(Ball* ball)
{
    Ball* current = static_cast<Ball*>(owner->f());
    int result = 2;

    if (ball->flagA || ball->flagB ||
        (current &&
         current->getBulletSphereShape() == ball->getBulletSphereShape()))
    {
        result = 1;
    }

    return result;
}
