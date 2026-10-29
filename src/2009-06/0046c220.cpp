// roc 2009-06 0046c220  unit: DxUserInput  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c220
//
// 0046c220  8b442404             mov eax, dword ptr [esp + 4]
// 0046c224  d94004               fld dword ptr [eax + 4]
// 0046c227  53                   push ebx
// 0046c228  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0046c22c  56                   push esi
// 0046c22d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0046c231  d84604               fadd dword ptr [esi + 4]
// 0046c234  57                   push edi
// 0046c235  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046c239  51                   push ecx
// 0046c23a  d95c241c             fstp dword ptr [esp + 0x1c]
// 0046c23e  d9ee                 fldz 
// 0046c240  d91c24               fstp dword ptr [esp]
// 0046c243  6a06                 push 6
// 0046c245  57                   push edi
// 0046c246  56                   push esi
// 0046c247  53                   push ebx
// 0046c248  50                   push eax
// 0046c249  e8b2feffff           call 0x46c100
// 0046c24e  d9ee                 fldz 
// 0046c250  d95b04               fstp dword ptr [ebx + 4]
// 0046c253  83c418               add esp, 0x18
// 0046c256  d9442418             fld dword ptr [esp + 0x18]
// 0046c25a  d95e04               fstp dword ptr [esi + 4]
// 0046c25d  d94704               fld dword ptr [edi + 4]
// 0046c260  d80d4cad8b00         fmul dword ptr [0x8bad4c]
// 0046c266  d82544d08b00         fsub dword ptr [0x8bd044]
// 0046c26c  d9e0                 fchs 
// 0046c26e  d9542418             fst dword ptr [esp + 0x18]
// 0046c272  d85e04               fcomp dword ptr [esi + 4]
// 0046c275  dfe0                 fnstsw ax
// 0046c277  f6c405               test ah, 5
// 0046c27a  7a0a                 jp 0x46c286
// 0046c27c  d94604               fld dword ptr [esi + 4]
// 0046c27f  5f                   pop edi
// 0046c280  d95e04               fstp dword ptr [esi + 4]
// 0046c283  5e                   pop esi
// 0046c284  5b                   pop ebx
// 0046c285  c3                   ret 
// 0046c286  8d442418             lea eax, [esp + 0x18]
// 0046c28a  d900                 fld dword ptr [eax]
// 0046c28c  5f                   pop edi
// 0046c28d  d95e04               fstp dword ptr [esi + 4]
// 0046c290  5e                   pop esi
// 0046c291  5b                   pop ebx
// 0046c292  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAXPAUVector2@@000@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vector2
{
    float x;
    float y;
};

extern float scale;
extern float offset;

extern void __cdecl transform(Vector2*, Vector2*, Vector2*, Vector2*, int, float);

void __cdecl func_0046a130(Vector2* a, Vector2* b, Vector2* c, Vector2* d)
{
    float value = a->y + c->y;
    transform(a, b, c, d, 6, 0.0f);
    b->y = 0.0f;
    c->y = value;
    value = -(d->y * scale - offset);
    float& result = c->y > value ? c->y : value;
    c->y = result;
}