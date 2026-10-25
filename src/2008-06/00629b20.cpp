// from server: 100% by king_originala
// roc 2008-06 00629b20  unit: RBX::ClickDetector  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629b20
//
// 00629b20  56                   push esi
// 00629b21  57                   push edi
// 00629b22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00629b26  85ff                 test edi, edi
// 00629b28  744f                 je 0x629b79
// 00629b2a  8bf7                 mov esi, edi
// 00629b2c  8d642400             lea esp, [esp]
// 00629b30  8bce                 mov ecx, esi
// 00629b32  e869f9ffff           call 0x6294a0
// 00629b37  8bc8                 mov ecx, eax
// 00629b39  85c9                 test ecx, ecx
// 00629b3b  7417                 je 0x629b54
// 00629b3d  d98144010000         fld dword ptr [ecx + 0x144]
// 00629b43  d9442410             fld dword ptr [esp + 0x10]
// 00629b47  d8d1                 fcom st(1)
// 00629b49  dfe0                 fnstsw ax
// 00629b4b  ddd9                 fstp st(1)
// 00629b4d  f6c405               test ah, 5
// 00629b50  7b2c                 jnp 0x629b7e
// 00629b52  ddd8                 fstp st(0)
// 00629b54  8bb604010000         mov esi, dword ptr [esi + 0x104]
// 00629b5a  85f6                 test esi, esi
// 00629b5c  741b                 je 0x629b79
// 00629b5e  6a00                 push 0
// 00629b60  68b8819400           push 0x9481b8
// 00629b65  687c909200           push 0x92907c
// 00629b6a  6a00                 push 0
// 00629b6c  56                   push esi
// 00629b6d  e8547c0700           call 0x6a17c6
// 00629b72  83c414               add esp, 0x14
// 00629b75  85c0                 test eax, eax
// 00629b77  74b7                 je 0x629b30
// 00629b79  5f                   pop edi
// 00629b7a  32c0                 xor al, al
// 00629b7c  5e                   pop esi
// 00629b7d  c3                   ret 
// 00629b7e  807c241400           cmp byte ptr [esp + 0x14], 0
// 00629b83  740f                 je 0x629b94
// 00629b85  51                   push ecx
// 00629b86  d91c24               fstp dword ptr [esp]
// 00629b89  57                   push edi
// 00629b8a  e831ffffff           call 0x629ac0
// 00629b8f  5f                   pop edi
// 00629b90  b001                 mov al, 1
// 00629b92  5e                   pop esi
// 00629b93  c3                   ret 
// 00629b94  5f                   pop edi
// 00629b95  ddd8                 fstp st(0)
// 00629b97  b001                 mov al, 1
// 00629b99  5e                   pop esi
// 00629b9a  c3                   ret 

struct Detector;

struct Instance {
    virtual void anchor();
    char padding[256];
    Instance* parent;
    Detector* getDetector();
};

struct Detector {
    char padding[324];
    float maximumDistance;
    void activate(Instance*, float);
};

extern char instanceType[];
extern char workspaceType[];
extern "C" void* __cdecl castInstance(
    Instance*, int, void*, void*, int);

bool func_00629b20(Instance* instance, float distance, bool activate)
{
    if (instance) {
        Instance* current = instance;
        do {
            Detector* detector = current->getDetector();
            if (detector && detector->maximumDistance > distance) {
                if (activate)
                    detector->activate(instance, distance);
                return true;
            }
            current = current->parent;
        } while (current &&
                 !castInstance(current, 0, instanceType, workspaceType, 0));
    }
    return false;
}
