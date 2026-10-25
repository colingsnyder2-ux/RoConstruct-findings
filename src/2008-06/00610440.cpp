// from server: 100% by king_originala
// roc 2008-06 00610440  unit: RBX::BlockBlockContact  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610440
//
// 00610440  83ec0c               sub esp, 0xc
// 00610443  d9ee                 fldz 
// 00610445  56                   push esi
// 00610446  8b742418             mov esi, dword ptr [esp + 0x18]
// 0061044a  d9542404             fst dword ptr [esp + 4]
// 0061044e  d90578728200         fld dword ptr [0x827278]
// 00610454  57                   push edi
// 00610455  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00610459  d95c240c             fstp dword ptr [esp + 0xc]
// 0061045d  56                   push esi
// 0061045e  8d44240c             lea eax, [esp + 0xc]
// 00610462  50                   push eax
// 00610463  d95c2418             fstp dword ptr [esp + 0x18]
// 00610467  57                   push edi
// 00610468  e803feffff           call 0x610270
// 0061046d  56                   push esi
// 0061046e  e8edd3fcff           call 0x5dd860
// 00610473  83c410               add esp, 0x10
// 00610476  84c0                 test al, al
// 00610478  7554                 jne 0x6104ce
// 0061047a  53                   push ebx
// 0061047b  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0061047f  90                   nop 
// 00610480  53                   push ebx
// 00610481  57                   push edi
// 00610482  e8a9fcffff           call 0x610130
// 00610487  83c408               add esp, 8
// 0061048a  84c0                 test al, al
// 0061048c  7434                 je 0x6104c2
// 0061048e  d9ee                 fldz 
// 00610490  56                   push esi
// 00610491  d9542410             fst dword ptr [esp + 0x10]
// 00610495  8d4c2410             lea ecx, [esp + 0x10]
// 00610499  d90578728200         fld dword ptr [0x827278]
// 0061049f  51                   push ecx
// 006104a0  d95c2418             fstp dword ptr [esp + 0x18]
// 006104a4  57                   push edi
// 006104a5  d95c2420             fstp dword ptr [esp + 0x20]
// 006104a9  e8c2fdffff           call 0x610270
// 006104ae  56                   push esi
// 006104af  e8acd3fcff           call 0x5dd860
// 006104b4  83c410               add esp, 0x10
// 006104b7  84c0                 test al, al
// 006104b9  74c5                 je 0x610480
// 006104bb  5b                   pop ebx
// 006104bc  5f                   pop edi
// 006104bd  5e                   pop esi
// 006104be  83c40c               add esp, 0xc
// 006104c1  c3                   ret 
// 006104c2  53                   push ebx
// 006104c3  56                   push esi
// 006104c4  57                   push edi
// 006104c5  e8d6feffff           call 0x6103a0
// 006104ca  83c40c               add esp, 0xc
// 006104cd  5b                   pop ebx
// 006104ce  5f                   pop edi
// 006104cf  5e                   pop esi
// 006104d0  83c40c               add esp, 0xc
// 006104d3  c3                   ret 

struct Vector3 {
    float x, y, z;
};

extern const float axisValue;

void __cdecl update(void *, const Vector3 &, Vector3 *);
bool __cdecl isZero(const Vector3 *);
bool __cdecl advance(void *, void *);
void __cdecl finish(void *, Vector3 *, void *);

void __cdecl process(void *object, Vector3 *result, void *context)
{
    Vector3 direction = { 0.0f, axisValue, 0.0f };
    update(object, direction, result);
    if (isZero(result))
        return;

    do {
        if (!advance(object, context)) {
            finish(object, result, context);
            return;
        }
        direction.x = 0.0f;
        direction.y = axisValue;
        direction.z = 0.0f;
        update(object, direction, result);
    } while (!isZero(result));
}
